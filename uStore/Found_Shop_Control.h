#pragma once

#include "Search_Shop.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uStore {

	/// <summary>
	/// Zusammenfassung für Found_Shop_Control1
	/// </summary>
	public ref class Found_Shop_Control : public System::Windows::Forms::UserControl
	{
	public:
		Found_Shop_Control(Panel^ tmpMainPanel, Search_Shop^ tmpSearchShop)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			ptrMainPanel = tmpMainPanel;
			ptrSearchShop = tmpSearchShop;
		}
	private:
		Panel^ ptrMainPanel;
		Search_Shop^ ptrSearchShop;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Found_Shop_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	public: System::Windows::Forms::Label^  Shopname;
	public: System::Windows::Forms::Label^  shopOrt;
	public: System::Windows::Forms::Label^  shopPLZ;
	public: System::Windows::Forms::Label^  shopStrassenname;
	public: System::Windows::Forms::Label^  shopTelefonnr;
	public: System::Windows::Forms::Label^  shopBesitzerName;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Shopname = (gcnew System::Windows::Forms::Label());
			this->shopOrt = (gcnew System::Windows::Forms::Label());
			this->shopPLZ = (gcnew System::Windows::Forms::Label());
			this->shopStrassenname = (gcnew System::Windows::Forms::Label());
			this->shopTelefonnr = (gcnew System::Windows::Forms::Label());
			this->shopBesitzerName = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(467, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zum Shop.";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// Shopname
			// 
			this->Shopname->AutoSize = true;
			this->Shopname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Shopname->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Shopname->Location = System::Drawing::Point(15, 13);
			this->Shopname->Name = L"Shopname";
			this->Shopname->Size = System::Drawing::Size(117, 23);
			this->Shopname->TabIndex = 1;
			this->Shopname->Text = L"Shopname";
			// 
			// shopOrt
			// 
			this->shopOrt->AutoSize = true;
			this->shopOrt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->shopOrt->Location = System::Drawing::Point(382, 71);
			this->shopOrt->Name = L"shopOrt";
			this->shopOrt->Size = System::Drawing::Size(0, 16);
			this->shopOrt->TabIndex = 42;
			// 
			// shopPLZ
			// 
			this->shopPLZ->AutoSize = true;
			this->shopPLZ->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->shopPLZ->Location = System::Drawing::Point(252, 71);
			this->shopPLZ->Name = L"shopPLZ";
			this->shopPLZ->Size = System::Drawing::Size(0, 16);
			this->shopPLZ->TabIndex = 41;
			// 
			// shopStrassenname
			// 
			this->shopStrassenname->AutoSize = true;
			this->shopStrassenname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->shopStrassenname->Location = System::Drawing::Point(320, 46);
			this->shopStrassenname->Name = L"shopStrassenname";
			this->shopStrassenname->Size = System::Drawing::Size(0, 16);
			this->shopStrassenname->TabIndex = 40;
			// 
			// shopTelefonnr
			// 
			this->shopTelefonnr->AutoSize = true;
			this->shopTelefonnr->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->shopTelefonnr->Location = System::Drawing::Point(130, 71);
			this->shopTelefonnr->Name = L"shopTelefonnr";
			this->shopTelefonnr->Size = System::Drawing::Size(0, 16);
			this->shopTelefonnr->TabIndex = 39;
			// 
			// shopBesitzerName
			// 
			this->shopBesitzerName->AutoSize = true;
			this->shopBesitzerName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->shopBesitzerName->Location = System::Drawing::Point(130, 46);
			this->shopBesitzerName->Name = L"shopBesitzerName";
			this->shopBesitzerName->Size = System::Drawing::Size(0, 16);
			this->shopBesitzerName->TabIndex = 38;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::IndianRed;
			this->label5->Location = System::Drawing::Point(333, 71);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 37;
			this->label5->Text = L"Ort:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::IndianRed;
			this->label4->Location = System::Drawing::Point(209, 71);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 16);
			this->label4->TabIndex = 36;
			this->label4->Text = L"PLZ:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::IndianRed;
			this->label3->Location = System::Drawing::Point(209, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 16);
			this->label3->TabIndex = 35;
			this->label3->Text = L"Straßenname:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::IndianRed;
			this->label2->Location = System::Drawing::Point(16, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Telefonnr.:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::IndianRed;
			this->label1->Location = System::Drawing::Point(16, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Besitzer:";
			// 
			// Found_Shop_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Controls->Add(this->shopOrt);
			this->Controls->Add(this->shopPLZ);
			this->Controls->Add(this->shopStrassenname);
			this->Controls->Add(this->shopTelefonnr);
			this->Controls->Add(this->shopBesitzerName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Shopname);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Found_Shop_Control";
			this->Size = System::Drawing::Size(558, 103);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
