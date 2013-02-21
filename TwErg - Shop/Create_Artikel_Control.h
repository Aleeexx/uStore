#pragma once
#include "uStore_main.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TwErgShop {

	/// <summary>
	/// Zusammenfassung für Create_Artikel_Control
	/// </summary>
	public ref class Create_Artikel_Control : public System::Windows::Forms::UserControl
	{
	public:
		Create_Artikel_Control(uStore_main^ tmp)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			ptrParent = tmp;
		}
	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Create_Artikel_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		uStore_main^ ptrParent;
		String^ Pfad;

	private: System::Windows::Forms::Button^  erstellenAbbrechen;

	private: System::Windows::Forms::Button^  erstellen;
	private: System::Windows::Forms::TextBox^  Beschreibung;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Preis;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Artikelname;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  Bild;

	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::OpenFileDialog^  openPicture;



	protected: 


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
			this->Beschreibung = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Preis = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Artikelname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Bild = (gcnew System::Windows::Forms::PictureBox());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->openPicture = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Bild))->BeginInit();
			this->SuspendLayout();
			// 
			// erstellenAbbrechen
			// 
			this->erstellenAbbrechen->Location = System::Drawing::Point(150, 292);
			this->erstellenAbbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellenAbbrechen->Name = L"erstellenAbbrechen";
			this->erstellenAbbrechen->Size = System::Drawing::Size(92, 28);
			this->erstellenAbbrechen->TabIndex = 9;
			this->erstellenAbbrechen->Text = L"Doch nicht.";
			this->erstellenAbbrechen->UseVisualStyleBackColor = true;
			this->erstellenAbbrechen->Click += gcnew System::EventHandler(this, &Create_Artikel_Control::erstellenAbbrechen_Click);
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(252, 292);
			this->erstellen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(71, 28);
			this->erstellen->TabIndex = 8;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			this->erstellen->Click += gcnew System::EventHandler(this, &Create_Artikel_Control::erstellen_Click);
			// 
			// Beschreibung
			// 
			this->Beschreibung->Location = System::Drawing::Point(149, 97);
			this->Beschreibung->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Beschreibung->Multiline = true;
			this->Beschreibung->Name = L"Beschreibung";
			this->Beschreibung->Size = System::Drawing::Size(173, 67);
			this->Beschreibung->TabIndex = 6;
			this->Beschreibung->Text = L"Artikelbeschreibung.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 16);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Beschreibung:";
			// 
			// Preis
			// 
			this->Preis->Location = System::Drawing::Point(149, 68);
			this->Preis->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Preis->Name = L"Preis";
			this->Preis->Size = System::Drawing::Size(173, 21);
			this->Preis->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 16);
			this->label3->TabIndex = 42;
			this->label3->Text = L"Preis:";
			// 
			// Artikelname
			// 
			this->Artikelname->Location = System::Drawing::Point(149, 39);
			this->Artikelname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Artikelname->Name = L"Artikelname";
			this->Artikelname->Size = System::Drawing::Size(173, 21);
			this->Artikelname->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 16);
			this->label2->TabIndex = 39;
			this->label2->Text = L"Artikelname:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->label1->Location = System::Drawing::Point(21, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 17);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Hier kannst du einen Artikel zum Verkauf anbieten!";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-19, -60);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 84);
			this->panel1->TabIndex = 40;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(29, 16);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Bild:";
			// 
			// Bild
			// 
			this->Bild->BackColor = System::Drawing::SystemColors::Control;
			this->Bild->Location = System::Drawing::Point(149, 171);
			this->Bild->Name = L"Bild";
			this->Bild->Size = System::Drawing::Size(173, 105);
			this->Bild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Bild->TabIndex = 56;
			this->Bild->TabStop = false;
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(20, 196);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(98, 28);
			this->btnOpen->TabIndex = 7;
			this->btnOpen->Text = L"Bild aussuchen.";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &Create_Artikel_Control::btnOpen_Click);
			// 
			// openPicture
			// 
			this->openPicture->FileName = L"openPicture";
			// 
			// Create_Artikel_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->btnOpen);
			this->Controls->Add(this->Bild);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->erstellenAbbrechen);
			this->Controls->Add(this->erstellen);
			this->Controls->Add(this->Beschreibung);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Preis);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Artikelname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Create_Artikel_Control";
			this->Size = System::Drawing::Size(336, 330);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Bild))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Startorder: Eigene Bilder
			  openPicture->InitialDirectory = Environment::GetFolderPath(
				  Environment::SpecialFolder::MyPictures);
			  
			  openPicture->ShowDialog();
			  Bild->BackColor = System::Drawing::Color::White;
			  Pfad = openPicture->FileName;
			  Bild->ImageLocation = Pfad;
		 }
private: System::Void erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 ptrParent->Controls->Remove(this);
		 }
private: System::Void erstellen_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 ptrParent->Controls->Remove(this);
		 }
};
}
