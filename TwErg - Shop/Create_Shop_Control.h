#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TwErgShop {

	/// <summary>
	/// Zusammenfassung f�r Create_Shop_Control
	/// </summary>
	public ref class Create_Shop_Control : public System::Windows::Forms::UserControl
	{
	public:
		Create_Shop_Control(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzuf�gen.
			//
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::RadioButton^  kommerziell;
	private: System::Windows::Forms::RadioButton^  privat;
	private: System::Windows::Forms::TextBox^  Ort;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  PLZ;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Strassenname;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  erstellen;
	private: System::Windows::Forms::TextBox^  Tags;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  Telefonnr;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Shopname;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode f�r die Designerunterst�tzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor ge�ndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->kommerziell = (gcnew System::Windows::Forms::RadioButton());
			this->privat = (gcnew System::Windows::Forms::RadioButton());
			this->Ort = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->PLZ = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Strassenname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->erstellen = (gcnew System::Windows::Forms::Button());
			this->Tags = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Telefonnr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Shopname = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->kommerziell);
			this->groupBox1->Controls->Add(this->privat);
			this->groupBox1->Location = System::Drawing::Point(10, 53);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 36);
			this->groupBox1->TabIndex = 36;
			this->groupBox1->TabStop = false;
			// 
			// kommerziell
			// 
			this->kommerziell->AutoSize = true;
			this->kommerziell->Location = System::Drawing::Point(118, 11);
			this->kommerziell->Name = L"kommerziell";
			this->kommerziell->Size = System::Drawing::Size(80, 17);
			this->kommerziell->TabIndex = 6;
			this->kommerziell->TabStop = true;
			this->kommerziell->Text = L"Kommerziell";
			this->kommerziell->UseVisualStyleBackColor = true;
			// 
			// privat
			// 
			this->privat->AutoSize = true;
			this->privat->Location = System::Drawing::Point(8, 11);
			this->privat->Name = L"privat";
			this->privat->Size = System::Drawing::Size(52, 17);
			this->privat->TabIndex = 5;
			this->privat->TabStop = true;
			this->privat->Text = L"Privat";
			this->privat->UseVisualStyleBackColor = true;
			// 
			// Ort
			// 
			this->Ort->Enabled = false;
			this->Ort->Location = System::Drawing::Point(203, 149);
			this->Ort->Name = L"Ort";
			this->Ort->Size = System::Drawing::Size(74, 20);
			this->Ort->TabIndex = 35;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(165, 152);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 13);
			this->label8->TabIndex = 34;
			this->label8->Text = L"Ort:";
			// 
			// PLZ
			// 
			this->PLZ->Enabled = false;
			this->PLZ->Location = System::Drawing::Point(53, 149);
			this->PLZ->Name = L"PLZ";
			this->PLZ->Size = System::Drawing::Size(74, 20);
			this->PLZ->TabIndex = 33;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 152);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"PLZ.:";
			// 
			// Strassenname
			// 
			this->Strassenname->Enabled = false;
			this->Strassenname->Location = System::Drawing::Point(128, 122);
			this->Strassenname->Name = L"Strassenname";
			this->Strassenname->Size = System::Drawing::Size(149, 20);
			this->Strassenname->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 125);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 30;
			this->label5->Text = L"Stra�enname:";
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(216, 237);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(61, 23);
			this->erstellen->TabIndex = 29;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			// 
			// Tags
			// 
			this->Tags->Location = System::Drawing::Point(128, 176);
			this->Tags->Multiline = true;
			this->Tags->Name = L"Tags";
			this->Tags->Size = System::Drawing::Size(149, 55);
			this->Tags->TabIndex = 28;
			this->Tags->Text = L"Tags\r\nmit \',\'\r\ntrennen";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Tags:";
			// 
			// Telefonnr
			// 
			this->Telefonnr->Enabled = false;
			this->Telefonnr->Location = System::Drawing::Point(128, 95);
			this->Telefonnr->Name = L"Telefonnr";
			this->Telefonnr->Size = System::Drawing::Size(149, 20);
			this->Telefonnr->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Telefonnr.:";
			// 
			// Shopname
			// 
			this->Shopname->Location = System::Drawing::Point(128, 32);
			this->Shopname->Name = L"Shopname";
			this->Shopname->Size = System::Drawing::Size(149, 20);
			this->Shopname->TabIndex = 24;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 22;
			this->label2->Text = L"Shopname:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->Location = System::Drawing::Point(14, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 19);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Hier kannst du deinen Shop erstellen!";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-16, -49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 69);
			this->panel1->TabIndex = 23;
			// 
			// Create_Shop_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Ort);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->PLZ);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->Strassenname);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->erstellen);
			this->Controls->Add(this->Tags);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Telefonnr);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Shopname);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Name = L"Create_Shop_Control";
			this->Size = System::Drawing::Size(291, 264);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}