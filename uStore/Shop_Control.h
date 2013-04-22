#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uStore {

	/// <summary>
	/// Zusammenfassung für Found_Shop_Control
	/// </summary>
	public ref class Shop_Control : public System::Windows::Forms::UserControl
	{
	public:
		Shop_Control(void)
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
		~Shop_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  shopArtPanel;
	private: System::Windows::Forms::Label^  Shopname;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  shopBesitzerName;
	private: System::Windows::Forms::Label^  shopTelefonnr;
	private: System::Windows::Forms::Label^  shopStrassenname;
	private: System::Windows::Forms::Label^  shopPLZ;
	private: System::Windows::Forms::Label^  shopOrt;
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
			this->shopArtPanel = (gcnew System::Windows::Forms::Panel());
			this->Shopname = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->shopBesitzerName = (gcnew System::Windows::Forms::Label());
			this->shopTelefonnr = (gcnew System::Windows::Forms::Label());
			this->shopStrassenname = (gcnew System::Windows::Forms::Label());
			this->shopPLZ = (gcnew System::Windows::Forms::Label());
			this->shopOrt = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// shopArtPanel
			// 
			this->shopArtPanel->BackColor = System::Drawing::Color::White;
			this->shopArtPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->shopArtPanel->Location = System::Drawing::Point(-1, 115);
			this->shopArtPanel->Name = L"shopArtPanel";
			this->shopArtPanel->Size = System::Drawing::Size(515, 311);
			this->shopArtPanel->TabIndex = 0;
			// 
			// Shopname
			// 
			this->Shopname->AutoSize = true;
			this->Shopname->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Shopname->Location = System::Drawing::Point(20, 52);
			this->Shopname->Name = L"Shopname";
			this->Shopname->Size = System::Drawing::Size(116, 23);
			this->Shopname->TabIndex = 1;
			this->Shopname->Text = L"Shopname";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Besitzer:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Telefonnr.:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Shopname);
			this->panel1->Location = System::Drawing::Point(-1, -46);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(515, 84);
			this->panel1->TabIndex = 24;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(193, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Straßenname:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(193, 81);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 16);
			this->label4->TabIndex = 26;
			this->label4->Text = L"PLZ:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(317, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(28, 16);
			this->label5->TabIndex = 27;
			this->label5->Text = L"Ort:";
			// 
			// shopBesitzerName
			// 
			this->shopBesitzerName->AutoSize = true;
			this->shopBesitzerName->Location = System::Drawing::Point(96, 56);
			this->shopBesitzerName->Name = L"shopBesitzerName";
			this->shopBesitzerName->Size = System::Drawing::Size(0, 16);
			this->shopBesitzerName->TabIndex = 28;
			// 
			// shopTelefonnr
			// 
			this->shopTelefonnr->AutoSize = true;
			this->shopTelefonnr->Location = System::Drawing::Point(96, 81);
			this->shopTelefonnr->Name = L"shopTelefonnr";
			this->shopTelefonnr->Size = System::Drawing::Size(0, 16);
			this->shopTelefonnr->TabIndex = 29;
			// 
			// shopStrassenname
			// 
			this->shopStrassenname->AutoSize = true;
			this->shopStrassenname->Location = System::Drawing::Point(304, 56);
			this->shopStrassenname->Name = L"shopStrassenname";
			this->shopStrassenname->Size = System::Drawing::Size(0, 16);
			this->shopStrassenname->TabIndex = 30;
			// 
			// shopPLZ
			// 
			this->shopPLZ->AutoSize = true;
			this->shopPLZ->Location = System::Drawing::Point(236, 81);
			this->shopPLZ->Name = L"shopPLZ";
			this->shopPLZ->Size = System::Drawing::Size(0, 16);
			this->shopPLZ->TabIndex = 31;
			// 
			// shopOrt
			// 
			this->shopOrt->AutoSize = true;
			this->shopOrt->Location = System::Drawing::Point(366, 81);
			this->shopOrt->Name = L"shopOrt";
			this->shopOrt->Size = System::Drawing::Size(0, 16);
			this->shopOrt->TabIndex = 32;
			// 
			// Found_Shop_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
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
			this->Controls->Add(this->shopArtPanel);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Found_Shop_Control";
			this->Size = System::Drawing::Size(513, 425);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
