#pragma once
#include "Fehler.h"
namespace TwErgShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Zusammenfassung für uStore_Register
	/// </summary>
	public ref class uStore_Register : public System::Windows::Forms::Form
	{
	public:
		uStore_Register(void)
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
		~uStore_Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  erstellenAbbrechen;
	protected: 
	private: System::Windows::Forms::Button^  erstellen;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Benutzername;
	private: System::Windows::Forms::TextBox^  Passwort1;
	private: System::Windows::Forms::TextBox^  Passwort2;
	private: System::Windows::Forms::TextBox^  Vorname;
	private: System::Windows::Forms::TextBox^  Nachname;
	private: System::Windows::Forms::TextBox^  Telefonnr;
	private: System::Windows::Forms::TextBox^  Email;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  freiBelegt;
	private: System::Windows::Forms::PictureBox^  korrektFalsch;

















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
			this->erstellenAbbrechen = (gcnew System::Windows::Forms::Button());
			this->erstellen = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Benutzername = (gcnew System::Windows::Forms::TextBox());
			this->Passwort1 = (gcnew System::Windows::Forms::TextBox());
			this->Passwort2 = (gcnew System::Windows::Forms::TextBox());
			this->Vorname = (gcnew System::Windows::Forms::TextBox());
			this->Nachname = (gcnew System::Windows::Forms::TextBox());
			this->Telefonnr = (gcnew System::Windows::Forms::TextBox());
			this->Email = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->freiBelegt = (gcnew System::Windows::Forms::PictureBox());
			this->korrektFalsch = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->freiBelegt))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->korrektFalsch))->BeginInit();
			this->SuspendLayout();
			// 
			// erstellenAbbrechen
			// 
			this->erstellenAbbrechen->Location = System::Drawing::Point(141, 226);
			this->erstellenAbbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellenAbbrechen->Name = L"erstellenAbbrechen";
			this->erstellenAbbrechen->Size = System::Drawing::Size(78, 28);
			this->erstellenAbbrechen->TabIndex = 39;
			this->erstellenAbbrechen->Text = L"Doch nicht.";
			this->erstellenAbbrechen->UseVisualStyleBackColor = true;
			this->erstellenAbbrechen->Click += gcnew System::EventHandler(this, &uStore_Register::erstellenAbbrechen_Click);
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(243, 226);
			this->erstellen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(71, 28);
			this->erstellen->TabIndex = 38;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			this->erstellen->Click += gcnew System::EventHandler(this, &uStore_Register::erstellen_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 16);
			this->label2->TabIndex = 41;
			this->label2->Text = L"Vorname:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Nachname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 16);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Telefonnummer:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 16);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Email Adresse:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 16);
			this->label1->TabIndex = 40;
			this->label1->Text = L"Benutzername:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(58, 16);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Passwort:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(15, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 16);
			this->label7->TabIndex = 46;
			this->label7->Text = L"Passwort wiederholen:";
			// 
			// Benutzername
			// 
			this->Benutzername->Location = System::Drawing::Point(141, 37);
			this->Benutzername->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Benutzername->Name = L"Benutzername";
			this->Benutzername->Size = System::Drawing::Size(146, 21);
			this->Benutzername->TabIndex = 47;
			this->Benutzername->TextChanged += gcnew System::EventHandler(this, &uStore_Register::OnChangeName);
			// 
			// Passwort1
			// 
			this->Passwort1->Location = System::Drawing::Point(141, 62);
			this->Passwort1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Passwort1->Name = L"Passwort1";
			this->Passwort1->Size = System::Drawing::Size(173, 21);
			this->Passwort1->TabIndex = 48;
			this->Passwort1->UseSystemPasswordChar = true;
			// 
			// Passwort2
			// 
			this->Passwort2->Location = System::Drawing::Point(141, 87);
			this->Passwort2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Passwort2->Name = L"Passwort2";
			this->Passwort2->Size = System::Drawing::Size(173, 21);
			this->Passwort2->TabIndex = 49;
			this->Passwort2->UseSystemPasswordChar = true;
			// 
			// Vorname
			// 
			this->Vorname->Location = System::Drawing::Point(141, 122);
			this->Vorname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Vorname->Name = L"Vorname";
			this->Vorname->Size = System::Drawing::Size(173, 21);
			this->Vorname->TabIndex = 50;
			// 
			// Nachname
			// 
			this->Nachname->Location = System::Drawing::Point(141, 147);
			this->Nachname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Nachname->Name = L"Nachname";
			this->Nachname->Size = System::Drawing::Size(173, 21);
			this->Nachname->TabIndex = 51;
			// 
			// Telefonnr
			// 
			this->Telefonnr->Location = System::Drawing::Point(141, 172);
			this->Telefonnr->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Telefonnr->Name = L"Telefonnr";
			this->Telefonnr->Size = System::Drawing::Size(173, 21);
			this->Telefonnr->TabIndex = 52;
			// 
			// Email
			// 
			this->Email->Location = System::Drawing::Point(114, 197);
			this->Email->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(173, 21);
			this->Email->TabIndex = 53;
			this->Email->TextChanged += gcnew System::EventHandler(this, &uStore_Register::OnChanceEmail);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label8->Location = System::Drawing::Point(20, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(287, 19);
			this->label8->TabIndex = 54;
			this->label8->Text = L"Hier kannst Du deinen Account erstellen.";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-10, -57);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 84);
			this->panel1->TabIndex = 55;
			// 
			// freiBelegt
			// 
			this->freiBelegt->Location = System::Drawing::Point(293, 37);
			this->freiBelegt->Name = L"freiBelegt";
			this->freiBelegt->Size = System::Drawing::Size(21, 21);
			this->freiBelegt->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->freiBelegt->TabIndex = 56;
			this->freiBelegt->TabStop = false;
			// 
			// korrektFalsch
			// 
			this->korrektFalsch->Location = System::Drawing::Point(293, 197);
			this->korrektFalsch->Name = L"korrektFalsch";
			this->korrektFalsch->Size = System::Drawing::Size(21, 21);
			this->korrektFalsch->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->korrektFalsch->TabIndex = 57;
			this->korrektFalsch->TabStop = false;
			// 
			// uStore_Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(329, 266);
			this->ControlBox = false;
			this->Controls->Add(this->korrektFalsch);
			this->Controls->Add(this->freiBelegt);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Email);
			this->Controls->Add(this->Telefonnr);
			this->Controls->Add(this->Nachname);
			this->Controls->Add(this->Vorname);
			this->Controls->Add(this->Passwort2);
			this->Controls->Add(this->Passwort1);
			this->Controls->Add(this->Benutzername);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->erstellenAbbrechen);
			this->Controls->Add(this->erstellen);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"uStore_Register";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registrierung";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->freiBelegt))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->korrektFalsch))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Close();
		 }
private: System::Void erstellen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(freiBelegt->ImageLocation == "frei.png")
			 {
			 if(Benutzername->Text != "")
			 {
		 	 if(Vorname->Text != "")
			 {
			 if(Nachname->Text != "")
			 {
			 if(Telefonnr->Text != "")
			 {
			 if(Email->Text != "")
			 {
			 if((Passwort1->Text != "" && Passwort2->Text != "") && (Passwort1->Text == Passwort2->Text))
			 {
				 String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::Desktop) + "\\Benutzer";
				 String^ tmp2 = ".txt";
				 String^ fileName = tmp1 + "\\user_" + Benutzername->Text + tmp2;
				 if(!Directory::Exists(tmp1))
				 {
					Directory::CreateDirectory(tmp1);
				 }
				 StreamWriter^ sw = gcnew StreamWriter(fileName);
				 sw->WriteLine(Passwort1->Text->GetHashCode());
				 sw->WriteLine(Vorname->Text);
				 sw->WriteLine(Nachname->Text);
				 sw->WriteLine(Telefonnr->Text);
				 sw->WriteLine(Email->Text);
				 sw->Close();
				 Close();
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
			 }
			 else
			 {
				 Fehler^ fail = gcnew Fehler();
				 fail->ShowDialog();
				 Passwort1->Text = "";
				 Passwort2->Text = "";
			 }
		 }
private: System::Void OnChangeName(System::Object^  sender, System::EventArgs^  e)
		 {
			 if(Benutzername->Text != "")
			 {
				 String^ tmp1 = Environment::GetFolderPath(Environment::SpecialFolder::Desktop) + "\\Benutzer";
				 String^ tmp2 = ".txt";
				 String^ fileName = tmp1 + "\\user_" + Benutzername->Text + tmp2;

				 if(File::Exists(fileName)) freiBelegt->ImageLocation = "belegt.png";
				 else freiBelegt->ImageLocation = "frei.png";
			 }
			 else freiBelegt->ImageLocation = "";
		 }
private: System::Void OnChanceEmail(System::Object^  sender, System::EventArgs^  e)
		 {
			if(Email->Text->IndexOf('@') > 0)
			{
				int index = Email->Text->IndexOf('@');
				if (Email->Text->IndexOf(".de", index) != -1
					|| Email->Text->IndexOf(".de", index) != -1
					|| Email->Text->IndexOf(".net", index) != -1
					|| Email->Text->IndexOf(".com", index) != -1
					|| Email->Text->IndexOf(".info", index) != -1
					|| Email->Text->IndexOf(".org", index) != -1)
				{
					korrektFalsch->ImageLocation = "frei.png";
				}
				else
				{
					korrektFalsch->ImageLocation = "belegt.png";
				}
			}
			else
			{
				korrektFalsch->ImageLocation = "belegt.png";
			}
		 }
};
}
