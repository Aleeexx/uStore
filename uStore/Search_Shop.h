#pragma once

namespace uStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Search_Shop
	/// </summary>
	public ref class Search_Shop : public System::Windows::Forms::Form
	{
	public:
		Search_Shop(void)
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
		~Search_Shop()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  PanelShopFound;
	private: System::Windows::Forms::Button^  BnShopSuche;
	protected: 

	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  Abbrechen;
	private: System::Windows::Forms::TextBox^  shopSearchName;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;

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
			this->PanelShopFound = (gcnew System::Windows::Forms::Panel());
			this->BnShopSuche = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Abbrechen = (gcnew System::Windows::Forms::Button());
			this->shopSearchName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// PanelShopFound
			// 
			this->PanelShopFound->AutoScroll = true;
			this->PanelShopFound->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelShopFound->Location = System::Drawing::Point(-1, 147);
			this->PanelShopFound->Name = L"PanelShopFound";
			this->PanelShopFound->Size = System::Drawing::Size(601, 307);
			this->PanelShopFound->TabIndex = 92;
			// 
			// BnShopSuche
			// 
			this->BnShopSuche->Location = System::Drawing::Point(190, 81);
			this->BnShopSuche->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BnShopSuche->Name = L"BnShopSuche";
			this->BnShopSuche->Size = System::Drawing::Size(78, 28);
			this->BnShopSuche->TabIndex = 98;
			this->BnShopSuche->Text = L"Suchen.";
			this->BnShopSuche->UseVisualStyleBackColor = true;
			this->BnShopSuche->Click += gcnew System::EventHandler(this, &Search_Shop::BnShopSuche_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(289, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 64);
			this->label1->TabIndex = 97;
			this->label1->Text = L"Tipp:\r\n\r\nAm besten suchst Du mit möglichst allgemeinen\r\nStichwörtern um deine Tre" 
				L"fferquote zu erhöhen.";
			// 
			// Abbrechen
			// 
			this->Abbrechen->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Abbrechen->Location = System::Drawing::Point(473, 113);
			this->Abbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Abbrechen->Name = L"Abbrechen";
			this->Abbrechen->Size = System::Drawing::Size(78, 28);
			this->Abbrechen->TabIndex = 96;
			this->Abbrechen->Text = L"Schließen.";
			this->Abbrechen->UseVisualStyleBackColor = true;
			// 
			// shopSearchName
			// 
			this->shopSearchName->Location = System::Drawing::Point(20, 53);
			this->shopSearchName->Name = L"shopSearchName";
			this->shopSearchName->Size = System::Drawing::Size(248, 21);
			this->shopSearchName->TabIndex = 95;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label8->Location = System::Drawing::Point(16, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(247, 19);
			this->label8->TabIndex = 93;
			this->label8->Text = L"Hier kannst Du einen Shop suchen.";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(0, 30);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(604, 1);
			this->panel1->TabIndex = 94;
			// 
			// Search_Shop
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(599, 451);
			this->ControlBox = false;
			this->Controls->Add(this->PanelShopFound);
			this->Controls->Add(this->BnShopSuche);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Abbrechen);
			this->Controls->Add(this->shopSearchName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Search_Shop";
			this->Text = L"Shopsuche";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BnShopSuche_Click(System::Object^  sender, System::EventArgs^  e);
};
}
