#pragma once

namespace calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o pomoc
	/// </summary>
	public ref class pomoc : public System::Windows::Forms::Form
	{
	public:
		pomoc(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~pomoc()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  lblInformacja;
	private: System::Windows::Forms::TextBox^  textBox1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblInformacja = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(251, 207);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zamknij";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &pomoc::button1_Click);
			// 
			// lblInformacja
			// 
			this->lblInformacja->AutoSize = true;
			this->lblInformacja->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblInformacja->Location = System::Drawing::Point(199, 20);
			this->lblInformacja->Name = L"lblInformacja";
			this->lblInformacja->Size = System::Drawing::Size(45, 16);
			this->lblInformacja->TabIndex = 1;
			this->lblInformacja->Text = L"label1";
			this->lblInformacja->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(182, 102);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 73);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Pogram kalkulator\r\n-----------------------\r\nAutor: Mateusz Pierzcha³a\r\n----------"
				L"-------------\r\n2018";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pomoc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(561, 261);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->lblInformacja);
			this->Controls->Add(this->button1);
			this->Name = L"pomoc";
			this->Text = L"pomoc";
			this->Load += gcnew System::EventHandler(this, &pomoc::pomoc_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Close();

	}
	private: System::Void pomoc_Load(System::Object^  sender, System::EventArgs^  e) {

		lblInformacja->Text = "Program Kalkulator \n autor: Mateusz Pierzcha³a \n rok produkcji: 2018";

	}
	};
}
