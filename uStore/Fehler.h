#pragma once

namespace uStore {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Login_Fehler
	/// </summary>
	public ref class Fehler : public System::Windows::Forms::Form
	{
	public:
		Fehler(void)
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
		~Fehler()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  FalscheEingabe;
	protected: 

	protected: 


	private: System::Windows::Forms::TextBox^  ups;
	private: System::Windows::Forms::Button^  OK;



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
			this->FalscheEingabe = (gcnew System::Windows::Forms::TextBox());
			this->ups = (gcnew System::Windows::Forms::TextBox());
			this->OK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// FalscheEingabe
			// 
			this->FalscheEingabe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FalscheEingabe->Location = System::Drawing::Point(21, 75);
			this->FalscheEingabe->Multiline = true;
			this->FalscheEingabe->Name = L"FalscheEingabe";
			this->FalscheEingabe->ReadOnly = true;
			this->FalscheEingabe->Size = System::Drawing::Size(307, 55);
			this->FalscheEingabe->TabIndex = 2;
			this->FalscheEingabe->Text = L"Da ist irgendetwas schief gelaufen, bitte überprüfe nochmals deine Eingaben.";
			// 
			// ups
			// 
			this->ups->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ups->Font = (gcnew System::Drawing::Font(L"Century Gothic", 35));
			this->ups->Location = System::Drawing::Point(12, 12);
			this->ups->Multiline = true;
			this->ups->Name = L"ups";
			this->ups->ReadOnly = true;
			this->ups->Size = System::Drawing::Size(136, 57);
			this->ups->TabIndex = 3;
			this->ups->Text = L"UPS...";
			// 
			// OK
			// 
			this->OK->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->OK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->OK->Location = System::Drawing::Point(218, 97);
			this->OK->Name = L"OK";
			this->OK->Size = System::Drawing::Size(92, 33);
			this->OK->TabIndex = 1;
			this->OK->Text = L"Sorry!";
			this->OK->UseVisualStyleBackColor = true;
			this->OK->Click += gcnew System::EventHandler(this, &Fehler::OK_Click);
			// 
			// Fehler
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->OK;
			this->ClientSize = System::Drawing::Size(311, 132);
			this->ControlBox = false;
			this->Controls->Add(this->OK);
			this->Controls->Add(this->ups);
			this->Controls->Add(this->FalscheEingabe);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Fehler";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"Fehler";
			this->TopMost = true;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void OK_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 //Butten OK hat Cancel-Button Eigenschaft
		 }
};
}
