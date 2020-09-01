#pragma once
#include "stdAfx.h"
#include"transaction.h"
#include"signin.h"
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
	/// Summary for loginform
	/// </summary>
	public ref class loginform : public System::Windows::Forms::Form
	{
	public:
		int userID;
		loginform(void)
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
		~loginform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  username_txt;
	private: System::Windows::Forms::TextBox^  password_txt;
	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::Label^  password_lbl;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;



	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(loginform::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->username_txt = (gcnew System::Windows::Forms::TextBox());
			this->password_txt = (gcnew System::Windows::Forms::TextBox());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(61, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"LOGIN";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &loginform::button1_Click);
			// 
			// username_txt
			// 
			this->username_txt->BackColor = System::Drawing::Color::DarkGray;
			this->username_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_txt->ForeColor = System::Drawing::Color::White;
			this->username_txt->Location = System::Drawing::Point(23, 101);
			this->username_txt->Name = L"username_txt";
			this->username_txt->Size = System::Drawing::Size(168, 27);
			this->username_txt->TabIndex = 1;
			this->username_txt->TextChanged += gcnew System::EventHandler(this, &loginform::username_txt_TextChanged);
			// 
			// password_txt
			// 
			this->password_txt->BackColor = System::Drawing::Color::DarkGray;
			this->password_txt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_txt->ForeColor = System::Drawing::Color::White;
			this->password_txt->Location = System::Drawing::Point(23, 166);
			this->password_txt->Name = L"password_txt";
			this->password_txt->PasswordChar = '*';
			this->password_txt->Size = System::Drawing::Size(168, 27);
			this->password_txt->TabIndex = 2;
			this->password_txt->TextChanged += gcnew System::EventHandler(this, &loginform::password_txt_TextChanged);
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_lbl->Location = System::Drawing::Point(19, 78);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(67, 20);
			this->username_lbl->TabIndex = 3;
			this->username_lbl->Text = L"User_id";
			this->username_lbl->Click += gcnew System::EventHandler(this, &loginform::username_lbl_Click);
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->Location = System::Drawing::Point(19, 143);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(83, 20);
			this->password_lbl->TabIndex = 4;
			this->password_lbl->Text = L"Password";
			this->password_lbl->Click += gcnew System::EventHandler(this, &loginform::password_lbl_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->password_lbl);
			this->panel1->Controls->Add(this->username_txt);
			this->panel1->Controls->Add(this->username_lbl);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->password_txt);
			this->panel1->Location = System::Drawing::Point(272, 193);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(212, 258);
			this->panel1->TabIndex = 10;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &loginform::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(267, 534);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(65, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &loginform::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 39);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"User Log in ";
			this->label1->Click += gcnew System::EventHandler(this, &loginform::label1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(314, 478);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 32);
			this->button2->TabIndex = 12;
			this->button2->Text = L"SIGN IN";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &loginform::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(359, 456);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"OR";
			this->label3->Click += gcnew System::EventHandler(this, &loginform::label3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(532, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(188, 92);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(342, 147);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(72, 71);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 43;
			this->pictureBox2->TabStop = false;
			// 
			// loginform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->MaximizeBox = false;
			this->Name = L"loginform";
			this->Text = L"loginform";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &loginform::loginform_FormClosing);
			this->Load += gcnew System::EventHandler(this, &loginform::loginform_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=127.0.0.1; port=3306; username=root; password=Paper";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select *from foratm.atm where user_id="+ this->username_txt->Text+" and password='"+this->password_txt->Text+"';",conDataBase);
		this->userID = int::Parse(this->username_txt->Text);
		MySqlDataReader^myReader;
		try
		{
			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			int	count = 0;
			while (myReader->Read())
			{
				count = count + 1;
			}
			if (count == 1) {
				MessageBox::Show("Username and password is correct.");
				this->Hide();
				transaction^ ta = gcnew transaction(userID);
				ta->ShowDialog();
			}
			else
				MessageBox::Show("Username and password is incorrect. Please try again.");
			
		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void username_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void password_txt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void username_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void password_lbl_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void loginform_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	final::signin sign;
	sign.ShowDialog();
	this->Show();
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void loginform_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
}
};
}
