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
		Search_Artikel(void)
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
		~Search_Artikel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Abbrechen;
	protected: 
	private: System::Windows::Forms::TextBox^  artSearchName;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label1;

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
			this->SuspendLayout();
			// 
			// Abbrechen
			// 
			this->Abbrechen->Location = System::Drawing::Point(207, 50);
			this->Abbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Abbrechen->Name = L"Abbrechen";
			this->Abbrechen->Size = System::Drawing::Size(78, 28);
			this->Abbrechen->TabIndex = 87;
			this->Abbrechen->Text = L"Doch nicht.";
			this->Abbrechen->UseVisualStyleBackColor = true;
			// 
			// artSearchName
			// 
			this->artSearchName->Location = System::Drawing::Point(21, 53);
			this->artSearchName->Name = L"artSearchName";
			this->artSearchName->Size = System::Drawing::Size(180, 21);
			this->artSearchName->TabIndex = 86;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label8->Location = System::Drawing::Point(17, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(252, 19);
			this->label8->TabIndex = 84;
			this->label8->Text = L"Hier kannst Du einen Artikel suchen.";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-2, 30);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(690, 1);
			this->panel1->TabIndex = 85;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 92);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 64);
			this->label1->TabIndex = 88;
			this->label1->Text = L"Tipp:\r\n\r\nAm besten suchst Du mit möglichst allgemeinen\r\nStichwörtern um deine Tre" 
				L"fferquote zu erhöhen.";
			// 
			// Search_Artikel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(688, 390);
			this->ControlBox = false;
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
	};
}
