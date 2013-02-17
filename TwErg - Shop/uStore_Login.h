#pragma once

#include "Login_Fehler.h"

namespace TwErgShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für uStore_Login
	/// </summary>
	public ref class uStore_Login : public System::Windows::Forms::Form
	{
	public:
		uStore_Login(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~uStore_Login()
		{
			if (components)
			{
				delete components;
			}
		}
	 private:







	 System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  Register;

	private: System::Windows::Forms::Button^  Login;


	private: System::Windows::Forms::TextBox^  IDLogin;
	private: System::Windows::Forms::TextBox^  PWLogin;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;


	private: System::Windows::Forms::Button^  Beenden;
	private: System::Windows::Forms::Panel^  ButtonBorder;












	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(uStore_Login::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Register = (gcnew System::Windows::Forms::Button());
			this->Login = (gcnew System::Windows::Forms::Button());
			this->IDLogin = (gcnew System::Windows::Forms::TextBox());
			this->PWLogin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Beenden = (gcnew System::Windows::Forms::Button());
			this->ButtonBorder = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(64, 7);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(210, 75);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// Register
			// 
			this->Register->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->Register->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->Register->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Register->Location = System::Drawing::Point(108, 172);
			this->Register->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Register->Name = L"Register";
			this->Register->Size = System::Drawing::Size(111, 48);
			this->Register->TabIndex = 3;
			this->Register->Text = L"Mitglied werden.";
			this->Register->UseVisualStyleBackColor = true;
			// 
			// Login
			// 
			this->Login->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Login->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->Login->FlatAppearance->BorderSize = 0;
			this->Login->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Login->Location = System::Drawing::Point(-1, 172);
			this->Login->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Login->Name = L"Login";
			this->Login->Size = System::Drawing::Size(111, 48);
			this->Login->TabIndex = 2;
			this->Login->Text = L"Ich bin Mitglied.";
			this->Login->UseVisualStyleBackColor = true;
			this->Login->Click += gcnew System::EventHandler(this, &uStore_Login::Login_Click);
			// 
			// IDLogin
			// 
			this->IDLogin->Location = System::Drawing::Point(128, 103);
			this->IDLogin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->IDLogin->Name = L"IDLogin";
			this->IDLogin->Size = System::Drawing::Size(188, 21);
			this->IDLogin->TabIndex = 0;
			this->IDLogin->Text = L"Benutzername";
			// 
			// PWLogin
			// 
			this->PWLogin->Location = System::Drawing::Point(128, 135);
			this->PWLogin->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->PWLogin->Name = L"PWLogin";
			this->PWLogin->Size = System::Drawing::Size(188, 21);
			this->PWLogin->TabIndex = 1;
			this->PWLogin->Text = L"Passwort";
			this->PWLogin->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 16);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Benutzername:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(10, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Passwort:";
			// 
			// Beenden
			// 
			this->Beenden->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Beenden->FlatAppearance->BorderColor = System::Drawing::Color::Firebrick;
			this->Beenden->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->Beenden->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Beenden->Location = System::Drawing::Point(218, 172);
			this->Beenden->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Beenden->Name = L"Beenden";
			this->Beenden->Size = System::Drawing::Size(111, 48);
			this->Beenden->TabIndex = 4;
			this->Beenden->Text = L"Beenden.";
			this->Beenden->UseVisualStyleBackColor = false;
			this->Beenden->Click += gcnew System::EventHandler(this, &uStore_Login::Beenden_Click);
			// 
			// ButtonBorder
			// 
			this->ButtonBorder->BackColor = System::Drawing::Color::Firebrick;
			this->ButtonBorder->Location = System::Drawing::Point(-1, 172);
			this->ButtonBorder->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->ButtonBorder->Name = L"ButtonBorder";
			this->ButtonBorder->Size = System::Drawing::Size(362, 1);
			this->ButtonBorder->TabIndex = 8;
			// 
			// uStore_Login
			// 
			this->AcceptButton = this->Login;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->CancelButton = this->Beenden;
			this->ClientSize = System::Drawing::Size(328, 219);
			this->ControlBox = false;
			this->Controls->Add(this->ButtonBorder);
			this->Controls->Add(this->Beenden);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->PWLogin);
			this->Controls->Add(this->IDLogin);
			this->Controls->Add(this->Login);
			this->Controls->Add(this->Register);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"uStore_Login";
			this->Text = L"uStore";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Beenden_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Login_Click  (System::Object^  sender, System::EventArgs^  e);
};
}

