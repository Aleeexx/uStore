#pragma once

#include "uStore_main.h"
#include "Benutzer.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uStore {

	/// <summary>
	/// Zusammenfassung für Search_Artikel1
	/// </summary>
	public ref class Search_Artikel_Control : public System::Windows::Forms::UserControl
	{
	public:
		Search_Artikel_Control(uStore_main^ tmpParent, CBenutzer^ tmpBenutzer)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			ptrParent = tmpParent;
			user = tmpBenutzer;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Search_Artikel_Control()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		//Zeiger auf uStore_main
		uStore_main^ ptrParent;
		//Objekt des angemeldeten Nutzers
		CBenutzer^ user;

	private: System::Windows::Forms::Label^  artFoundVerkaeufer;
	private: System::Windows::Forms::Label^  artFoundPreis;
	private: System::Windows::Forms::Label^  artFoundName;
	private: System::Windows::Forms::PictureBox^  artFoundBild;
	private: System::Windows::Forms::TextBox^  artSearchName;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  Abbrechen;
	private: System::Windows::Forms::TextBox^  artFoundBeschreibung;

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
			this->artFoundVerkaeufer = (gcnew System::Windows::Forms::Label());
			this->artFoundPreis = (gcnew System::Windows::Forms::Label());
			this->artFoundName = (gcnew System::Windows::Forms::Label());
			this->artFoundBild = (gcnew System::Windows::Forms::PictureBox());
			this->artSearchName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Abbrechen = (gcnew System::Windows::Forms::Button());
			this->artFoundBeschreibung = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->artFoundBild))->BeginInit();
			this->SuspendLayout();
			// 
			// artFoundVerkaeufer
			// 
			this->artFoundVerkaeufer->AutoSize = true;
			this->artFoundVerkaeufer->Location = System::Drawing::Point(213, 169);
			this->artFoundVerkaeufer->Name = L"artFoundVerkaeufer";
			this->artFoundVerkaeufer->Size = System::Drawing::Size(0, 16);
			this->artFoundVerkaeufer->TabIndex = 73;
			// 
			// artFoundPreis
			// 
			this->artFoundPreis->AutoSize = true;
			this->artFoundPreis->Location = System::Drawing::Point(213, 144);
			this->artFoundPreis->Name = L"artFoundPreis";
			this->artFoundPreis->Size = System::Drawing::Size(0, 16);
			this->artFoundPreis->TabIndex = 72;
			// 
			// artFoundName
			// 
			this->artFoundName->AutoSize = true;
			this->artFoundName->Location = System::Drawing::Point(213, 117);
			this->artFoundName->Name = L"artFoundName";
			this->artFoundName->Size = System::Drawing::Size(0, 16);
			this->artFoundName->TabIndex = 71;
			// 
			// artFoundBild
			// 
			this->artFoundBild->Location = System::Drawing::Point(16, 117);
			this->artFoundBild->Name = L"artFoundBild";
			this->artFoundBild->Size = System::Drawing::Size(173, 105);
			this->artFoundBild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->artFoundBild->TabIndex = 70;
			this->artFoundBild->TabStop = false;
			// 
			// artSearchName
			// 
			this->artSearchName->Location = System::Drawing::Point(16, 57);
			this->artSearchName->Name = L"artSearchName";
			this->artSearchName->Size = System::Drawing::Size(180, 21);
			this->artSearchName->TabIndex = 69;
			this->artSearchName->TextChanged += gcnew System::EventHandler(this, &Search_Artikel_Control::OnChanceArtSearchName);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label8->Location = System::Drawing::Point(17, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(252, 19);
			this->label8->TabIndex = 65;
			this->label8->Text = L"Hier kannst Du einen Artikel suchen.";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(0, 35);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(322, 1);
			this->panel1->TabIndex = 66;
			// 
			// Abbrechen
			// 
			this->Abbrechen->Location = System::Drawing::Point(221, 54);
			this->Abbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Abbrechen->Name = L"Abbrechen";
			this->Abbrechen->Size = System::Drawing::Size(78, 28);
			this->Abbrechen->TabIndex = 74;
			this->Abbrechen->Text = L"Doch nicht.";
			this->Abbrechen->UseVisualStyleBackColor = true;
			this->Abbrechen->Click += gcnew System::EventHandler(this, &Search_Artikel_Control::Abbrechen_Click);
			// 
			// artFoundBeschreibung
			// 
			this->artFoundBeschreibung->Location = System::Drawing::Point(16, 241);
			this->artFoundBeschreibung->Multiline = true;
			this->artFoundBeschreibung->Name = L"artFoundBeschreibung";
			this->artFoundBeschreibung->Size = System::Drawing::Size(283, 73);
			this->artFoundBeschreibung->TabIndex = 75;
			// 
			// Search_Artikel_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->artFoundBeschreibung);
			this->Controls->Add(this->Abbrechen);
			this->Controls->Add(this->artFoundVerkaeufer);
			this->Controls->Add(this->artFoundPreis);
			this->Controls->Add(this->artFoundName);
			this->Controls->Add(this->artFoundBild);
			this->Controls->Add(this->artSearchName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Search_Artikel_Control";
			this->Size = System::Drawing::Size(318, 95);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->artFoundBild))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OnChanceArtSearchName(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Abbrechen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
