#pragma once
#include "stdAfx.h"
#include"password.h"
namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for signin
	/// </summary>
	public ref class signin : public System::Windows::Forms::Form
	{
	public:
		signin(void)
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
		~signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  fname;
	private: System::Windows::Forms::TextBox^  lname;
	private: System::Windows::Forms::TextBox^  acc_no;








	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private: System::Windows::Forms::Label^  label8;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  dob;



















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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(signin::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->lname = (gcnew System::Windows::Forms::TextBox());
			this->acc_no = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dob = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(65)), static_cast<System::Int32>(static_cast<System::Byte>(119)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(480, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 33);
			this->button1->TabIndex = 0;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &signin::button1_Click);
			// 
			// fname
			// 
			this->fname->Location = System::Drawing::Point(353, 207);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(166, 22);
			this->fname->TabIndex = 2;
			// 
			// lname
			// 
			this->lname->Location = System::Drawing::Point(353, 245);
			this->lname->Name = L"lname";
			this->lname->Size = System::Drawing::Size(166, 22);
			this->lname->TabIndex = 3;
			// 
			// acc_no
			// 
			this->acc_no->Location = System::Drawing::Point(353, 285);
			this->acc_no->Name = L"acc_no";
			this->acc_no->Size = System::Drawing::Size(166, 22);
			this->acc_no->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(621, 540);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 33);
			this->button3->TabIndex = 25;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &signin::button3_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(0, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(214, 22);
			this->label6->TabIndex = 27;
			this->label6->Text = L"Sign up                             ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(186, 180);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(378, 199);
			this->pictureBox1->TabIndex = 28;
			this->pictureBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(212, 248);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 19);
			this->label8->TabIndex = 38;
			this->label8->Text = L"Last name:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(209, 285);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 19);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Account number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(209, 210);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 19);
			this->label3->TabIndex = 34;
			this->label3->Text = L"First name:";
			this->label3->Click += gcnew System::EventHandler(this, &signin::label3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(212, 322);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(101, 19);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Date of birth:";
			// 
			// dob
			// 
			this->dob->Location = System::Drawing::Point(353, 322);
			this->dob->Name = L"dob";
			this->dob->Size = System::Drawing::Size(166, 22);
			this->dob->TabIndex = 40;
			// 
			// signin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(728, 599);
			this->Controls->Add(this->dob);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->acc_no);
			this->Controls->Add(this->lname);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"signin";
			this->Text = L"signin";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &signin::signin_FormClosing);
			this->Load += gcnew System::EventHandler(this, &signin::signin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signin_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=127.0.0.1; port=3306; username=root; password=Paper";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select *from foratm.bank where first_name='" + this->fname->Text + "'and last_name='" + this->lname->Text + "'and account_no='"+this->acc_no->Text+ "'and dob='" + this->dob->Text + "';", conDataBase);
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
				MessageBox::Show("             Account verified.            ");
				this->Hide();
				password^ pa = gcnew password(myReader->GetInt32(0));
				pa->ShowDialog();
			}
			else
				MessageBox::Show("Invalid entry. The account doesn't exist.");

		}
		catch (Exception^ex)
		{
			MessageBox::Show(ex->Message);
		}

	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}

private: System::Void signin_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	

}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
