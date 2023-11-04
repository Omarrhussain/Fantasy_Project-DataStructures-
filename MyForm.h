#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
#include "Header.h"

//
string current_user = "",curr_pos = "",curr_changed = "";
vector<Football_Player> fb_players = Read_Players();
unordered_map<string, string> users = Read_Users();
map<string, vector<int>> fb_points = Read_fb_points();
map<string, team> user_teams = Read_users_teams();
Admin admin;

namespace fantasy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr;
	using namespace interop;
	using namespace std;
	//
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ elwagha;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ login;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ signup;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;



	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button6;




	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox4;










	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;




	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Label^ label27;

private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::ComboBox^ comboBox3;

private: System::Windows::Forms::Panel^ panel7;
private: System::Windows::Forms::ComboBox^ comboBox4;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::TextBox^ textBox7;


private: System::Windows::Forms::Label^ label32;

private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Panel^ panel8;
private: System::Windows::Forms::Button^ button28;

private: System::Windows::Forms::Label^ label36;

private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Panel^ panel9;
private: System::Windows::Forms::ListBox^ listBox2;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Panel^ panel10;

private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::ListBox^ listBox3;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::ComboBox^ comboBox7;
private: System::Windows::Forms::Button^ button31;

private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
private: System::Windows::Forms::CheckBox^ checkBox3;
private: System::Windows::Forms::CheckBox^ checkBox2;
private: System::Windows::Forms::CheckBox^ checkBox1;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Panel^ panel11;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Label^ label49;
private: System::Windows::Forms::Label^ label48;
private: System::Windows::Forms::Label^ label47;
private: System::Windows::Forms::Label^ label46;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::ComboBox^ comboBox5;
private: System::Windows::Forms::TextBox^ textBox12;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::TextBox^ textBox10;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label44;





























































	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->elwagha = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->login = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->signup = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->elwagha->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->login->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->signup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->SuspendLayout();
			// 
			// elwagha
			// 
			this->elwagha->BackColor = System::Drawing::Color::Transparent;
			this->elwagha->Controls->Add(this->label3);
			this->elwagha->Controls->Add(this->button2);
			this->elwagha->Controls->Add(this->label2);
			this->elwagha->Controls->Add(this->label4);
			this->elwagha->Controls->Add(this->button1);
			this->elwagha->Controls->Add(this->label1);
			this->elwagha->Location = System::Drawing::Point(0, 0);
			this->elwagha->Name = L"elwagha";
			this->elwagha->Size = System::Drawing::Size(1130, 680);
			this->elwagha->TabIndex = 0;
			this->elwagha->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(44, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"label3";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(525, 542);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(139, 37);
			this->button2->TabIndex = 5;
			this->button2->Text = L"SIGN UP";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(588, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(429, 74);
			this->label2->TabIndex = 3;
			this->label2->Text = L"FCIS Fantasy";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold Condensed", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(363, 549);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 25);
			this->label4->TabIndex = 7;
			this->label4->Text = L"NEW PLAYER \?";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(525, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 37);
			this->button1->TabIndex = 4;
			this->button1->Text = L"LOG IN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(168, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(414, 74);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Welcome To";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(14, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(311, 93);
			this->button4->TabIndex = 6;
			this->button4->Text = L"My Team";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button7->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(12, 425);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(311, 87);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Leaderboards";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label8->Location = System::Drawing::Point(36, 10);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(269, 44);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Main Menu";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(515, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(625, 618);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->button17);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1140, 680);
			this->panel1->TabIndex = 2;
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::White;
			this->button17->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(995, 0);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(139, 37);
			this->button17->TabIndex = 16;
			this->button17->Text = L"Log Out";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label7->Location = System::Drawing::Point(37, 603);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(246, 42);
			this->label7->TabIndex = 15;
			this->label7->Text = L"My Balance: ";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button8->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(12, 270);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(311, 101);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Footballers Points";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(82, 378);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(240, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(81, 207);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 26);
			this->label5->TabIndex = 2;
			this->label5->Text = L"USERNAME :";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Location = System::Drawing::Point(83, 323);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 26);
			this->label6->TabIndex = 3;
			this->label6->Text = L"PASSWORD :";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 258);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(82, 485);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 37);
			this->button3->TabIndex = 5;
			this->button3->Text = L"CONFIRM";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// login
			// 
			this->login->BackColor = System::Drawing::Color::Transparent;
			this->login->Controls->Add(this->pictureBox3);
			this->login->Controls->Add(this->label14);
			this->login->Controls->Add(this->button10);
			this->login->Controls->Add(this->button3);
			this->login->Controls->Add(this->textBox1);
			this->login->Controls->Add(this->label6);
			this->login->Controls->Add(this->label5);
			this->login->Controls->Add(this->textBox2);
			this->login->Location = System::Drawing::Point(0, 0);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(1260, 720);
			this->login->TabIndex = 1;
			this->login->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::login_Paint);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(499, 77);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(454, 584);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label14->Location = System::Drawing::Point(87, 78);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(249, 44);
			this->label14->TabIndex = 14;
			this->label14->Text = L"Logging in";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(888, 41);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(232, 37);
			this->button10->TabIndex = 10;
			this->button10->Text = L"BACK TO HOME";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// signup
			// 
			this->signup->BackColor = System::Drawing::Color::Transparent;
			this->signup->Controls->Add(this->button9);
			this->signup->Controls->Add(this->button5);
			this->signup->Controls->Add(this->pictureBox2);
			this->signup->Controls->Add(this->label12);
			this->signup->Controls->Add(this->label11);
			this->signup->Controls->Add(this->label10);
			this->signup->Controls->Add(this->textBox5);
			this->signup->Controls->Add(this->label9);
			this->signup->Controls->Add(this->textBox4);
			this->signup->Controls->Add(this->textBox3);
			this->signup->Location = System::Drawing::Point(0, 0);
			this->signup->Name = L"signup";
			this->signup->Size = System::Drawing::Size(1130, 680);
			this->signup->TabIndex = 10;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(873, 48);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(232, 37);
			this->button9->TabIndex = 9;
			this->button9->Text = L"BACK TO HOME";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(83, 522);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(152, 37);
			this->button5->TabIndex = 8;
			this->button5->Text = L"CONFIRM";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(426, 112);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(713, 612);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label12->Location = System::Drawing::Point(76, 159);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(149, 26);
			this->label12->TabIndex = 6;
			this->label12->Text = L"USERNAME :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label11->Location = System::Drawing::Point(76, 353);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(260, 26);
			this->label11->TabIndex = 5;
			this->label11->Text = L"CONFIRM PASSWORD :";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label10->Location = System::Drawing::Point(76, 259);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 26);
			this->label10->TabIndex = 4;
			this->label10->Text = L"PASSWORD :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(83, 401);
			this->textBox5->Name = L"textBox5";
			this->textBox5->PasswordChar = '*';
			this->textBox5->Size = System::Drawing::Size(241, 22);
			this->textBox5->TabIndex = 2;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label9->Location = System::Drawing::Point(73, 58);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(419, 44);
			this->label9->TabIndex = 3;
			this->label9->Text = L"Creating Account";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(81, 301);
			this->textBox4->Name = L"textBox4";
			this->textBox4->PasswordChar = '*';
			this->textBox4->Size = System::Drawing::Size(241, 22);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(81, 208);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(241, 22);
			this->textBox3->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label13->Location = System::Drawing::Point(46, 35);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(218, 44);
			this->label13->TabIndex = 13;
			this->label13->Text = L"matches";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(951, 35);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(139, 37);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Menu";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1130, 674);
			this->panel3->TabIndex = 17;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1137, 671);
			this->panel2->TabIndex = 16;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label43->Location = System::Drawing::Point(317, 122);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(0, 29);
			this->label43->TabIndex = 19;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label42->Location = System::Drawing::Point(261, 54);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(0, 29);
			this->label42->TabIndex = 18;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label41->Location = System::Drawing::Point(30, 122);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(261, 29);
			this->label41->TabIndex = 17;
			this->label41->Text = L"Current Standing :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label35->Location = System::Drawing::Point(29, 54);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(196, 29);
			this->label35->TabIndex = 16;
			this->label35->Text = L"Total Points :";
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackColor = System::Drawing::Color::White;
			this->button16->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(933, 35);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(139, 37);
			this->button16->TabIndex = 15;
			this->button16->Text = L"Menu";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(733, 359);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(67, 16);
			this->label19->TabIndex = 10;
			this->label19->Text = L"No Player";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(733, 258);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(67, 16);
			this->label18->TabIndex = 9;
			this->label18->Text = L"No Player";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(843, 329);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 16);
			this->label17->TabIndex = 8;
			this->label17->Text = L"No Player";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(636, 329);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(67, 16);
			this->label16->TabIndex = 7;
			this->label16->Text = L"No Player";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(733, 435);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(67, 16);
			this->label15->TabIndex = 6;
			this->label15->Text = L"No Player";
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Transparent;
			this->button15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.BackgroundImage")));
			this->button15->Location = System::Drawing::Point(736, 188);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(53, 57);
			this->button15->TabIndex = 5;
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Transparent;
			this->button14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.BackgroundImage")));
			this->button14->Location = System::Drawing::Point(639, 259);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(53, 57);
			this->button14->TabIndex = 4;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Transparent;
			this->button13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.BackgroundImage")));
			this->button13->Location = System::Drawing::Point(846, 258);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(53, 57);
			this->button13->TabIndex = 3;
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Transparent;
			this->button12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.BackgroundImage")));
			this->button12->Location = System::Drawing::Point(736, 301);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(53, 57);
			this->button12->TabIndex = 2;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Transparent;
			this->button11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.BackgroundImage")));
			this->button11->Location = System::Drawing::Point(736, 375);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(53, 57);
			this->button11->TabIndex = 1;
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(484, 167);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(557, 362);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->label34);
			this->panel5->Controls->Add(this->label31);
			this->panel5->Controls->Add(this->comboBox2);
			this->panel5->Controls->Add(this->label25);
			this->panel5->Controls->Add(this->button21);
			this->panel5->Controls->Add(this->button20);
			this->panel5->Controls->Add(this->label24);
			this->panel5->Controls->Add(this->textBox6);
			this->panel5->Controls->Add(this->label23);
			this->panel5->Controls->Add(this->label22);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->listBox1);
			this->panel5->Controls->Add(this->label21);
			this->panel5->Location = System::Drawing::Point(0, 0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1130, 671);
			this->panel5->TabIndex = 19;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label34->Location = System::Drawing::Point(491, 470);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(0, 29);
			this->label34->TabIndex = 27;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label31->Location = System::Drawing::Point(479, 424);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(307, 29);
			this->label31->TabIndex = 26;
			this->label31->Text = L"Current Week Points :";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(484, 258);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(332, 24);
			this->comboBox2->TabIndex = 25;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label25->Location = System::Drawing::Point(479, 208);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(190, 29);
			this->label25->TabIndex = 24;
			this->label25->Text = L"Player Name :";
			// 
			// button21
			// 
			this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button21->BackColor = System::Drawing::Color::White;
			this->button21->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(981, 613);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(139, 37);
			this->button21->TabIndex = 22;
			this->button21->Text = L"Confirm";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button20->BackColor = System::Drawing::Color::White;
			this->button20->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(951, 28);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(139, 37);
			this->button20->TabIndex = 21;
			this->button20->Text = L"Menu";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label24->Location = System::Drawing::Point(479, 523);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(114, 29);
			this->label24->TabIndex = 20;
			this->label24->Text = L"Points :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(484, 577);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(338, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label23->Location = System::Drawing::Point(479, 310);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(171, 29);
			this->label23->TabIndex = 18;
			this->label23->Text = L"Game Week :";
			this->label23->Click += gcnew System::EventHandler(this, &MyForm::label23_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label22->Location = System::Drawing::Point(39, 202);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(133, 29);
			this->label22->TabIndex = 17;
			this->label22->Text = L"Players :";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(484, 364);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(332, 24);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(44, 248);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(336, 372);
			this->listBox1->TabIndex = 15;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label21->Location = System::Drawing::Point(46, 28);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(593, 44);
			this->label21->TabIndex = 14;
			this->label21->Text = L"Changing Player Points : ";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->button23);
			this->panel6->Controls->Add(this->button22);
			this->panel6->Controls->Add(this->label27);
			this->panel6->Controls->Add(this->comboBox3);
			this->panel6->Controls->Add(this->label26);
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1130, 671);
			this->panel6->TabIndex = 22;
			// 
			// button23
			// 
			this->button23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button23->BackColor = System::Drawing::Color::White;
			this->button23->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(426, 493);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(248, 59);
			this->button23->TabIndex = 29;
			this->button23->Text = L"Remove";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click_1);
			// 
			// button22
			// 
			this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button22->BackColor = System::Drawing::Color::White;
			this->button22->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(981, 25);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(139, 37);
			this->button22->TabIndex = 28;
			this->button22->Text = L"Menu";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label27->Location = System::Drawing::Point(370, 247);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(108, 29);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Users : ";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(368, 299);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(379, 24);
			this->comboBox3->TabIndex = 26;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged_1);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label26->Location = System::Drawing::Point(27, 25);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(450, 44);
			this->label26->TabIndex = 15;
			this->label26->Text = L"Removing Player : ";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->label33);
			this->panel7->Controls->Add(this->label30);
			this->panel7->Controls->Add(this->comboBox4);
			this->panel7->Controls->Add(this->label28);
			this->panel7->Controls->Add(this->button25);
			this->panel7->Controls->Add(this->button26);
			this->panel7->Controls->Add(this->label29);
			this->panel7->Controls->Add(this->textBox7);
			this->panel7->Controls->Add(this->label32);
			this->panel7->Location = System::Drawing::Point(0, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1130, 671);
			this->panel7->TabIndex = 23;
			this->panel7->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel7_Paint);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label33->Location = System::Drawing::Point(650, 403);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(0, 29);
			this->label33->TabIndex = 27;
			this->label33->Click += gcnew System::EventHandler(this, &MyForm::label33_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label30->Location = System::Drawing::Point(410, 401);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(215, 29);
			this->label30->TabIndex = 26;
			this->label30->Text = L"Current Price :";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(415, 315);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(332, 24);
			this->comboBox4->TabIndex = 25;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label28->Location = System::Drawing::Point(410, 267);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(190, 29);
			this->label28->TabIndex = 24;
			this->label28->Text = L"Player Name :";
			// 
			// button25
			// 
			this->button25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button25->BackColor = System::Drawing::Color::White;
			this->button25->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(981, 613);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(139, 37);
			this->button25->TabIndex = 22;
			this->button25->Text = L"Confirm";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button26->BackColor = System::Drawing::Color::White;
			this->button26->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(933, 43);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(139, 37);
			this->button26->TabIndex = 21;
			this->button26->Text = L"Menu";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label29->Location = System::Drawing::Point(410, 481);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(159, 29);
			this->label29->TabIndex = 20;
			this->label29->Text = L"New Price :";
			this->label29->Click += gcnew System::EventHandler(this, &MyForm::label29_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(415, 537);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(338, 22);
			this->textBox7->TabIndex = 19;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label32->Location = System::Drawing::Point(46, 28);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(593, 44);
			this->label32->TabIndex = 14;
			this->label32->Text = L"Changing Player Points : ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->button32);
			this->panel4->Controls->Add(this->button27);
			this->panel4->Controls->Add(this->pictureBox5);
			this->panel4->Controls->Add(this->button24);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->label20);
			this->panel4->Location = System::Drawing::Point(1, -2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1130, 677);
			this->panel4->TabIndex = 24;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button32->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button32->Location = System::Drawing::Point(43, 276);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(311, 101);
			this->button32->TabIndex = 19;
			this->button32->Text = L"Add Footballer";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button27
			// 
			this->button27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button27->BackColor = System::Drawing::Color::White;
			this->button27->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(966, 28);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(139, 37);
			this->button27->TabIndex = 18;
			this->button27->Text = L"Log Out";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click_1);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(532, 144);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(588, 488);
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button24->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button24->Location = System::Drawing::Point(43, 403);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(311, 101);
			this->button24->TabIndex = 16;
			this->button24->Text = L"Change Price";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click_1);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button19->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button19->Location = System::Drawing::Point(43, 524);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(311, 101);
			this->button19->TabIndex = 15;
			this->button19->Text = L"Change Player Points";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click_1);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button18->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button18->Location = System::Drawing::Point(44, 144);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(311, 101);
			this->button18->TabIndex = 14;
			this->button18->Text = L"Remove User";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label20->Location = System::Drawing::Point(36, 28);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(295, 44);
			this->label20->TabIndex = 13;
			this->label20->Text = L"Admin Menu";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->checkBox3);
			this->panel8->Controls->Add(this->checkBox2);
			this->panel8->Controls->Add(this->checkBox1);
			this->panel8->Controls->Add(this->textBox8);
			this->panel8->Controls->Add(this->checkedListBox1);
			this->panel8->Controls->Add(this->button29);
			this->panel8->Controls->Add(this->label36);
			this->panel8->Controls->Add(this->button28);
			this->panel8->Location = System::Drawing::Point(4, 4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(1156, 676);
			this->panel8->TabIndex = 25;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Ravie", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox3->Location = System::Drawing::Point(716, 208);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(124, 28);
			this->checkBox3->TabIndex = 34;
			this->checkBox3->Text = L"By Club";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Ravie", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox2->Location = System::Drawing::Point(492, 205);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(141, 28);
			this->checkBox2->TabIndex = 33;
			this->checkBox2->Text = L"By Price";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged_1);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Ravie", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->checkBox1->Location = System::Drawing::Point(262, 207);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 28);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"By Name";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(289, 154);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(523, 22);
			this->textBox8->TabIndex = 31;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged_1);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(262, 251);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(611, 276);
			this->checkedListBox1->TabIndex = 30;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::checkedListBox1_SelectedIndexChanged);
			// 
			// button29
			// 
			this->button29->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button29->BackColor = System::Drawing::Color::White;
			this->button29->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(746, 573);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(203, 43);
			this->button29->TabIndex = 29;
			this->button29->Text = L"Back";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label36->Location = System::Drawing::Point(409, 264);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(0, 29);
			this->label36->TabIndex = 28;
			// 
			// button28
			// 
			this->button28->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button28->BackColor = System::Drawing::Color::White;
			this->button28->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(161, 573);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(185, 37);
			this->button28->TabIndex = 16;
			this->button28->Text = L"Add";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Transparent;
			this->panel9->Controls->Add(this->button30);
			this->panel9->Controls->Add(this->label38);
			this->panel9->Controls->Add(this->listBox2);
			this->panel9->Controls->Add(this->comboBox6);
			this->panel9->Controls->Add(this->label37);
			this->panel9->Location = System::Drawing::Point(0, -2);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(1134, 674);
			this->panel9->TabIndex = 26;
			// 
			// button30
			// 
			this->button30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button30->BackColor = System::Drawing::Color::White;
			this->button30->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(966, 22);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(139, 37);
			this->button30->TabIndex = 28;
			this->button30->Text = L"Menu";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label38->Location = System::Drawing::Point(323, 130);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(105, 29);
			this->label38->TabIndex = 27;
			this->label38->Text = L"Week : ";
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Georgia", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(356, 261);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(430, 384);
			this->listBox2->TabIndex = 15;
			this->listBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox2_SelectedIndexChanged);
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(325, 183);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(491, 24);
			this->comboBox6->TabIndex = 14;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label37->Location = System::Drawing::Point(36, 17);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(197, 44);
			this->label37->TabIndex = 13;
			this->label37->Text = L"Points :";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Transparent;
			this->panel10->Controls->Add(this->button31);
			this->panel10->Controls->Add(this->label40);
			this->panel10->Controls->Add(this->comboBox7);
			this->panel10->Controls->Add(this->listBox3);
			this->panel10->Controls->Add(this->label39);
			this->panel10->Location = System::Drawing::Point(1, 1);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(1130, 671);
			this->panel10->TabIndex = 28;
			// 
			// button31
			// 
			this->button31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button31->BackColor = System::Drawing::Color::White;
			this->button31->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(950, 32);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(139, 37);
			this->button31->TabIndex = 30;
			this->button31->Text = L"Menu";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label40->Location = System::Drawing::Point(303, 98);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(105, 29);
			this->label40->TabIndex = 29;
			this->label40->Text = L"Week : ";
			// 
			// comboBox7
			// 
			this->comboBox7->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox7->FormattingEnabled = true;
			this->comboBox7->Location = System::Drawing::Point(308, 141);
			this->comboBox7->Name = L"comboBox7";
			this->comboBox7->Size = System::Drawing::Size(491, 24);
			this->comboBox7->TabIndex = 28;
			this->comboBox7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox7_SelectedIndexChanged);
			// 
			// listBox3
			// 
			this->listBox3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->listBox3->Font = (gcnew System::Drawing::Font(L"Ravie", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->listBox3->ForeColor = System::Drawing::SystemColors::InactiveBorder;
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 36;
			this->listBox3->Location = System::Drawing::Point(80, 193);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(972, 436);
			this->listBox3->TabIndex = 15;
			this->listBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox3_SelectedIndexChanged);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label39->Location = System::Drawing::Point(36, 27);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(339, 44);
			this->label39->TabIndex = 14;
			this->label39->Text = L"Leaderboard :";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Transparent;
			this->panel11->Controls->Add(this->button34);
			this->panel11->Controls->Add(this->button33);
			this->panel11->Controls->Add(this->label49);
			this->panel11->Controls->Add(this->label48);
			this->panel11->Controls->Add(this->label47);
			this->panel11->Controls->Add(this->label46);
			this->panel11->Controls->Add(this->label45);
			this->panel11->Controls->Add(this->comboBox5);
			this->panel11->Controls->Add(this->textBox12);
			this->panel11->Controls->Add(this->textBox11);
			this->panel11->Controls->Add(this->textBox10);
			this->panel11->Controls->Add(this->textBox9);
			this->panel11->Controls->Add(this->label44);
			this->panel11->Location = System::Drawing::Point(0, 3);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(1134, 671);
			this->panel11->TabIndex = 29;
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::White;
			this->button34->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(919, 19);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(186, 37);
			this->button34->TabIndex = 27;
			this->button34->Text = L"Menu";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::White;
			this->button33->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(846, 590);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(186, 37);
			this->button33->TabIndex = 26;
			this->button33->Text = L"Confirm";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label49->Location = System::Drawing::Point(434, 458);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(85, 26);
			this->label49->TabIndex = 25;
			this->label49->Text = L"Price :";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label48->Location = System::Drawing::Point(434, 386);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(118, 26);
			this->label48->TabIndex = 24;
			this->label48->Text = L"Position :";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label47->Location = System::Drawing::Point(434, 310);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(106, 26);
			this->label47->TabIndex = 23;
			this->label47->Text = L"League :";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label46->Location = System::Drawing::Point(434, 234);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(76, 26);
			this->label46->TabIndex = 22;
			this->label46->Text = L"Club :";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Gill Sans Ultra Bold", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label45->Location = System::Drawing::Point(434, 152);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(89, 26);
			this->label45->TabIndex = 21;
			this->label45->Text = L"Name :";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"ATTACKER", L"DEFENDER", L"MIDFILEDER", L"GOALKEEPER" });
			this->comboBox5->Location = System::Drawing::Point(437, 417);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(345, 24);
			this->comboBox5->TabIndex = 20;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(436, 490);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(349, 22);
			this->textBox12->TabIndex = 19;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(437, 270);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(349, 22);
			this->textBox11->TabIndex = 18;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(437, 346);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(349, 22);
			this->textBox10->TabIndex = 17;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(436, 196);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(349, 22);
			this->textBox9->TabIndex = 16;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Ravie", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label44->Location = System::Drawing::Point(12, 15);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(383, 44);
			this->label44->TabIndex = 15;
			this->label44->Text = L"Add Footballer :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1132, 673);
			this->Controls->Add(this->elwagha);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->login);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->signup);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->elwagha->ResumeLayout(false);
			this->elwagha->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->login->ResumeLayout(false);
			this->login->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->signup->ResumeLayout(false);
			this->signup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	login->BringToFront();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	signup->BringToFront();
}
private: System::Void login_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context con;
	string in_user = con.marshal_as<string>(textBox1->Text);
	string in_pass = con.marshal_as<string>(textBox2->Text);
	if (in_user == "Admin" && in_pass == "Admin") {
		panel4->BringToFront();
	}
	else {
		if (users.find(in_user) != users.end() && users[in_user] == in_pass) {
			current_user = in_user;
			label7->Text = "My Balance: " + (user_teams[current_user].budget) + "K";
			panel1->BringToFront();
			textBox1->Text = "", textBox2->Text = "";
		}
		else {
			MessageBox::Show("Wrong Username or Password", "Warning");
		}
	}
	textBox1->Text = "";
	textBox2->Text = "";
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	marshal_context con;
	string in_user = con.marshal_as<string>(textBox3->Text);
	string in_pass = con.marshal_as<string>(textBox4->Text);
	string in_confirm_pass = con.marshal_as<string>(textBox5->Text);
	if (in_user.empty() || in_pass.empty() || in_confirm_pass.empty()) {
		MessageBox::Show("Fill The Missing Fields", "Warning");
	}
	else if (in_pass != in_confirm_pass) {
		MessageBox::Show("Password Confirmation Mismatch","Warning");
	}
	else {
		if (users.find(in_user) != users.end()) {
			MessageBox::Show("Username Already Exists", "Warning");
		}
		else {
			ofstream adduser("Users.txt",ios::app);
			if (adduser.is_open()) {
				if (!users.empty()) {
					adduser << '\n' << in_user + '#' + in_pass + '#';
				}
				else adduser << in_user + '#' + in_pass + '#';
				adduser.close();
			}
			ofstream addteam("user_teams.txt", ios::app);
			if (addteam.is_open()) {
				if (!user_teams.empty()) {
					addteam << '\n' << in_user + '#';
				}
				else addteam << in_user + '#';
				addteam.close();
			}
			user_teams = Read_users_teams();
			MessageBox::Show("Sign Up Completed Successfully!", "Congratulation");
			users = Read_Users();
			textBox3->Text = "";
			textBox4->Text = "";
			textBox5->Text = "";
			login->BringToFront();
		}
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	panel10->BringToFront();
	comboBox7->Items->Clear();
	listBox3->Items->Clear();
	for (int i = 1; i <= 38; i++) {
		String^ s = msclr::interop::marshal_as<String^>(to_string(i));
		comboBox7->Items->Add(s);
	}
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	elwagha->BringToFront();
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	elwagha->BringToFront();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	curr_pos = "GOALKEEPER";
	string k = msclr::interop::marshal_as<string>(label15->Text);
	if (k != "No Player") {
		curr_changed = k;
	}
	panel8->BringToFront();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BringToFront();
	label7->Text = "My Balance: " + (user_teams[current_user].budget) + "K";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (auto& i : user_teams[current_user].tt) {
		for (auto& j : fb_players) {
			if (i == j.name) {
				String^ s = msclr::interop::marshal_as<String^>(j.name);
				if (j.pos == "DEFENDER") {
					label19->Text = s;
				}
				else if (j.pos == "GOALKEEPER") {
					label15->Text = s;
				}
				else if (j.pos == "ATTACKER") {
					label18->Text = s;
				}
				else {
					if (label16->Text == s || label17->Text == s) {
						continue;
					}
					else if (label16->Text == "No Player") {
						label16->Text = s;
					}
					else {
						label17->Text = s;
					}
				}
				break;
			}
		}
	}
	int total_points = 0;
	for (auto& i : user_teams[current_user].tt) {
		for (int j = 0; j < 38; j++) {
			total_points += fb_points[i][j];
		}
	}
	int standing = -1;
	vector<pair<int, string>> points;
	for (auto& i : user_teams) {
		int sumPoints{};
		for (auto& j : i.second.tt) {
			for (int k = 0; k < 38; k++) {
				sumPoints += fb_points[j][k];
			}
		}
		points.emplace_back(sumPoints, i.first);
	}
	sort(points.rbegin(), points.rend());
	for (int i = 0; i <points.size() ; i++) {
		if (points[i].second == current_user) {
			label43->Text = msclr::interop::marshal_as<String^>(to_string(i + 1));
			break;
		}
	}
	label42->Text = msclr::interop::marshal_as<String^>(to_string(total_points));
	panel2->BringToFront();
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) {
	elwagha->BringToFront();
	label15->Text = "No Player";
	label16->Text = "No Player";
	label17->Text = "No Player";
	label18->Text = "No Player";
	label19->Text = "No Player";
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<string>(comboBox2->Text);
	string week = msclr::interop::marshal_as<string>(comboBox1->Text);
	if (!week.empty() && !s.empty()) {
		string tt = to_string(fb_points[s][stoi(week) - 1]);
		String^ ss = msclr::interop::marshal_as<String^>(tt);
		label34->Text = ss;
	}
}
private: System::Void label23_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->BringToFront();
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<string>(comboBox2->Text);
	string week = msclr::interop::marshal_as<string>(comboBox1->Text);
	if (!week.empty() && !s.empty()) {
		string tt = to_string(fb_points[s][stoi(week) - 1]);
		String^ ss = msclr::interop::marshal_as<String^>(tt);
		label34->Text = ss;
	}
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<string>(comboBox2->Text);
	string week = msclr::interop::marshal_as<string>(comboBox1->Text);
	string point = msclr::interop::marshal_as<string>(textBox6->Text);
	if (s.empty() || week.empty() || point.empty()) {
		MessageBox::Show("Fill The Missing Fields", "Warning");
	}
	else {
		for (auto& i : fb_players) {
			if (i.name == s) {
				admin.update_points(i.name, stoi(week), stoi(point));
				MessageBox::Show("Player Points Updated Succesfully", "Done");
			}
		}
	}
	fb_points.clear();
	fb_points = Read_fb_points();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button23_Click_1(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<string>(comboBox3->Text);
	if (s.empty()) {
		MessageBox::Show("Choose User", "Warning");
	}
	else {
		admin.remove_player(s);
		users.erase(s);
		user_teams.erase(s);
		MessageBox::Show("User Removed Successfully","Warning");
		comboBox3->Items->Clear();
		comboBox3->Text = "";
		for (auto i : users) {
			String^ s = msclr::interop::marshal_as<String^>(i.first);
			comboBox3->Items->Add(s);
		}
	}
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->BringToFront();
}
private: System::Void label29_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel7_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	string s = msclr::interop::marshal_as<string>(comboBox4->Text);
	for (auto& i : fb_players) {
		if (i.name == s) {	
			string t = to_string(i.price);
			String^ k = msclr::interop::marshal_as<String^>(t);
			label33->Text = k + "K";
		}
	}
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->BringToFront();
	label33->Text = "";
	comboBox4->Text = "";
	textBox7->Text = "";
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	elwagha->BringToFront();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
	string price = msclr::interop::marshal_as<string>(textBox7->Text),
		player = msclr::interop::marshal_as<string>(comboBox4->Text);
	if (price.empty() || player.empty()) {
		MessageBox::Show("Fill The Missing Fields", "Warning");
	}
	else {
		admin.update_fb_price(player,price);
		MessageBox::Show("Price Changed Successfully", "Done !!");
		String^ pr = msclr::interop::marshal_as<String^>(price);
		label33->Text = pr + "K";
		fb_players = Read_Players();
	}
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
	panel6->BringToFront();
	comboBox3->Items->Clear();
	for (auto i : users) {
		String^ s = msclr::interop::marshal_as<String^>(i.first);
		comboBox3->Items->Add(s);
	}
}
private: System::Void comboBox3_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button27_Click_1(System::Object^ sender, System::EventArgs^ e) {
	elwagha->BringToFront();
}
private: System::Void button24_Click_1(System::Object^ sender, System::EventArgs^ e) {
	panel7->BringToFront();
	comboBox4->Items->Clear();
	for (auto i : fb_players) {
		String^ s = msclr::interop::marshal_as<String^>(i.name);
		comboBox4->Items->Add(s);
	}
}
private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) {
	listBox1->Items->Clear();
	comboBox2->Items->Clear();
	comboBox1->Items->Clear();
	for (auto& i : fb_players) {
		String^ s = msclr::interop::marshal_as<String^>(i.name);
		listBox1->Items->Add(s);
		comboBox2->Items->Add(s);
	}
	for (int i = 1; i <= 38; i++) {
		comboBox1->Items->Add(i);
	}
	panel5->BringToFront();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	curr_pos = "DEFENDER";
	string k = msclr::interop::marshal_as<string>(label19->Text);
	if (k != "No Player") {
		curr_changed = k;
	}
	panel8->BringToFront();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	curr_pos = "MIDFIELDER";
	string k = msclr::interop::marshal_as<string>(label17->Text);
	if (label17->Text != "No Player") {
		curr_changed = k;
	}
	panel8->BringToFront();
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	curr_pos = "MIDFIELDER";
	string k = msclr::interop::marshal_as<string>(label16->Text);
	if (k != "No Player") {
		curr_changed = k;
	}
	panel8->BringToFront();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	curr_pos = "ATTACKER";
	string k = msclr::interop::marshal_as<string>(label18->Text);
	if (k != "No Player") {
		curr_changed = k;
	}
	panel8->BringToFront();
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Clear();
	textBox8->Text = "";
	panel2->BringToFront();
}
public: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
	string s;
	for (int i = 0; i < checkedListBox1->Items->Count; i++) {
		if (checkedListBox1->GetItemChecked(i)) {
	       s = msclr::interop::marshal_as<string>(checkedListBox1->Items[i]->ToString());
		   break;
		}
	}
	string price;
	if (!s.empty()) {
		string tmp;
		for (int i = 0; s[i] != '/'; i++) {
			tmp += s[i];
		}
		s = tmp;
		for (auto& i : fb_players) {
			if (i.name == s) {
				price = to_string(i.price);
				break;
			}
		}
	}
	if (s.empty()) {
		MessageBox::Show("Choose a Player", "Warning");
	}
	else {
		int price2 = 0;
		if (!curr_changed.empty()) {
			for (auto& i : fb_players) {
				if (i.name == curr_changed) {
					price2 = i.price;
					break;
				}
			}
		}
		if (stoi(price) > user_teams[current_user].budget+price2) {
			MessageBox::Show("Budget Not Enough !", "Warning");
		}
		else {
			if (!curr_changed.empty()) {
				user_teams[current_user].Remove_Player(curr_changed);
			}
			if (user_teams[current_user].Add_Player(s)) {
				for (auto& i : fb_players) {
					if (s == i.name) {
						if (i.pos == "GOALKEEPER") {
							label15->Text = msclr::interop::marshal_as<String^>(s);
						}
						else if (i.pos == "DEFENDER") {
							label19->Text = msclr::interop::marshal_as<String^>(s);
						}
						else if (i.pos == "ATTACKER") {
							label18->Text = msclr::interop::marshal_as<String^>(s);
						}
						else {
							String^ cc = msclr::interop::marshal_as<String^>(curr_changed);
							if (label16->Text == "No Player" || label16->Text == cc) {
								label16->Text = msclr::interop::marshal_as<String^>(s);
							}
							else {
								label17->Text = msclr::interop::marshal_as<String^>(s);
							}
						}
						break;
					}
				}
				//
				ifstream team("user_teams.txt", ios::in);
				ofstream temp("temp_teams.txt");
				if (team.is_open()) {
					string line;
					bool fst = true;
					while (getline(team, line)) {
						string tmp;
						for (int i = 0; line[i] != '#'; i++) {
							tmp += line[i];
						}
						if (tmp == current_user) {
							if (fst) {
								temp << tmp;
								fst = false;
							}
							else temp << "\n" << tmp;
							for (auto& i : user_teams[current_user].tt) {
								temp << "#" << i;
							}
						}
						else {
							if (fst) {
								temp << line;
								fst = false;
							}
							else temp << "\n" << line;
						}
					}
					team.close(); temp.close();
				}
				remove("user_teams.txt");
				rename("temp_teams.txt", "user_teams.txt");
				MessageBox::Show("Player Added Successfully", "DONE !");
			}
		}
		checkedListBox1->Items->Clear();
		textBox8->Text = "";
		panel2->BringToFront();
	}
	curr_changed = "";
}
private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	listBox2->Items->Clear();
	string week = msclr::interop::marshal_as<string>(comboBox6->Text);
	for (auto& i : fb_points) {
		String^ s = msclr::interop::marshal_as<String^>(i.first + "  " + to_string(i.second[stoi(week) - 1]));
		listBox2->Items->Add(s);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	panel9->BringToFront();
	comboBox6->Items->Clear();
	for (int i = 1; i <= 38; i++) {
		String^ s = msclr::interop::marshal_as<String^>(to_string(i));
		comboBox6->Items->Add(s);
	}
}
private: System::Void listBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BringToFront();
	comboBox6->Items->Clear();
}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	listBox3->Items->Clear();
	string week = msclr::interop::marshal_as<string>(comboBox7->Text);
	vector<pair<int, string>> points;
	for (auto& i : user_teams) {
		int sumPoints{};
		for (auto& j : i.second.tt) {
			sumPoints += fb_points[j][stoi(week)-1];
		}
		points.emplace_back(sumPoints, i.first);
	}
	sort(points.rbegin(), points.rend());
	for (auto& i : points) {
		String^ tmp = msclr::interop::marshal_as<String^>((i.second + "     " + to_string(i.first)));
		listBox3->Items->Add(tmp);
	}
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->BringToFront();
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox8_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	checkedListBox1->Items->Clear();
	string s = msclr::interop::marshal_as<string>(textBox8->Text);
	if (!s.empty()) {
		if (checkBox2->CheckState == CheckState::Unchecked) {
			for (int i = 0; i < s.size(); i++) {
				s[i] = tolower(s[i]);
			}
		}
		for (auto& i : fb_players) {
			if (checkBox1->CheckState == CheckState::Checked) {
				string name;
				for (int j = 0; j < i.name.size(); j++) {
					name += tolower(i.name[j]);
				}
				if (i.pos == curr_pos && name.find(s) != string::npos) {
					String^ tmp = msclr::interop::marshal_as<String^>(i.name + "/ " + i.club_name + "/ " + to_string(i.price) + "K");
					checkedListBox1->Items->Add(tmp);
				}
			}
			else if (checkBox2->CheckState == CheckState::Checked) {
				bool inchar = false;
				for (int i = 0; i < s.size(); i++) {
					if (s[i] < '0' || s[i] > '9') {
						inchar = true;
						break;
					}
				}
				if (!inchar) {
					if (i.pos == curr_pos && i.price <= stoi(s)) {
						String^ tmp = msclr::interop::marshal_as<String^>(i.name + "/ " + i.club_name + "/ " + to_string(i.price) + "K");
						checkedListBox1->Items->Add(tmp);
					}
				}
			}
			else if (checkBox3->CheckState == CheckState::Checked) {
				string club;
				for (int j = 0; j < i.club_name.size(); j++) {
					club += tolower(i.club_name[j]);
				}
				if (i.pos == curr_pos && club.find(s) != string::npos) {
					String^ tmp = msclr::interop::marshal_as<String^>(i.name + "/ " + i.club_name + "/ " + to_string(i.price) + "K");
					checkedListBox1->Items->Add(tmp);
				}
			}
		}
	}
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBox2->CheckState = CheckState::Unchecked;
	checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox2_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->CheckState = CheckState::Unchecked;
	checkBox3->CheckState = CheckState::Unchecked;
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	checkBox1->CheckState = CheckState::Unchecked;
	checkBox2->CheckState = CheckState::Unchecked;
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int	index = checkedListBox1->SelectedIndex, count = checkedListBox1->Items->Count;
	for (int i = 0; i < count; i++) {
		if (i != index) {
			checkedListBox1->SetItemCheckState(i, CheckState::Unchecked);
		}
	}
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	panel11->BringToFront();
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
	panel4->BringToFront();
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	string name = msclr::interop::marshal_as<string>(textBox9->Text),
		club = msclr::interop::marshal_as<string>(textBox11->Text),
		league = msclr::interop::marshal_as<string>(textBox10->Text),
		pos = msclr::interop::marshal_as<string>(comboBox5->Text),
		price = msclr::interop::marshal_as<string>(textBox12->Text);
	for (int i = 0; i < price.size(); i++) {
		if (price[i] < '0' || price[i] > '9') {
			MessageBox::Show("Invalid Input in Price", "Warning");
			return;
		}
	}
	if (name.empty() || club.empty() || league.empty() || pos.empty() || price.empty()) {
		MessageBox::Show("Fill The Missing Fields", "Warning");
	}
	else {
		bool noway = false;
		for (auto& i : fb_players) {
			if (i.name == name) {
				MessageBox::Show("Footballer Already exists", "Warning");
				noway = true;
			}
		}
		if (!noway) {
			admin.Add_Footballer(name, club, league, pos, price);
			MessageBox::Show("Footballer Added Succesfully", "Done !");
			fb_players = Read_Players();
		}
	}
}
private: System::Void listBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
