#pragma once

namespace BankProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ signinButton;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ usernameTextbox;

	private: System::Windows::Forms::TextBox^ passwordTextbox;

	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->signinButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->usernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->passwordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 54, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1192, 166);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pigeon Banking";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 33, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(395, 183);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(166, 58);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Sign In";
			// 
			// signinButton
			// 
			this->signinButton->BackColor = System::Drawing::Color::MediumSlateBlue;
			this->signinButton->FlatAppearance->BorderSize = 0;
			this->signinButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signinButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signinButton->ForeColor = System::Drawing::Color::White;
			this->signinButton->Location = System::Drawing::Point(405, 427);
			this->signinButton->Name = L"signinButton";
			this->signinButton->Size = System::Drawing::Size(354, 45);
			this->signinButton->TabIndex = 2;
			this->signinButton->Text = L"Sign In";
			this->signinButton->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->panel1->Controls->Add(this->usernameTextbox);
			this->panel1->Location = System::Drawing::Point(405, 291);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(354, 48);
			this->panel1->TabIndex = 3;
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->usernameTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameTextbox->ForeColor = System::Drawing::Color::White;
			this->usernameTextbox->Location = System::Drawing::Point(17, 13);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(320, 19);
			this->usernameTextbox->TabIndex = 0;
			this->usernameTextbox->Text = L"Username";
			this->usernameTextbox->Click += gcnew System::EventHandler(this, &MyForm::usernameTextbox_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->panel2->Controls->Add(this->passwordTextbox);
			this->panel2->Location = System::Drawing::Point(405, 356);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(354, 48);
			this->panel2->TabIndex = 4;
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(144)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(183)));
			this->passwordTextbox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordTextbox->ForeColor = System::Drawing::Color::White;
			this->passwordTextbox->Location = System::Drawing::Point(17, 15);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->Size = System::Drawing::Size(320, 19);
			this->passwordTextbox->TabIndex = 1;
			this->passwordTextbox->Text = L"Password";
			this->passwordTextbox->UseSystemPasswordChar = true;
			this->passwordTextbox->Click += gcnew System::EventHandler(this, &MyForm::passwordTextbox_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Variable Display", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(401, 241);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(358, 47);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Sign in to access your personal banking information";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1188, 681);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->signinButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign in to Pigeon Banking";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void usernameTextbox_Click(System::Object^ sender, System::EventArgs^ e) {
		if (usernameTextbox->Text == "Username")
		{
			usernameTextbox->Text = "";
		}
	}
private: System::Void passwordTextbox_Click(System::Object^ sender, System::EventArgs^ e) {
	if (passwordTextbox->Text == "Password")
	{
		passwordTextbox->Text = "";
	}
}
};
}
