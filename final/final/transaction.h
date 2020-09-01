#pragma once
#include"string.h"
#include "stdAfx.h"
#include "balancecheck.h"
#include "information.h"
#include "change.h"
#include "withdraw.h"

namespace final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for transaction
	/// </summary>
	public ref class transaction : public System::Windows::Forms::Form
	{
	public:
		int userID;
		transaction(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		transaction(int userId) {
			InitializeComponent();
			this->userID = userId;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~transaction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  withdraw;
	protected:
	private: System::Windows::Forms::PictureBox^  balance_check;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(transaction::typeid));
			this->withdraw = (gcnew System::Windows::Forms::PictureBox());
			this->balance_check = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->withdraw))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balance_check))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// withdraw
			// 
			this->withdraw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"withdraw.BackgroundImage")));
			this->withdraw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->withdraw->Location = System::Drawing::Point(190, 194);
			this->withdraw->Name = L"withdraw";
			this->withdraw->Size = System::Drawing::Size(147, 122);
			this->withdraw->TabIndex = 0;
			this->withdraw->TabStop = false;
			this->withdraw->Click += gcnew System::EventHandler(this, &transaction::withdraw_Click);
			// 
			// balance_check
			// 
			this->balance_check->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->balance_check->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"balance_check.BackgroundImage")));
			this->balance_check->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->balance_check->Location = System::Drawing::Point(411, 194);
			this->balance_check->Name = L"balance_check";
			this->balance_check->Size = System::Drawing::Size(145, 122);
			this->balance_check->TabIndex = 1;
			this->balance_check->TabStop = false;
			this->balance_check->Click += gcnew System::EventHandler(this, &transaction::balance_check_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Location = System::Drawing::Point(411, 366);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(145, 124);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &transaction::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(229)));
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox4->Location = System::Drawing::Point(190, 366);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(140, 124);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &transaction::pictureBox4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(200, 319);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(137, 21);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Cash Withdrawal";
			this->label1->Click += gcnew System::EventHandler(this, &transaction::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(420, 319);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 21);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Balance Check";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(186, 493);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(166, 21);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Account Information";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(430, 493);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 21);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Pin Change";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label6.Image")));
			this->label6->Location = System::Drawing::Point(-1, 122);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(397, 27);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Select a transaction                                 ";
			this->label6->Click += gcnew System::EventHandler(this, &transaction::label6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::IndianRed;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(610, 537);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 33);
			this->button3->TabIndex = 18;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &transaction::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(532, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// transaction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(732, 603);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->balance_check);
			this->Controls->Add(this->withdraw);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"transaction";
			this->Text = L"Select a transaction                                                   ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &transaction::transaction_FormClosing);
			this->Load += gcnew System::EventHandler(this, &transaction::transaction_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->withdraw))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->balance_check))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void transaction_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void withdraw_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	// withdraw^ wd = gcnew withdraw(userID);
	// wd->ShowDialog();
	String^ constring = L"datasource=127.0.0.1; database=foratm; port=3306; username=root; password=Paper";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select balance from atm where user_id ='" + userID + "';", conDataBase);
	MySqlDataReader^ myReader;

	try {
		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		if (myReader->HasRows && myReader->Read()) {
			final::withdraw wd;
			wd.userID = this->userID;
			wd.currentBalance = myReader->GetInt32(0);
			wd.ShowDialog();
		}
		else MessageBox::Show("Could not connect to database at the moment.");
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	this->Show();
}
private: System::Void balance_check_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	balancecheck^ bc = gcnew balancecheck(userID);
	bc->ShowDialog();
	this->Show();
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	information^ info = gcnew information(userID);
	info->ShowDialog();
	this->Show();
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	final::change ch;
	ch.userID = this->userID;
	ch.ShowDialog();
	this->Show();
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void transaction_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	Application::Exit();
}
};
}
