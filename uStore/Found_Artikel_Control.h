#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace uStore {

	/// <summary>
	/// Zusammenfassung für Found_Artikel_Control
	/// </summary>
	public ref class Found_Artikel_Control : public System::Windows::Forms::UserControl
	{
	public:
		Found_Artikel_Control(void)
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
		~Found_Artikel_Control()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  artFoundBeschreibung;
	public: System::Windows::Forms::Label^  artFoundVerkaeufer;
	public: System::Windows::Forms::Label^  artFoundPreis;
	public: System::Windows::Forms::Label^  artFoundName;
	public: System::Windows::Forms::PictureBox^  artFoundBild;
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
			this->artFoundBeschreibung = (gcnew System::Windows::Forms::TextBox());
			this->artFoundVerkaeufer = (gcnew System::Windows::Forms::Label());
			this->artFoundPreis = (gcnew System::Windows::Forms::Label());
			this->artFoundName = (gcnew System::Windows::Forms::Label());
			this->artFoundBild = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->artFoundBild))->BeginInit();
			this->SuspendLayout();
			// 
			// artFoundBeschreibung
			// 
			this->artFoundBeschreibung->Location = System::Drawing::Point(3, 121);
			this->artFoundBeschreibung->Multiline = true;
			this->artFoundBeschreibung->Name = L"artFoundBeschreibung";
			this->artFoundBeschreibung->Size = System::Drawing::Size(283, 73);
			this->artFoundBeschreibung->TabIndex = 80;
			this->artFoundBeschreibung->Text = L"artBeschreibung";
			// 
			// artFoundVerkaeufer
			// 
			this->artFoundVerkaeufer->AutoSize = true;
			this->artFoundVerkaeufer->Location = System::Drawing::Point(200, 62);
			this->artFoundVerkaeufer->Name = L"artFoundVerkaeufer";
			this->artFoundVerkaeufer->Size = System::Drawing::Size(80, 16);
			this->artFoundVerkaeufer->TabIndex = 79;
			this->artFoundVerkaeufer->Text = L"artVerkaeufer";
			// 
			// artFoundPreis
			// 
			this->artFoundPreis->AutoSize = true;
			this->artFoundPreis->Location = System::Drawing::Point(200, 37);
			this->artFoundPreis->Name = L"artFoundPreis";
			this->artFoundPreis->Size = System::Drawing::Size(46, 16);
			this->artFoundPreis->TabIndex = 78;
			this->artFoundPreis->Text = L"artPreis";
			// 
			// artFoundName
			// 
			this->artFoundName->AutoSize = true;
			this->artFoundName->Location = System::Drawing::Point(200, 10);
			this->artFoundName->Name = L"artFoundName";
			this->artFoundName->Size = System::Drawing::Size(56, 16);
			this->artFoundName->TabIndex = 77;
			this->artFoundName->Text = L"artName";
			// 
			// artFoundBild
			// 
			this->artFoundBild->Location = System::Drawing::Point(3, 10);
			this->artFoundBild->Name = L"artFoundBild";
			this->artFoundBild->Size = System::Drawing::Size(173, 105);
			this->artFoundBild->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->artFoundBild->TabIndex = 76;
			this->artFoundBild->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Location = System::Drawing::Point(0, 5);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 1);
			this->panel1->TabIndex = 81;
			// 
			// Found_Artikel_Control
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->artFoundBeschreibung);
			this->Controls->Add(this->artFoundVerkaeufer);
			this->Controls->Add(this->artFoundPreis);
			this->Controls->Add(this->artFoundName);
			this->Controls->Add(this->artFoundBild);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Found_Artikel_Control";
			this->Size = System::Drawing::Size(290, 195);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->artFoundBild))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
