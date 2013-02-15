#pragma once
#include "uStore_Login.h"
#include "Create_Shop.h"
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
		uStore_main()
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
		~uStore_main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Logout;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabControl^  Content;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;









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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Content = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Content->SuspendLayout();
			this->SuspendLayout();
			// 
			// Logout
			// 
			this->Logout->BackColor = System::Drawing::Color::White;
			this->Logout->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->Logout->FlatAppearance->BorderSize = 0;
			this->Logout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Logout->Location = System::Drawing::Point(540, 0);
			this->Logout->Name = L"Logout";
			this->Logout->Size = System::Drawing::Size(67, 24);
			this->Logout->TabIndex = 4;
			this->Logout->Text = L"Raus hier!";
			this->Logout->UseVisualStyleBackColor = false;
			this->Logout->Click += gcnew System::EventHandler(this, &uStore_main::Logout_Click);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(45, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Shop erstellen.";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &uStore_main::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(45, 154);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 36);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Shop suchen.";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(45, 196);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Item suchen.";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->label1->Location = System::Drawing::Point(18, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Was willst Du machen\?";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(20, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(165, 49);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// Content
			// 
			this->Content->Controls->Add(this->tabPage1);
			this->Content->Controls->Add(this->tabPage2);
			this->Content->Location = System::Drawing::Point(226, 27);
			this->Content->Name = L"Content";
			this->Content->SelectedIndex = 0;
			this->Content->Size = System::Drawing::Size(369, 407);
			this->Content->TabIndex = 6;
			this->Content->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(361, 378);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(361, 378);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// uStore_main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(607, 439);
			this->ControlBox = false;
			this->Controls->Add(this->Content);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Logout);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"uStore_main";
			this->Text = L"uStore";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Content->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e)
		{
			 Close();	 
		}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Create_Shop ^ neuer = gcnew Create_Shop();
			 neuer->ShowDialog();
		 }
};
}
