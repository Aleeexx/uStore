#pragma once
#include "uStore_Login.h"
#include "Benutzer.h"

namespace TwErgShop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für uStore_main
	/// </summary>
	public ref class uStore_main : public System::Windows::Forms::Form
	{
	public:
		uStore_main(CBenutzer^ tmpUser)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			user = tmpUser;
		}
		CBenutzer^ user;

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~uStore_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Logout;
	private: System::Windows::Forms::Button^  ShopNeu;
	private: System::Windows::Forms::Button^  ShopSuchen;
	private: System::Windows::Forms::Button^  ArtikelSuchen;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  Logo;
	private: System::Windows::Forms::Button^  ArtikelVerkaufen;













	protected:
		//uStore_Login* parent;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(uStore_main::typeid));
			this->Logout = (gcnew System::Windows::Forms::Button());
			this->ShopNeu = (gcnew System::Windows::Forms::Button());
			this->ShopSuchen = (gcnew System::Windows::Forms::Button());
			this->ArtikelSuchen = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Logo = (gcnew System::Windows::Forms::PictureBox());
			this->ArtikelVerkaufen = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Logo))->BeginInit();
			this->SuspendLayout();
			// 
			// Logout
			// 
			this->Logout->BackColor = System::Drawing::Color::White;
			this->Logout->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Logout->FlatAppearance->BorderSize = 0;
			this->Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Logout->Location = System::Drawing::Point(469, 0);
			this->Logout->Name = L"Logout";
			this->Logout->Size = System::Drawing::Size(67, 24);
			this->Logout->TabIndex = 4;
			this->Logout->TabStop = false;
			this->Logout->Text = L"Raus hier!";
			this->Logout->UseVisualStyleBackColor = false;
			this->Logout->Click += gcnew System::EventHandler(this, &uStore_main::Logout_Click);
			// 
			// ShopNeu
			// 
			this->ShopNeu->FlatAppearance->BorderSize = 0;
			this->ShopNeu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShopNeu->Location = System::Drawing::Point(45, 112);
			this->ShopNeu->Name = L"ShopNeu";
			this->ShopNeu->Size = System::Drawing::Size(110, 36);
			this->ShopNeu->TabIndex = 0;
			this->ShopNeu->Text = L"Shop erstellen.";
			this->ShopNeu->UseVisualStyleBackColor = true;
			this->ShopNeu->Click += gcnew System::EventHandler(this, &uStore_main::ShopNeu_Click);
			// 
			// ShopSuchen
			// 
			this->ShopSuchen->FlatAppearance->BorderSize = 0;
			this->ShopSuchen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ShopSuchen->Location = System::Drawing::Point(45, 196);
			this->ShopSuchen->Name = L"ShopSuchen";
			this->ShopSuchen->Size = System::Drawing::Size(110, 36);
			this->ShopSuchen->TabIndex = 2;
			this->ShopSuchen->Text = L"Shop suchen.";
			this->ShopSuchen->UseVisualStyleBackColor = true;
			// 
			// ArtikelSuchen
			// 
			this->ArtikelSuchen->FlatAppearance->BorderSize = 0;
			this->ArtikelSuchen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ArtikelSuchen->Location = System::Drawing::Point(45, 238);
			this->ArtikelSuchen->Name = L"ArtikelSuchen";
			this->ArtikelSuchen->Size = System::Drawing::Size(110, 36);
			this->ArtikelSuchen->TabIndex = 3;
			this->ArtikelSuchen->Text = L"Artikel suchen.";
			this->ArtikelSuchen->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->Location = System::Drawing::Point(18, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Was willst Du machen\?";
			// 
			// Logo
			// 
			this->Logo->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Logo.Image")));
			this->Logo->Location = System::Drawing::Point(20, 27);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(165, 49);
			this->Logo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Logo->TabIndex = 5;
			this->Logo->TabStop = false;
			// 
			// ArtikelVerkaufen
			// 
			this->ArtikelVerkaufen->FlatAppearance->BorderSize = 0;
			this->ArtikelVerkaufen->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ArtikelVerkaufen->Location = System::Drawing::Point(45, 154);
			this->ArtikelVerkaufen->Name = L"ArtikelVerkaufen";
			this->ArtikelVerkaufen->Size = System::Drawing::Size(110, 36);
			this->ArtikelVerkaufen->TabIndex = 1;
			this->ArtikelVerkaufen->Text = L"Artikel verkaufen.";
			this->ArtikelVerkaufen->UseVisualStyleBackColor = true;
			this->ArtikelVerkaufen->Click += gcnew System::EventHandler(this, &uStore_main::ArtikelVerkaufen_Click);
			// 
			// uStore_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(536, 439);
			this->ControlBox = false;
			this->Controls->Add(this->ArtikelVerkaufen);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ArtikelSuchen);
			this->Controls->Add(this->ShopSuchen);
			this->Controls->Add(this->ShopNeu);
			this->Controls->Add(this->Logout);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"uStore_main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"uStore";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Logo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ShopNeu_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void ArtikelVerkaufen_Click(System::Object^  sender, System::EventArgs^  e);
};
}
