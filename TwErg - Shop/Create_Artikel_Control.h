#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TwErgShop {

	/// <summary>
	/// Zusammenfassung für Create_Artikel_Control
	/// </summary>
	public ref class Create_Artikel_Control : public System::Windows::Forms::UserControl
	{
	public:
		Create_Artikel_Control(void)
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
		~Create_Artikel_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  erstellenAbbrechen;
	protected: 









	private: System::Windows::Forms::Button^  erstellen;






	private: System::Windows::Forms::Label^  label1;
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
			this->erstellenAbbrechen = (gcnew System::Windows::Forms::Button());
			this->erstellen = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// erstellenAbbrechen
			// 
			this->erstellenAbbrechen->Location = System::Drawing::Point(149, 292);
			this->erstellenAbbrechen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellenAbbrechen->Name = L"erstellenAbbrechen";
			this->erstellenAbbrechen->Size = System::Drawing::Size(92, 28);
			this->erstellenAbbrechen->TabIndex = 54;
			this->erstellenAbbrechen->Text = L"Doch nicht.";
			this->erstellenAbbrechen->UseVisualStyleBackColor = true;
			// 
			// erstellen
			// 
			this->erstellen->Location = System::Drawing::Point(251, 292);
			this->erstellen->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->erstellen->Name = L"erstellen";
			this->erstellen->Size = System::Drawing::Size(71, 28);
			this->erstellen->TabIndex = 46;
			this->erstellen->Text = L"Erstellen.";
			this->erstellen->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.25F));
			this->label1->Location = System::Drawing::Point(16, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(330, 17);
			this->label1->TabIndex = 38;
			this->label1->Text = L"Hier kannst du einen Artikel zum Verkauf anbieten!";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(-20, -60);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(430, 84);
			this->panel1->TabIndex = 40;
			// 
			// Create_Artikel_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->erstellenAbbrechen);
			this->Controls->Add(this->erstellen);
			this->Controls->Add(this->panel1);
			this->Name = L"Create_Artikel_Control";
			this->Size = System::Drawing::Size(327, 322);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
