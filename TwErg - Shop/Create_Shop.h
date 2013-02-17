#pragma once

namespace TwErgShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Create_Shop
	/// </summary>
	public ref class Create_Shop : public System::Windows::Forms::Form
	{
	public:
		Create_Shop(void)
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
		~Create_Shop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  Shopname;
	private: System::Windows::Forms::RadioButton^  privat;
	private: System::Windows::Forms::RadioButton^  kommerziell;


	private: System::Windows::Forms::TextBox^  Telefonnr;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  Tags;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  erstellen;
	private: System::Windows::Forms::TextBox^  Strassenname;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  PLZ;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  Ort;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::GroupBox^  groupBox1;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Create_Shop::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Shopname = (gcnew System::Windows::Forms::TextBox());
			this->privat = (gcnew System::Windows::Forms::RadioButton());
			this->kommerziell = (gcnew System::Windows::Forms::RadioButton());
			this->Telefonnr = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Tags = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->erstellen = (gcnew System::Windows::Forms::Button());
			this->Strassenname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->PLZ = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Ort = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Hier kannst du deinen Shop erstellen!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Shopname:";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-18, -40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(369, 69);
			this->panel1->TabIndex = 2;
			// 
			// Shopname
			// 
			this->Shopname->Location = System::Drawing::Point(126, 41);
			this->Shopname->Name = L"Shopname";
			this->Shopname->Size = System::Drawing::Size(149, 21);
			this->Shopname->TabIndex = 3;
			// 
			// privat
			// 
			this->privat->AutoSize = true;
			this->privat->Location = System::Drawing::Point(8, 11);
			this->privat->Name = L"privat";
			this->privat->Size = System::Drawing::Size(58, 20);
			this->privat->TabIndex = 5;
			this->privat->TabStop = true;
			this->privat->Text = L"Privat";
			this->privat->UseVisualStyleBackColor = true;
			this->privat->CheckedChanged += gcnew System::EventHandler(this, &Create_Shop::privat_CheckedChanged);
			// 
			// kommerziell
			// 
			this->kommerziell->AutoSize = true;
			this->kommerziell->Location = System::Drawing::Point(118, 11);
			this->kommerziell->Name = L"kommerziell";
			this->kommerziell->Size = System::Drawing::Size(88, 20);
			this->kommerziell->TabIndex = 6;
			this->kommerziell->TabStop = true;
			this->kommerziell->Text = L"Kommerziell";
			this->kommerziell->UseVisualStyleBackColor = true;
			this->kommerziell->CheckedChanged += gcnew System::EventHandler(this, &Create_Shop::kommerziell_CheckedChanged);
			// 
			// Telefonnr
			// 
			this->Telefonnr->Enabled = false;
			this->Telefonnr->Location = System::Drawing::Point(126, 104);
			this->Telefonnr->Name = L"Telefonnr";
			this->Telefonnr->Size = System::Drawing::Size(149, 21);
			this->Telefonnr->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 107);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Telefonnr.:";
			// 
			// Tags
			// 
			this->Tags->Location = System::Drawing::Point(126, 185);
			this->Tags->Multiline = true;
			this->Tags->Name = L"Tags";
			this->Tags->Size = System::Drawing::Size(149, 55);
			this->Tags->TabIndex = 10;
			this->Tags->Text = L"Tags\r\nmit \',\'\r\ntrennen";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 188);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Tags:";
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(214, 246);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(61, 23);
			this->erstellen->TabIndex = 11;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			// 
			// Strassenname
			// 
			this->Strassenname->Enabled = false;
			this->Strassenname->Location = System::Drawing::Point(126, 131);
			this->Strassenname->Name = L"Strassenname";
			this->Strassenname->Size = System::Drawing::Size(149, 21);
			this->Strassenname->TabIndex = 13;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Straßenname:";
			// 
			// PLZ
			// 
			this->PLZ->Enabled = false;
			this->PLZ->Location = System::Drawing::Point(51, 158);
			this->PLZ->Name = L"PLZ";
			this->PLZ->Size = System::Drawing::Size(74, 21);
			this->PLZ->TabIndex = 15;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 161);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 16);
			this->label6->TabIndex = 14;
			this->label6->Text = L"PLZ.:";
			// 
			// Ort
			// 
			this->Ort->Enabled = false;
			this->Ort->Location = System::Drawing::Point(201, 158);
			this->Ort->Name = L"Ort";
			this->Ort->Size = System::Drawing::Size(74, 21);
			this->Ort->TabIndex = 19;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(163, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 16);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Ort:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->kommerziell);
			this->groupBox1->Controls->Add(this->privat);
			this->groupBox1->Location = System::Drawing::Point(8, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 36);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			// 
			// Create_Shop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(285, 277);
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
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Create_Shop";
			this->Text = L"Shop erstellen";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void kommerziell_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 privat->Checked = false;

				 Telefonnr->Enabled = true;
				 Strassenname->Enabled = true;
				 PLZ->Enabled = true;
				 Ort->Enabled = true;
			 }
private: System::Void privat_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 kommerziell->Checked = false;

				 Telefonnr->Enabled = false;
				 Strassenname->Enabled = false;
				 PLZ->Enabled = false;
				 Ort->Enabled = false;
			 }
};
}
