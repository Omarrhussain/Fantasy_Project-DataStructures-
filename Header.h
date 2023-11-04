#include <string>
#include <vector>
#include <set>
#include <fstream>
#include <sstream>
#include <map>
#include <unordered_map>
#include "MyForm.h"

using namespace std;

class Football_Player {
public:
	string name, club_name, league, pos;
	int price;
};

unordered_map<string, string> Read_Users() {
	ifstream user("Users.txt");
	unordered_map<std::string, std::string> username;
	if (user.is_open()) {
		string s;
		while (getline(user, s)) {
			istringstream iss(s);
			string temp[2];
			getline(iss, temp[0], '#'), getline(iss, temp[1], '#');
			username[temp[0]] = temp[1];
		}
	}
	return username;
}
//
vector<Football_Player> Read_Players() {
	ifstream fb_player("Football_Players.txt");
	vector<Football_Player> footballers;
	if (fb_player.is_open()) {
        string s;
		while (getline(fb_player, s)) {
			string temp;
			istringstream iss(s);
			Football_Player f;
			int in = 0;
			while (getline(iss, temp, '#')) {
				switch (in) {
				case 0: f.name = temp; break;
				case 1: f.club_name = temp; break;
				case 2: f.league = temp; break;
				case 3: f.pos = temp; break;
				case 4: f.price = stoi(temp);
				}
				in++; 
			}
			footballers.push_back(f);
		}
	}
	return footballers;
}
map<string,vector<int>> Read_fb_points() {
	map <string, vector<int>> mp;
	ifstream fb_points("fb_points.txt");
	if (fb_points.is_open()) {
		string line;
		while (getline(fb_points, line)) {
			int week{};
			string temp, name;
			for (int i = 0; i < line.size(); i++) {
				if (line[i] == '#' && !week) {
					week++;
					name = temp;
					temp = "";
				}
				else if (line[i] == '#') {
					week++;
					mp[name].push_back(stoi(temp));
					temp = "";
				}
				else {
					temp += line[i];
				}
			}
			mp[name].push_back(stoi(temp));
		}
		fb_points.close();
	}
	return mp;
}

class team {
public:
	set<string> tt;
	int budget = 100;
	vector<Football_Player> fb = Read_Players();
	bool Add_Player(string player) {
		if (tt.find(player) == tt.end() && tt.size() < 5) {
			for (auto& i : fb) {
				if (i.name == player) {
					tt.insert(player);
					budget -= i.price;
					break;
				}
			}
			return true;
		}
		else {
			return false;
		}
	}
	void Remove_Player(string player) {
		if (tt.find(player) != tt.end()) {
			for (auto& i : fb) {
				if (i.name == player) {
					budget += i.price;
					break;
				}
			}
			tt.erase(player);
		}
	}
};
map<string,team> Read_users_teams() {
	map<string, team> mp;
	ifstream user("user_teams.txt");
	//bool found = false;
	if (user.is_open()) {
		string s; 
		while (getline(user, s)) {
			string use, tmp;
			bool fst = true;
			for (int i = 0; i < s.size(); i++) {
				if (s[i] == '#' && fst) {
					use = tmp;
					fst = false;
					tmp = "";
					continue;
				}
				else if (s[i] == '#') {
					mp[use].Add_Player(tmp);
					tmp = "";
					continue;
				}
				tmp += s[i];
			}
			mp[use].Add_Player(tmp);
		}
		user.close();
	}
	return mp;
}
class Admin {
public:
	void remove_player(string s) {
		vector<string> v;
		ifstream temp("Users.txt");
		if (temp.is_open()) {
			string k;
			while (getline(temp, k))
			{
				v.push_back(k);
			}
			temp.close();
		}
		fstream temp2("Users.txt", ios::out);
		if (temp2.is_open()) {
			bool fst = true;
			for (int i = 0; i < v.size() ; i++) {
				string tmp;
				for (int j = 0; v[i][j] != '#'; j++) {
					tmp += v[i][j];
				}
				if (tmp != s && fst) {
					temp2 << v[i]; fst = false;
				}
				else if (tmp != s) {
					temp2 << endl << v[i];
				}
			}
			temp2.close();
		}
		ifstream temp_teams("user_teams.txt",ios::in);
		ofstream tempo_teams("temporary_teams.txt");
		if (temp_teams.is_open()) {
			string line;
			bool fst = true;
			while (getline(temp_teams, line)) {
				string tmp;
				for (int i = 0; line[i] != '#'; i++) {
					tmp += line[i];
				}
				if (tmp == s) {
					continue;
				}
				else {
					if (fst) {
						tempo_teams << line;
						fst = false;
					}
					else {
						tempo_teams << '\n' << line;
					}
				}
			}
			temp_teams.close();
			tempo_teams.close();
		}
		remove("user_teams.txt");
		rename("temporary_teams.txt", "user_teams.txt");
	}
	void update_points(string name,int week,int val) {
		ifstream temp("fb_points.txt", ios::in);
		ofstream write("temporary_points.txt");
		if (temp.is_open()) {
			string line;
			while (getline(temp, line)) {
				if (line.find(name) != string::npos) {
					string temp2;
					int cnt{};
					for (int i = 0; i < line.size(); i++) {
						if (line[i] == '#' && cnt != week) {
							write << temp2 << "#";
							cnt++;
							temp2 = "";
							continue;
						}
						else if (line[i] == '#' && cnt == week) {
							write << val << "#";
							cnt++;
							temp2 = "";
							continue;
						}
						temp2 += line[i];
					}
					write << temp2 << endl;
				}
				else {
					write << line << '\n';
				}
			}
			temp.close();
			write.close();
		}
		remove("fb_points.txt");
		rename("temporary_points.txt", "fb_points.txt");
	}
	void update_fb_price(string name,string val) {
		ifstream temp("Football_Players.txt", ios::in);
		ofstream write("temporary_fb.txt");
		if (temp.is_open()) {
			string line;
			while (getline(temp, line)) {
				if (line.find(name) != string::npos) {
					string temp2;
					int cnt{};
					for (int i = 0; i < line.size(); i++) {
						if (line[i] == '#' && cnt != 4) {
							write << temp2 << "#";
							cnt++;
							temp2 = "";
							continue;
						}
						else if (line[i] == '#' && cnt == 4) {
							write << val << "#" << endl;
							break;
						}
						temp2 += line[i];
					}
				}
				else {
					write << line << '\n';
				}
			}
			temp.close();
			write.close();
		}
		remove("Football_Players.txt");
		rename("temporary_fb.txt", "Football_Players.txt");
	}
	void Add_Footballer(string name, string club, string league, string pos, string price) {
		ofstream addfootballer("Football_Players.txt", ios::app);
		if (addfootballer.is_open()) {
			string line = name + '#' + club + '#' + league + '#' + pos + '#' + price + '#';
			addfootballer << '\n' << line;
			addfootballer.close();
		}
	}
};