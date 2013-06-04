#pragma once
#include "uStore_main.h"
#include "Benutzer.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;

namespace uStore {

	/// <summary>
	/// Zusammenfassung für Create_Shop_Control
	/// </summary>
	public ref class Create_Shop_Control : public System::Windows::Forms::UserControl
	{
	public:
		Create_Shop_Control(Panel^ tmpMainPanel, CBenutzer^ tmpUser)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//

			//Objekt des angemeldeten Users
			user = tmpUser;
			//Zeiger auf mainPanel in uStore_main
			ptrMainPanel = tmpMainPanel;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Create_Shop_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		//Zeiger auf mainPanel in uStore_main
		Panel^ ptrMainPanel;
		//Zeige auf user
		CBenutzer^ user;






	private: System::Windows::Forms::TextBox^  Ort;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  PLZ;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Strassenname;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  erstellen;


	private: System::Windows::Forms::TextBox^  Telefonnr;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Shopname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  erstellenAbbrechen;

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
			this->Ort = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PLZ = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Strassenname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->erstellen = (gcnew System::Windows::Forms::Button());
			this->Telefonnr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Shopname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->erstellenAbbrechen = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Ort
			// 
			this->Ort->Location = System::Drawing::Point(237, 190);
			this->Ort->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Ort->Name = L"Ort";
			this->Ort->Size = System::Drawing::Size(86, 21);
			this->Ort->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(188, 193);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Ort:";
			// 
			// PLZ
			// 
			this->PLZ->Location = System::Drawing::Point(62, 190);
			this->PLZ->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->PLZ->Name = L"PLZ";
			this->PLZ->Size = System::Drawing::Size(86, 21);
			this->PLZ->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(17, 193);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 32;
			this->label6->Text = L"PLZ.:";
			// 
			// Strassenname
			// 
			this->Strassenname->Location = System::Drawing::Point(149, 138);
			this->Strassenname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Strassenname->Name = L"Strassenname";
			this->Strassenname->Size = System::Drawing::Size(173, 21);
			this->Strassenname->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Straßenname:";
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(145, 247);
			this->erstellen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(71, 28);
			this->erstellen->TabIndex = 29;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			this->erstellen->Click += gcnew System::EventHandler(this, &Create_Shop_Control::erstellen_Click);
			// 
			// Telefonnr
			// 
			this->Telefonnr->Location = System::Drawing::Point(149, 86);
			this->Telefonnr->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Telefonnr->Name = L"Telefonnr";
			this->Telefonnr->Size = System::Drawing::Size(173, 21);
			this->Telefonnr->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Telefonnr.:";
			// 
			// Shopname
			// 
			this->Shopname->Location = System::Drawing::Point(149, 35);
			this->Shopname->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Shopname->Name = L"Shopname";
			this->Shopname->Size = System::Drawing::Size(173, 21);
			this->Shopname->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Shopname:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->Location = System::Drawing::Point(16, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 19);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Hier kannst du deinen Shop erstellen!";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-19, -60);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 84);
			this->panel1->TabIndex = 23;
			// 
			// erstellenAbbrechen
			// 
			this->erstellenAbbrechen->Location = System::Drawing::Point(230, 247);
			this->erstellenAbbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellenAbbrechen->Name = L"erstellenAbbrechen";
			this->erstellenAbbrechen->Size = System::Drawing::Size(92, 28);
			this->erstellenAbbrechen->TabIndex = 37;
			this->erstellenAbbrechen->Text = L"Doch nicht.";
			this->erstellenAbbrechen->UseVisualStyleBackColor = true;
			this->erstellenAbbrechen->Click += gcnew System::EventHandler(this, &Create_Shop_Control::erstellenAbbrechen_Click);
			// 
			// Create_Shop_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->erstellenAbbrechen);
			this->Controls->Add(this->Ort);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->PLZ);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Strassenname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->erstellen);
			this->Controls->Add(this->Telefonnr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Shopname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Create_Shop_Control";
			this->Size = System::Drawing::Size(339, 354);
			this->Load += gcnew System::EventHandler(this, &Create_Shop_Control::Create_Shop_Control_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void erstellen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void erstellenAbbrechen_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Create_Shop_Control_Load(System::Object^  sender, System::EventArgs^  e);

};
}
