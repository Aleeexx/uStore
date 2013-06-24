#pragma once
#include "uStore_main.h"
#include "Benutzer.h"
#include "Artikel.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;


namespace uStore {

	/// <summary>
	/// Zusammenfassung für Create_Artikel_Control
	/// </summary>
	public ref class Create_Artikel_Control : public System::Windows::Forms::UserControl
	{
	public:
		Create_Artikel_Control(Panel^ tmpMainPanel, CBenutzer^ tmpUser)
		{
			InitializeComponent();
			
			//Objekt des angemeldeten Users
			user = tmpUser;
			//Zeiger auf mainPanel in uStore_main
			ptrMainPanel = tmpMainPanel;
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
		//Zeiger auf mainPanel in uStore_main
		Panel^ ptrMainPanel;
		//Pfad für das Bild
		String^ Pfad;
		//Objekt des angemeldeten Nutzers
		CBenutzer^ user;

	private: System::Windows::Forms::Button^  erstellenAbbrechen;

	private: System::Windows::Forms::Button^  erstellen;
	private: System::Windows::Forms::TextBox^  Beschreibung;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Preis;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Artikelname;
	private: System::Windows::Forms::Label^  artName;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  BildLabel;

	private: System::Windows::Forms::PictureBox^  Bild;

	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::OpenFileDialog^  openPicture;
	private: System::Windows::Forms::Label^  label2;

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
			this->artName = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BildLabel = (gcnew System::Windows::Forms::Label());
			this->Bild = (gcnew System::Windows::Forms::PictureBox());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->openPicture = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Bild))->BeginInit();
			this->SuspendLayout();
			// 
			// erstellenAbbrechen
			// 
			this->erstellenAbbrechen->Location = System::Drawing::Point(230, 283);
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
			this->erstellen->Location = System::Drawing::Point(149, 283);
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
			this->Beschreibung->Location = System::Drawing::Point(149, 115);
			this->Beschreibung->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Beschreibung->Name = L"Beschreibung";
			this->Beschreibung->Size = System::Drawing::Size(173, 21);
			this->Beschreibung->TabIndex = 6;
			this->Beschreibung->Text = L"Artikelbeschreibung.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(83, 16);
			this->label4->TabIndex = 44;
			this->label4->Text = L"Beschreibung:";
			// 
			// Preis
			// 
			this->Preis->Location = System::Drawing::Point(149, 77);
			this->Preis->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Preis->Name = L"Preis";
			this->Preis->Size = System::Drawing::Size(173, 21);
			this->Preis->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 80);
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
			this->Artikelname->TextChanged += gcnew System::EventHandler(this, &Create_Artikel_Control::OnChangeArtName);
			// 
			// artName
			// 
			this->artName->AutoSize = true;
			this->artName->Location = System::Drawing::Point(17, 43);
			this->artName->Name = L"artName";
			this->artName->Size = System::Drawing::Size(73, 16);
			this->artName->TabIndex = 39;
			this->artName->Text = L"Artikelname:";
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
			// BildLabel
			// 
			this->BildLabel->AutoSize = true;
			this->BildLabel->Location = System::Drawing::Point(17, 158);
			this->BildLabel->Name = L"BildLabel";
			this->BildLabel->Size = System::Drawing::Size(29, 16);
			this->BildLabel->TabIndex = 55;
			this->BildLabel->Text = L"Bild:";
			// 
			// Bild
			// 
			this->Bild->BackColor = System::Drawing::SystemColors::Control;
			this->Bild->Location = System::Drawing::Point(149, 158);
			this->Bild->Name = L"Bild";
			this->Bild->Size = System::Drawing::Size(173, 105);
			this->Bild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Bild->TabIndex = 56;
			this->Bild->TabStop = false;
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(20, 177);
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
			this->openPicture->Filter = L"Image Files(*.JPG;*.PNG;*.BMP)|*.JPG;*.PNG;*.BMP";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7));
			this->label2->Location = System::Drawing::Point(234, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 15);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Max. 28 Zeichen";
			// 
			// Create_Artikel_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->btnOpen);
			this->Controls->Add(this->Bild);
			this->Controls->Add(this->BildLabel);
			this->Controls->Add(this->erstellenAbbrechen);
			this->Controls->Add(this->erstellen);
			this->Controls->Add(this->Beschreibung);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Preis);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Artikelname);
			this->Controls->Add(this->artName);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
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

private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void erstellen_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void OnChangeArtName(System::Object^  sender, System::EventArgs^  e);

};
}
