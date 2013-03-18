#pragma once

namespace uStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Search_Artikel
	/// </summary>
	public ref class Search_Artikel : public System::Windows::Forms::Form
	{
	public:
		Search_Artikel(Panel^ tmpMainPanel)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			ptrMainPanel = tmpMainPanel;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Search_Artikel()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		Panel^ ptrMainPanel;
	private: System::Windows::Forms::Button^  Abbrechen;
	private: System::Windows::Forms::TextBox^  artSearchName;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BnArtSuche;
	private: System::Windows::Forms::Panel^  PanelArtFound;







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
			this->Abbrechen = (gcnew System::Windows::Forms::Button());
			this->artSearchName = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BnArtSuche = (gcnew System::Windows::Forms::Button());
			this->PanelArtFound = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// Abbrechen
			// 
			this->Abbrechen->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Abbrechen->Location = System::Drawing::Point(190, 412);
			this->Abbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Abbrechen->Name = L"Abbrechen";
			this->Abbrechen->Size = System::Drawing::Size(78, 28);
			this->Abbrechen->TabIndex = 87;
			this->Abbrechen->Text = L"Schließen.";
			this->Abbrechen->UseVisualStyleBackColor = true;
			this->Abbrechen->Click += gcnew System::EventHandler(this, &Search_Artikel::Abbrechen_Click);
			// 
			// artSearchName
			// 
			this->artSearchName->Location = System::Drawing::Point(20, 53);
			this->artSearchName->Name = L"artSearchName";
			this->artSearchName->Size = System::Drawing::Size(248, 21);
			this->artSearchName->TabIndex = 86;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label8->Location = System::Drawing::Point(16, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(252, 19);
			this->label8->TabIndex = 84;
			this->label8->Text = L"Hier kannst Du einen Artikel suchen.";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(0, 30);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 1);
			this->panel1->TabIndex = 85;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(17, 131);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 64);
			this->label1->TabIndex = 88;
			this->label1->Text = L"Tipp:\r\n\r\nAm besten suchst Du mit möglichst allgemeinen\r\nStichwörtern um deine Tre" 
				L"fferquote zu erhöhen.";
			// 
			// BnArtSuche
			// 
			this->BnArtSuche->Location = System::Drawing::Point(190, 81);
			this->BnArtSuche->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->BnArtSuche->Name = L"BnArtSuche";
			this->BnArtSuche->Size = System::Drawing::Size(78, 28);
			this->BnArtSuche->TabIndex = 91;
			this->BnArtSuche->Text = L"Suchen.";
			this->BnArtSuche->UseVisualStyleBackColor = true;
			this->BnArtSuche->Click += gcnew System::EventHandler(this, &Search_Artikel::BnArtSuche_Click);
			// 
			// PanelArtFound
			// 
			this->PanelArtFound->AutoScroll = true;
			this->PanelArtFound->Location = System::Drawing::Point(280, 0);
			this->PanelArtFound->Name = L"PanelArtFound";
			this->PanelArtFound->Size = System::Drawing::Size(319, 451);
			this->PanelArtFound->TabIndex = 0;
			// 
			// Search_Artikel
			// 
			this->AcceptButton = this->BnArtSuche;
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->CancelButton = this->Abbrechen;
			this->ClientSize = System::Drawing::Size(599, 451);
			this->ControlBox = false;
			this->Controls->Add(this->PanelArtFound);
			this->Controls->Add(this->BnArtSuche);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Abbrechen);
			this->Controls->Add(this->artSearchName);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Search_Artikel";
			this->Text = L"Artikelsuche";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BnArtSuche_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Abbrechen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
