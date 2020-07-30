#pragma once

namespace acc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for accform
	/// </summary>
	public ref class accform : public System::Windows::Forms::Form
	{
	public:
		accform(void)
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
		~accform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;







	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ListBox^  listBox7;
	private: System::Windows::Forms::ListBox^  listBox6;
	private: System::Windows::Forms::ListBox^  listBox5;
	private: System::Windows::Forms::ListBox^  listBox4;
	private: System::Windows::Forms::ListBox^  listBox3;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox8;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(accform::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->listBox4 = (gcnew System::Windows::Forms::ListBox());
			this->listBox5 = (gcnew System::Windows::Forms::ListBox());
			this->listBox6 = (gcnew System::Windows::Forms::ListBox());
			this->listBox7 = (gcnew System::Windows::Forms::ListBox());
			this->listBox8 = (gcnew System::Windows::Forms::ListBox());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->panel1->Controls->Add(this->listBox7);
			this->panel1->Controls->Add(this->listBox6);
			this->panel1->Controls->Add(this->listBox5);
			this->panel1->Controls->Add(this->listBox4);
			this->panel1->Controls->Add(this->listBox3);
			this->panel1->Controls->Add(this->listBox2);
			this->panel1->Controls->Add(this->listBox1);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(193, 102);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(294, 362);
			this->panel1->TabIndex = 0;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(10, 315);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 20);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Date Created :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(10, 283);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(128, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Account Type :";
			this->label8->Click += gcnew System::EventHandler(this, &accform::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(10, 190);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Address :";
			this->label7->Click += gcnew System::EventHandler(this, &accform::label7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(153, 114);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"User ID :";
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(157, 14);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(126, 91);
			this->panel2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(10, 251);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(112, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Account No :";
			this->label3->Click += gcnew System::EventHandler(this, &accform::label3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(10, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(79, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Gender :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 159);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name :";
			this->label1->Click += gcnew System::EventHandler(this, &accform::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(919, 577);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 25);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Exit>>\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(478, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(185, 32);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Cash Corner";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Location = System::Drawing::Point(557, 505);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(81, 155);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(191, 24);
			this->listBox1->TabIndex = 15;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(101, 186);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(171, 24);
			this->listBox2->TabIndex = 16;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->ItemHeight = 20;
			this->listBox3->Location = System::Drawing::Point(95, 220);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(177, 24);
			this->listBox3->TabIndex = 17;
			// 
			// listBox4
			// 
			this->listBox4->FormattingEnabled = true;
			this->listBox4->ItemHeight = 20;
			this->listBox4->Location = System::Drawing::Point(128, 250);
			this->listBox4->Name = L"listBox4";
			this->listBox4->Size = System::Drawing::Size(144, 24);
			this->listBox4->TabIndex = 18;
			// 
			// listBox5
			// 
			this->listBox5->FormattingEnabled = true;
			this->listBox5->ItemHeight = 20;
			this->listBox5->Location = System::Drawing::Point(143, 279);
			this->listBox5->Name = L"listBox5";
			this->listBox5->Size = System::Drawing::Size(129, 24);
			this->listBox5->TabIndex = 19;
			// 
			// listBox6
			// 
			this->listBox6->FormattingEnabled = true;
			this->listBox6->ItemHeight = 20;
			this->listBox6->Location = System::Drawing::Point(143, 315);
			this->listBox6->Name = L"listBox6";
			this->listBox6->Size = System::Drawing::Size(129, 24);
			this->listBox6->TabIndex = 20;
			// 
			// listBox7
			// 
			this->listBox7->FormattingEnabled = true;
			this->listBox7->ItemHeight = 20;
			this->listBox7->Location = System::Drawing::Point(89, 71);
			this->listBox7->Name = L"listBox7";
			this->listBox7->Size = System::Drawing::Size(8, 4);
			this->listBox7->TabIndex = 21;
			// 
			// listBox8
			// 
			this->listBox8->FormattingEnabled = true;
			this->listBox8->ItemHeight = 20;
			this->listBox8->Location = System::Drawing::Point(425, 212);
			this->listBox8->Name = L"listBox8";
			this->listBox8->Size = System::Drawing::Size(51, 24);
			this->listBox8->TabIndex = 22;
			// 
			// accform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(675, 560);
			this->Controls->Add(this->listBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"accform";
			this->Text = L"accform";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
