#pragma once
#include"string.h"

namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for information
	/// </summary>
	public ref class information : public System::Windows::Forms::Form
	{
	public:
		int userID;
		information(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		information(int userId) {
			InitializeComponent();
			this->userID = userId;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~information()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;








	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::TextBox^  box1;
	private: System::Windows::Forms::TextBox^  box2;
	private: System::Windows::Forms::TextBox^  box6;



	private: System::Windows::Forms::TextBox^  box4;

	private: System::Windows::Forms::TextBox^  box3;



	private: System::Windows::Forms::TextBox^  box5;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  box7;
	private: System::Windows::Forms::TextBox^  box8;




	private: System::Windows::Forms::Label^  label10;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(information::typeid));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->box1 = (gcnew System::Windows::Forms::TextBox());
			this->box2 = (gcnew System::Windows::Forms::TextBox());
			this->box6 = (gcnew System::Windows::Forms::TextBox());
			this->box4 = (gcnew System::Windows::Forms::TextBox());
			this->box3 = (gcnew System::Windows::Forms::TextBox());
			this->box5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->box7 = (gcnew System::Windows::Forms::TextBox());
			this->box8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(-1, 100);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(301, 22);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Account Information                          ";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(532, 549);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(84, 33);
			this->button4->TabIndex = 24;
			this->button4->Text = L" BACK";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &information::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(636, 549);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 33);
			this->button3->TabIndex = 23;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &information::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(232, 136);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(302, 407);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(242, 160);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 21);
			this->label1->TabIndex = 26;
			this->label1->Text = L"User_id: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(242, 246);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 21);
			this->label3->TabIndex = 27;
			this->label3->Text = L"First name:";
			this->label3->Click += gcnew System::EventHandler(this, &information::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(242, 204);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(139, 21);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Account number:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(242, 498);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 21);
			this->label5->TabIndex = 29;
			this->label5->Text = L"Address:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(242, 371);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(115, 21);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Account type:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(242, 287);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 21);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Last name:";
			this->label8->Click += gcnew System::EventHandler(this, &information::label8_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(532, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(188, 92);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 42;
			this->pictureBox2->TabStop = false;
			// 
			// box1
			// 
			this->box1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box1->Location = System::Drawing::Point(382, 160);
			this->box1->Name = L"box1";
			this->box1->ReadOnly = true;
			this->box1->Size = System::Drawing::Size(134, 25);
			this->box1->TabIndex = 43;
			this->box1->TextChanged += gcnew System::EventHandler(this, &information::box1_TextChanged);
			// 
			// box2
			// 
			this->box2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box2->Location = System::Drawing::Point(382, 203);
			this->box2->Name = L"box2";
			this->box2->ReadOnly = true;
			this->box2->Size = System::Drawing::Size(134, 25);
			this->box2->TabIndex = 44;
			// 
			// box6
			// 
			this->box6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box6->Location = System::Drawing::Point(382, 367);
			this->box6->Name = L"box6";
			this->box6->ReadOnly = true;
			this->box6->Size = System::Drawing::Size(134, 25);
			this->box6->TabIndex = 45;
			// 
			// box4
			// 
			this->box4->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box4->Location = System::Drawing::Point(382, 283);
			this->box4->Name = L"box4";
			this->box4->ReadOnly = true;
			this->box4->Size = System::Drawing::Size(134, 25);
			this->box4->TabIndex = 46;
			// 
			// box3
			// 
			this->box3->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box3->Location = System::Drawing::Point(382, 242);
			this->box3->Name = L"box3";
			this->box3->ReadOnly = true;
			this->box3->Size = System::Drawing::Size(134, 25);
			this->box3->TabIndex = 47;
			// 
			// box5
			// 
			this->box5->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box5->Location = System::Drawing::Point(382, 329);
			this->box5->Name = L"box5";
			this->box5->ReadOnly = true;
			this->box5->Size = System::Drawing::Size(134, 25);
			this->box5->TabIndex = 49;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(242, 457);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(134, 21);
			this->label2->TabIndex = 50;
			this->label2->Text = L"Contact number:";
			// 
			// box7
			// 
			this->box7->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box7->Location = System::Drawing::Point(382, 453);
			this->box7->Name = L"box7";
			this->box7->ReadOnly = true;
			this->box7->Size = System::Drawing::Size(134, 25);
			this->box7->TabIndex = 51;
			// 
			// box8
			// 
			this->box8->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->box8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->box8->Location = System::Drawing::Point(382, 497);
			this->box8->Name = L"box8";
			this->box8->ReadOnly = true;
			this->box8->Size = System::Drawing::Size(134, 25);
			this->box8->TabIndex = 53;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Black;
			this->label10->Location = System::Drawing::Point(242, 333);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 21);
			this->label10->TabIndex = 52;
			this->label10->Text = L"Gender:";
			// 
			// information
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->box8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->box7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->box5);
			this->Controls->Add(this->box3);
			this->Controls->Add(this->box4);
			this->Controls->Add(this->box6);
			this->Controls->Add(this->box2);
			this->Controls->Add(this->box1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Name = L"information";
			this->Text = L"information";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &information::information_FormClosing);
			this->Load += gcnew System::EventHandler(this, &information::information_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void information_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
}
private: System::Void information_Load(System::Object^  sender, System::EventArgs^  e) {
	String^ constring = L"datasource=127.0.0.1; database=foratm; port=3306; username=root; password=Paper";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from atm where user_id=" + this->userID + ";", conDataBase);
	MySqlDataReader^myReader;

	try
	{
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->Read()) {
			if (myReader->HasRows) {
				this->box1->Text = "" + myReader->GetInt32(0);
				this->box2->Text = "" + myReader->GetDouble(4);
				this->box3->Text = "" + myReader->GetString(1);
				this->box4->Text = "" + myReader->GetString(2);
				this->box5->Text = "" + myReader->GetString(7);
				this->box6->Text = "" + myReader->GetString(5);
				this->box7->Text = "" + myReader->GetDouble(9);
				this->box8->Text = "" + myReader->GetString(8);

			}
			else MessageBox::Show("No data found.");
		}
	
		
	}
	catch (Exception^ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void box1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
