#pragma once

#include "pomoc.h"

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o plansza
	/// </summary>
	public ref class plansza : public System::Windows::Forms::Form
	{
	public:
		plansza(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~plansza()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zakończToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtOkno;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obsługi projektanta — nie należy modyfikować 
		/// zawartość tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zakończToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtOkno = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zakończToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Przypnij";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &plansza::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okienkoToolStripMenuItem->Text = L"Okienko";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &plansza::okienkoToolStripMenuItem_Click);
			// 
			// zakończToolStripMenuItem
			// 
			this->zakończToolStripMenuItem->Name = L"zakończToolStripMenuItem";
			this->zakończToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zakończToolStripMenuItem->Text = L"Zakończ";
			this->zakończToolStripMenuItem->Click += gcnew System::EventHandler(this, &plansza::zakończToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &plansza::pomocToolStripMenuItem_Click);
			// 
			// txtOkno
			// 
			this->txtOkno->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->txtOkno->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtOkno->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtOkno->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtOkno->Location = System::Drawing::Point(9, 36);
			this->txtOkno->Name = L"txtOkno";
			this->txtOkno->Size = System::Drawing::Size(267, 59);
			this->txtOkno->TabIndex = 1;
			this->txtOkno->Text = L"0";
			this->txtOkno->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(9, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"7";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &plansza::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(60, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 3;
			this->button2->Text = L"8";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &plansza::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(113, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 4;
			this->button3->Text = L"9";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &plansza::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(113, 209);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 7;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &plansza::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Silver;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(60, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &plansza::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Silver;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->Location = System::Drawing::Point(9, 209);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &plansza::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Silver;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->Location = System::Drawing::Point(113, 263);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 10;
			this->button7->Text = L"3";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &plansza::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Silver;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button8->Location = System::Drawing::Point(60, 263);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 9;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &plansza::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Silver;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button9->Location = System::Drawing::Point(9, 263);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 8;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &plansza::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Silver;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button10->Location = System::Drawing::Point(9, 317);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(106, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &plansza::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Silver;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button11->Location = System::Drawing::Point(113, 317);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 55);
			this->button11->TabIndex = 12;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &plansza::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Silver;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button12->Location = System::Drawing::Point(167, 263);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 109);
			this->button12->TabIndex = 13;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Silver;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button13->Location = System::Drawing::Point(167, 209);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 55);
			this->button13->TabIndex = 15;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Silver;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button14->Location = System::Drawing::Point(167, 155);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 55);
			this->button14->TabIndex = 14;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Silver;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button15->Location = System::Drawing::Point(167, 101);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(55, 55);
			this->button15->TabIndex = 19;
			this->button15->Text = L"/";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::Silver;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Open Sans", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button16->Location = System::Drawing::Point(113, 101);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 55);
			this->button16->TabIndex = 18;
			this->button16->Text = L"CE";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &plansza::button16_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::Silver;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button18->Location = System::Drawing::Point(9, 101);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(106, 55);
			this->button18->TabIndex = 16;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Coral;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button17->Location = System::Drawing::Point(221, 101);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 55);
			this->button17->TabIndex = 23;
			this->button17->Text = L"√";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Coral;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button19->Location = System::Drawing::Point(221, 209);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 22;
			this->button19->Text = L"%";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Coral;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button20->Location = System::Drawing::Point(221, 155);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 21;
			this->button20->Text = L"x²";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Coral;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Open Sans", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button21->Location = System::Drawing::Point(221, 263);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 109);
			this->button21->TabIndex = 20;
			this->button21->Text = L"=";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// plansza
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(284, 386);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtOkno);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimizeBox = false;
			this->Name = L"plansza";
			this->Text = L"Calculator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: Void wypisz(String^ liczba) {

			if (txtOkno->Text == "0") {
				txtOkno->Text = liczba;
			}
			else {
				txtOkno->Text += liczba;
			}

		}

	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		pomoc^ onas = gcnew pomoc();
		onas->Show();
	}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;

}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	plansza::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
	TopMost = false;

}
private: System::Void zakończToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {

	wypisz("1");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("2");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("3");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("4");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("5");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("6");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("7");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("8");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("9");
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz("0");
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	wypisz(",");
}
};
}
