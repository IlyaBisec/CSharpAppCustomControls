#pragma once
#include "OptionsCalc.h"

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MainCalcForm
	/// </summary>
	public ref class MainCalcForm : public System::Windows::Forms::Form
	{
	public:
		MainCalcForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainCalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_Main;
	protected:

	protected:

	protected:

	private: OwnControls::Controls::Modern_Button^ mb_0;
	private: OwnControls::Controls::Modern_Button^ mb_Point;
	private: OwnControls::Controls::Modern_Button^ mb_Equal;
	private: OwnControls::Controls::Modern_Button^ mb_Plus;
	private: OwnControls::Controls::Modern_Button^ mb_3;



	private: OwnControls::Controls::Modern_Button^ mb_2;

	private: OwnControls::Controls::Modern_Button^ mb_1;

	private: OwnControls::Controls::Modern_Button^ mb_Minus;
	private: OwnControls::Controls::Modern_Button^ mb_6;


	private: OwnControls::Controls::Modern_Button^ mb_5;


	private: OwnControls::Controls::Modern_Button^ mb_4;

	private: OwnControls::Controls::Modern_Button^ mb_Increase;
	private: OwnControls::Controls::Modern_Button^ mb_9;


	private: OwnControls::Controls::Modern_Button^ mb_8;

	private: OwnControls::Controls::Modern_Button^ mb_7;

	private: OwnControls::Controls::Modern_Button^ mb_Divide;
	private: OwnControls::Controls::Modern_Button^ mb_C;
	private: OwnControls::Controls::Modern_Button^ mb_CA;
	private: OwnControls::Controls::Modern_Button^ mb_plusAndMinus;







	private: OwnControls::Controls::Modern_Button^ mb_Percent;

	private: OwnControls::Controls::Modern_TextBox^ mt_tablo;
	private: System::Windows::Forms::Panel^ pnl_Middle;
	private: System::Windows::Forms::Panel^ pnl_ControlsUp;


	private: OwnControls::Controls::Modern_Button^ mb_close;
	private: OwnControls::Controls::Modern_Button^ mb_Hide;
	private: System::Windows::Forms::MenuStrip^ menuStrip;

	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Panel^ pnl_Display;












	protected:

































	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnl_Main = (gcnew System::Windows::Forms::Panel());
			this->pnl_Display = (gcnew System::Windows::Forms::Panel());
			this->mt_tablo = (gcnew OwnControls::Controls::Modern_TextBox());
			this->pnl_Middle = (gcnew System::Windows::Forms::Panel());
			this->mb_Percent = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_0 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Divide = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Point = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_C = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Equal = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_CA = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_1 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_plusAndMinus = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_2 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Increase = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_3 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_9 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Plus = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_8 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_4 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_7 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_5 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Minus = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_6 = (gcnew OwnControls::Controls::Modern_Button());
			this->pnl_ControlsUp = (gcnew System::Windows::Forms::Panel());
			this->mb_Hide = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_close = (gcnew OwnControls::Controls::Modern_Button());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pnl_Main->SuspendLayout();
			this->pnl_Display->SuspendLayout();
			this->pnl_Middle->SuspendLayout();
			this->pnl_ControlsUp->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_Main
			// 
			this->pnl_Main->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_Main->Controls->Add(this->pnl_Display);
			this->pnl_Main->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_Main->Location = System::Drawing::Point(0, 0);
			this->pnl_Main->Name = L"pnl_Main";
			this->pnl_Main->Size = System::Drawing::Size(323, 554);
			this->pnl_Main->TabIndex = 0;
			// 
			// pnl_Display
			// 
			this->pnl_Display->Controls->Add(this->mt_tablo);
			this->pnl_Display->Location = System::Drawing::Point(3, 35);
			this->pnl_Display->Name = L"pnl_Display";
			this->pnl_Display->Size = System::Drawing::Size(320, 107);
			this->pnl_Display->TabIndex = 1;
			// 
			// mt_tablo
			// 
			this->mt_tablo->BackColor = System::Drawing::Color::Black;
			this->mt_tablo->BorderColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mt_tablo->BorderFocusColor = System::Drawing::Color::Gray;
			this->mt_tablo->BorderRadius = 10;
			this->mt_tablo->BorderSize = 2;
			this->mt_tablo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->mt_tablo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 55, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(200)));
			this->mt_tablo->ForeColor = System::Drawing::Color::Silver;
			this->mt_tablo->Location = System::Drawing::Point(0, 0);
			this->mt_tablo->Margin = System::Windows::Forms::Padding(4);
			this->mt_tablo->MultiLine = true;
			this->mt_tablo->Name = L"mt_tablo";
			this->mt_tablo->Padding = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->mt_tablo->PasswordStyle = false;
			this->mt_tablo->PlaceholderColor = System::Drawing::Color::DarkGray;
			this->mt_tablo->PlaceholderText = L"";
			this->mt_tablo->Size = System::Drawing::Size(320, 107);
			this->mt_tablo->TabIndex = 0;
			this->mt_tablo->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->mt_tablo->Texts = L"0";
			this->mt_tablo->UnderLineStyle = false;
			this->mt_tablo->WorldWrap = false;
			// 
			// pnl_Middle
			// 
			this->pnl_Middle->BackColor = System::Drawing::Color::White;
			this->pnl_Middle->Controls->Add(this->mb_Percent);
			this->pnl_Middle->Controls->Add(this->mb_0);
			this->pnl_Middle->Controls->Add(this->mb_Divide);
			this->pnl_Middle->Controls->Add(this->mb_Point);
			this->pnl_Middle->Controls->Add(this->mb_C);
			this->pnl_Middle->Controls->Add(this->mb_Equal);
			this->pnl_Middle->Controls->Add(this->mb_CA);
			this->pnl_Middle->Controls->Add(this->mb_1);
			this->pnl_Middle->Controls->Add(this->mb_plusAndMinus);
			this->pnl_Middle->Controls->Add(this->mb_2);
			this->pnl_Middle->Controls->Add(this->mb_Increase);
			this->pnl_Middle->Controls->Add(this->mb_3);
			this->pnl_Middle->Controls->Add(this->mb_9);
			this->pnl_Middle->Controls->Add(this->mb_Plus);
			this->pnl_Middle->Controls->Add(this->mb_8);
			this->pnl_Middle->Controls->Add(this->mb_4);
			this->pnl_Middle->Controls->Add(this->mb_7);
			this->pnl_Middle->Controls->Add(this->mb_5);
			this->pnl_Middle->Controls->Add(this->mb_Minus);
			this->pnl_Middle->Controls->Add(this->mb_6);
			this->pnl_Middle->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnl_Middle->Location = System::Drawing::Point(0, 148);
			this->pnl_Middle->Name = L"pnl_Middle";
			this->pnl_Middle->Size = System::Drawing::Size(323, 406);
			this->pnl_Middle->TabIndex = 34;
			// 
			// mb_Percent
			// 
			this->mb_Percent->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Percent->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Percent->BorderColor = System::Drawing::Color::White;
			this->mb_Percent->BorderRadius = 10;
			this->mb_Percent->BorderSize = 1;
			this->mb_Percent->FlatAppearance->BorderSize = 0;
			this->mb_Percent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Percent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Percent->ForeColor = System::Drawing::Color::White;
			this->mb_Percent->Location = System::Drawing::Point(12, 24);
			this->mb_Percent->Name = L"mb_Percent";
			this->mb_Percent->Size = System::Drawing::Size(70, 70);
			this->mb_Percent->TabIndex = 32;
			this->mb_Percent->Text = L"%";
			this->mb_Percent->TextColor = System::Drawing::Color::White;
			this->mb_Percent->UseVisualStyleBackColor = false;
			this->mb_Percent->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterOperator);
			// 
			// mb_0
			// 
			this->mb_0->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_0->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_0->BorderColor = System::Drawing::Color::White;
			this->mb_0->BorderRadius = 10;
			this->mb_0->BorderSize = 1;
			this->mb_0->FlatAppearance->BorderSize = 0;
			this->mb_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_0->ForeColor = System::Drawing::Color::White;
			this->mb_0->Location = System::Drawing::Point(88, 328);
			this->mb_0->Name = L"mb_0";
			this->mb_0->Size = System::Drawing::Size(70, 70);
			this->mb_0->TabIndex = 12;
			this->mb_0->Text = L"0";
			this->mb_0->TextColor = System::Drawing::Color::White;
			this->mb_0->UseVisualStyleBackColor = false;
			this->mb_0->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_Divide
			// 
			this->mb_Divide->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Divide->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Divide->BorderColor = System::Drawing::Color::White;
			this->mb_Divide->BorderRadius = 10;
			this->mb_Divide->BorderSize = 1;
			this->mb_Divide->FlatAppearance->BorderSize = 0;
			this->mb_Divide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Divide->ForeColor = System::Drawing::Color::White;
			this->mb_Divide->Location = System::Drawing::Point(12, 100);
			this->mb_Divide->Name = L"mb_Divide";
			this->mb_Divide->Size = System::Drawing::Size(70, 70);
			this->mb_Divide->TabIndex = 31;
			this->mb_Divide->Text = L"/";
			this->mb_Divide->TextColor = System::Drawing::Color::White;
			this->mb_Divide->UseVisualStyleBackColor = false;
			this->mb_Divide->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterOperator);
			// 
			// mb_Point
			// 
			this->mb_Point->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Point->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Point->BorderColor = System::Drawing::Color::White;
			this->mb_Point->BorderRadius = 10;
			this->mb_Point->BorderSize = 1;
			this->mb_Point->FlatAppearance->BorderSize = 0;
			this->mb_Point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Point->ForeColor = System::Drawing::Color::White;
			this->mb_Point->Location = System::Drawing::Point(165, 328);
			this->mb_Point->Name = L"mb_Point";
			this->mb_Point->Size = System::Drawing::Size(70, 70);
			this->mb_Point->TabIndex = 13;
			this->mb_Point->Text = L".";
			this->mb_Point->TextColor = System::Drawing::Color::White;
			this->mb_Point->UseVisualStyleBackColor = false;
			this->mb_Point->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_Point_Click);
			// 
			// mb_C
			// 
			this->mb_C->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_C->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_C->BorderColor = System::Drawing::Color::White;
			this->mb_C->BorderRadius = 10;
			this->mb_C->BorderSize = 1;
			this->mb_C->FlatAppearance->BorderSize = 0;
			this->mb_C->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_C->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_C->ForeColor = System::Drawing::Color::White;
			this->mb_C->Location = System::Drawing::Point(241, 24);
			this->mb_C->Name = L"mb_C";
			this->mb_C->Size = System::Drawing::Size(70, 70);
			this->mb_C->TabIndex = 30;
			this->mb_C->Text = L"C";
			this->mb_C->TextColor = System::Drawing::Color::White;
			this->mb_C->UseVisualStyleBackColor = false;
			this->mb_C->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_C_Click);
			// 
			// mb_Equal
			// 
			this->mb_Equal->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Equal->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Equal->BorderColor = System::Drawing::Color::White;
			this->mb_Equal->BorderRadius = 10;
			this->mb_Equal->BorderSize = 1;
			this->mb_Equal->FlatAppearance->BorderSize = 0;
			this->mb_Equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Equal->ForeColor = System::Drawing::Color::White;
			this->mb_Equal->Location = System::Drawing::Point(241, 328);
			this->mb_Equal->Name = L"mb_Equal";
			this->mb_Equal->Size = System::Drawing::Size(70, 70);
			this->mb_Equal->TabIndex = 14;
			this->mb_Equal->Text = L"=";
			this->mb_Equal->TextColor = System::Drawing::Color::White;
			this->mb_Equal->UseVisualStyleBackColor = false;
			this->mb_Equal->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_Equal_Click);
			// 
			// mb_CA
			// 
			this->mb_CA->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_CA->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_CA->BorderColor = System::Drawing::Color::White;
			this->mb_CA->BorderRadius = 10;
			this->mb_CA->BorderSize = 1;
			this->mb_CA->FlatAppearance->BorderSize = 0;
			this->mb_CA->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_CA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_CA->ForeColor = System::Drawing::Color::White;
			this->mb_CA->Location = System::Drawing::Point(165, 24);
			this->mb_CA->Name = L"mb_CA";
			this->mb_CA->Size = System::Drawing::Size(70, 70);
			this->mb_CA->TabIndex = 29;
			this->mb_CA->Text = L"CA";
			this->mb_CA->TextColor = System::Drawing::Color::White;
			this->mb_CA->UseVisualStyleBackColor = false;
			this->mb_CA->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_CA_Click);
			// 
			// mb_1
			// 
			this->mb_1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_1->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_1->BorderColor = System::Drawing::Color::White;
			this->mb_1->BorderRadius = 10;
			this->mb_1->BorderSize = 1;
			this->mb_1->FlatAppearance->BorderSize = 0;
			this->mb_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_1->ForeColor = System::Drawing::Color::White;
			this->mb_1->Location = System::Drawing::Point(88, 252);
			this->mb_1->Name = L"mb_1";
			this->mb_1->Size = System::Drawing::Size(70, 70);
			this->mb_1->TabIndex = 16;
			this->mb_1->Text = L"1";
			this->mb_1->TextColor = System::Drawing::Color::White;
			this->mb_1->UseVisualStyleBackColor = false;
			this->mb_1->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_plusAndMinus
			// 
			this->mb_plusAndMinus->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_plusAndMinus->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_plusAndMinus->BorderColor = System::Drawing::Color::White;
			this->mb_plusAndMinus->BorderRadius = 10;
			this->mb_plusAndMinus->BorderSize = 1;
			this->mb_plusAndMinus->FlatAppearance->BorderSize = 0;
			this->mb_plusAndMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_plusAndMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_plusAndMinus->ForeColor = System::Drawing::Color::White;
			this->mb_plusAndMinus->Location = System::Drawing::Point(88, 24);
			this->mb_plusAndMinus->Name = L"mb_plusAndMinus";
			this->mb_plusAndMinus->Size = System::Drawing::Size(70, 70);
			this->mb_plusAndMinus->TabIndex = 28;
			this->mb_plusAndMinus->Text = L"±";
			this->mb_plusAndMinus->TextColor = System::Drawing::Color::White;
			this->mb_plusAndMinus->UseVisualStyleBackColor = false;
			this->mb_plusAndMinus->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_plusAndMinus_Click);
			// 
			// mb_2
			// 
			this->mb_2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_2->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_2->BorderColor = System::Drawing::Color::White;
			this->mb_2->BorderRadius = 10;
			this->mb_2->BorderSize = 1;
			this->mb_2->FlatAppearance->BorderSize = 0;
			this->mb_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_2->ForeColor = System::Drawing::Color::White;
			this->mb_2->Location = System::Drawing::Point(165, 252);
			this->mb_2->Name = L"mb_2";
			this->mb_2->Size = System::Drawing::Size(70, 70);
			this->mb_2->TabIndex = 17;
			this->mb_2->Text = L"2";
			this->mb_2->TextColor = System::Drawing::Color::White;
			this->mb_2->UseVisualStyleBackColor = false;
			this->mb_2->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_Increase
			// 
			this->mb_Increase->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Increase->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Increase->BorderColor = System::Drawing::Color::White;
			this->mb_Increase->BorderRadius = 10;
			this->mb_Increase->BorderSize = 1;
			this->mb_Increase->FlatAppearance->BorderSize = 0;
			this->mb_Increase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Increase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Increase->ForeColor = System::Drawing::Color::White;
			this->mb_Increase->Location = System::Drawing::Point(12, 176);
			this->mb_Increase->Name = L"mb_Increase";
			this->mb_Increase->Size = System::Drawing::Size(70, 70);
			this->mb_Increase->TabIndex = 27;
			this->mb_Increase->Text = L"*";
			this->mb_Increase->TextColor = System::Drawing::Color::White;
			this->mb_Increase->UseVisualStyleBackColor = false;
			this->mb_Increase->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterOperator);
			// 
			// mb_3
			// 
			this->mb_3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_3->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_3->BorderColor = System::Drawing::Color::White;
			this->mb_3->BorderRadius = 10;
			this->mb_3->BorderSize = 1;
			this->mb_3->FlatAppearance->BorderSize = 0;
			this->mb_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_3->ForeColor = System::Drawing::Color::White;
			this->mb_3->Location = System::Drawing::Point(241, 252);
			this->mb_3->Name = L"mb_3";
			this->mb_3->Size = System::Drawing::Size(70, 70);
			this->mb_3->TabIndex = 18;
			this->mb_3->Text = L"3";
			this->mb_3->TextColor = System::Drawing::Color::White;
			this->mb_3->UseVisualStyleBackColor = false;
			this->mb_3->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_9
			// 
			this->mb_9->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_9->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_9->BorderColor = System::Drawing::Color::White;
			this->mb_9->BorderRadius = 10;
			this->mb_9->BorderSize = 1;
			this->mb_9->FlatAppearance->BorderSize = 0;
			this->mb_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_9->ForeColor = System::Drawing::Color::White;
			this->mb_9->Location = System::Drawing::Point(241, 100);
			this->mb_9->Name = L"mb_9";
			this->mb_9->Size = System::Drawing::Size(70, 70);
			this->mb_9->TabIndex = 26;
			this->mb_9->Text = L"9";
			this->mb_9->TextColor = System::Drawing::Color::White;
			this->mb_9->UseVisualStyleBackColor = false;
			this->mb_9->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_Plus
			// 
			this->mb_Plus->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Plus->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Plus->BorderColor = System::Drawing::Color::White;
			this->mb_Plus->BorderRadius = 10;
			this->mb_Plus->BorderSize = 1;
			this->mb_Plus->FlatAppearance->BorderSize = 0;
			this->mb_Plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Plus->ForeColor = System::Drawing::Color::White;
			this->mb_Plus->Location = System::Drawing::Point(12, 328);
			this->mb_Plus->Name = L"mb_Plus";
			this->mb_Plus->Size = System::Drawing::Size(70, 70);
			this->mb_Plus->TabIndex = 19;
			this->mb_Plus->Text = L"+";
			this->mb_Plus->TextColor = System::Drawing::Color::White;
			this->mb_Plus->UseVisualStyleBackColor = false;
			this->mb_Plus->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterOperator);
			// 
			// mb_8
			// 
			this->mb_8->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_8->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_8->BorderColor = System::Drawing::Color::White;
			this->mb_8->BorderRadius = 10;
			this->mb_8->BorderSize = 1;
			this->mb_8->FlatAppearance->BorderSize = 0;
			this->mb_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_8->ForeColor = System::Drawing::Color::White;
			this->mb_8->Location = System::Drawing::Point(165, 100);
			this->mb_8->Name = L"mb_8";
			this->mb_8->Size = System::Drawing::Size(70, 70);
			this->mb_8->TabIndex = 25;
			this->mb_8->Text = L"8";
			this->mb_8->TextColor = System::Drawing::Color::White;
			this->mb_8->UseVisualStyleBackColor = false;
			this->mb_8->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_4
			// 
			this->mb_4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_4->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_4->BorderColor = System::Drawing::Color::White;
			this->mb_4->BorderRadius = 10;
			this->mb_4->BorderSize = 1;
			this->mb_4->FlatAppearance->BorderSize = 0;
			this->mb_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_4->ForeColor = System::Drawing::Color::White;
			this->mb_4->Location = System::Drawing::Point(88, 176);
			this->mb_4->Name = L"mb_4";
			this->mb_4->Size = System::Drawing::Size(70, 70);
			this->mb_4->TabIndex = 20;
			this->mb_4->Text = L"4";
			this->mb_4->TextColor = System::Drawing::Color::White;
			this->mb_4->UseVisualStyleBackColor = false;
			this->mb_4->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_7
			// 
			this->mb_7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_7->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_7->BorderColor = System::Drawing::Color::White;
			this->mb_7->BorderRadius = 10;
			this->mb_7->BorderSize = 1;
			this->mb_7->FlatAppearance->BorderSize = 0;
			this->mb_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_7->ForeColor = System::Drawing::Color::White;
			this->mb_7->Location = System::Drawing::Point(88, 100);
			this->mb_7->Name = L"mb_7";
			this->mb_7->Size = System::Drawing::Size(70, 70);
			this->mb_7->TabIndex = 24;
			this->mb_7->Text = L"7";
			this->mb_7->TextColor = System::Drawing::Color::White;
			this->mb_7->UseVisualStyleBackColor = false;
			this->mb_7->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_5
			// 
			this->mb_5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_5->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_5->BorderColor = System::Drawing::Color::White;
			this->mb_5->BorderRadius = 10;
			this->mb_5->BorderSize = 1;
			this->mb_5->FlatAppearance->BorderSize = 0;
			this->mb_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_5->ForeColor = System::Drawing::Color::White;
			this->mb_5->Location = System::Drawing::Point(165, 176);
			this->mb_5->Name = L"mb_5";
			this->mb_5->Size = System::Drawing::Size(70, 70);
			this->mb_5->TabIndex = 21;
			this->mb_5->Text = L"5";
			this->mb_5->TextColor = System::Drawing::Color::White;
			this->mb_5->UseVisualStyleBackColor = false;
			this->mb_5->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// mb_Minus
			// 
			this->mb_Minus->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Minus->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_Minus->BorderColor = System::Drawing::Color::White;
			this->mb_Minus->BorderRadius = 10;
			this->mb_Minus->BorderSize = 1;
			this->mb_Minus->FlatAppearance->BorderSize = 0;
			this->mb_Minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Minus->ForeColor = System::Drawing::Color::White;
			this->mb_Minus->Location = System::Drawing::Point(12, 252);
			this->mb_Minus->Name = L"mb_Minus";
			this->mb_Minus->Size = System::Drawing::Size(70, 70);
			this->mb_Minus->TabIndex = 23;
			this->mb_Minus->Text = L"-";
			this->mb_Minus->TextColor = System::Drawing::Color::White;
			this->mb_Minus->UseVisualStyleBackColor = false;
			this->mb_Minus->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterOperator);
			// 
			// mb_6
			// 
			this->mb_6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_6->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_6->BorderColor = System::Drawing::Color::White;
			this->mb_6->BorderRadius = 10;
			this->mb_6->BorderSize = 1;
			this->mb_6->FlatAppearance->BorderSize = 0;
			this->mb_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_6->ForeColor = System::Drawing::Color::White;
			this->mb_6->Location = System::Drawing::Point(241, 176);
			this->mb_6->Name = L"mb_6";
			this->mb_6->Size = System::Drawing::Size(70, 70);
			this->mb_6->TabIndex = 22;
			this->mb_6->Text = L"6";
			this->mb_6->TextColor = System::Drawing::Color::White;
			this->mb_6->UseVisualStyleBackColor = false;
			this->mb_6->Click += gcnew System::EventHandler(this, &MainCalcForm::EnterNumber);
			// 
			// pnl_ControlsUp
			// 
			this->pnl_ControlsUp->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_ControlsUp->Controls->Add(this->mb_Hide);
			this->pnl_ControlsUp->Controls->Add(this->mb_close);
			this->pnl_ControlsUp->Controls->Add(this->menuStrip);
			this->pnl_ControlsUp->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_ControlsUp->Location = System::Drawing::Point(0, 0);
			this->pnl_ControlsUp->Name = L"pnl_ControlsUp";
			this->pnl_ControlsUp->Size = System::Drawing::Size(323, 34);
			this->pnl_ControlsUp->TabIndex = 35;
			this->pnl_ControlsUp->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainCalcForm::pnl_Bottom_Paint);
			// 
			// mb_Hide
			// 
			this->mb_Hide->BackColor = System::Drawing::Color::Transparent;
			this->mb_Hide->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_Hide->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_Hide->BorderRadius = 5;
			this->mb_Hide->BorderSize = 1;
			this->mb_Hide->FlatAppearance->BorderSize = 0;
			this->mb_Hide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_Hide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_Hide->ForeColor = System::Drawing::Color::Black;
			this->mb_Hide->Location = System::Drawing::Point(253, 2);
			this->mb_Hide->Name = L"mb_Hide";
			this->mb_Hide->Size = System::Drawing::Size(30, 30);
			this->mb_Hide->TabIndex = 34;
			this->mb_Hide->Text = L"_";
			this->mb_Hide->TextColor = System::Drawing::Color::Black;
			this->mb_Hide->UseVisualStyleBackColor = false;
			this->mb_Hide->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_Hide_Click);
			// 
			// mb_close
			// 
			this->mb_close->BackColor = System::Drawing::Color::Transparent;
			this->mb_close->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_close->BorderColor = System::Drawing::Color::Black;
			this->mb_close->BorderRadius = 5;
			this->mb_close->BorderSize = 1;
			this->mb_close->FlatAppearance->BorderSize = 0;
			this->mb_close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_close->ForeColor = System::Drawing::Color::Black;
			this->mb_close->Location = System::Drawing::Point(289, 2);
			this->mb_close->Name = L"mb_close";
			this->mb_close->Size = System::Drawing::Size(30, 30);
			this->mb_close->TabIndex = 33;
			this->mb_close->Text = L"x";
			this->mb_close->TextColor = System::Drawing::Color::Black;
			this->mb_close->UseVisualStyleBackColor = false;
			this->mb_close->Click += gcnew System::EventHandler(this, &MainCalcForm::mb_close_Click);
			// 
			// menuStrip
			// 
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(323, 24);
			this->menuStrip->TabIndex = 35;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->optionsToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->optionsToolStripMenuItem->Text = L"Options";
			this->optionsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainCalcForm::optionsToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// MainCalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(323, 554);
			this->Controls->Add(this->pnl_ControlsUp);
			this->Controls->Add(this->pnl_Middle);
			this->Controls->Add(this->pnl_Main);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MainMenuStrip = this->menuStrip;
			this->Name = L"MainCalcForm";
			this->Text = L"MainCalcForm";
			this->Load += gcnew System::EventHandler(this, &MainCalcForm::MainCalcForm_Load);
			this->pnl_Main->ResumeLayout(false);
			this->pnl_Display->ResumeLayout(false);
			this->pnl_Middle->ResumeLayout(false);
			this->pnl_ControlsUp->ResumeLayout(false);
			this->pnl_ControlsUp->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);

		}

		public:
			//void sendToTablo(OwnControls::Controls::Modern_Button^ msgIn, OwnControls::Controls::Modern_TextBox^ msgTo);
			//void sendToTablo(char msgIn, OwnControls::Controls::Modern_TextBox^ msgTo);
			double firstDigit, secondDigit, result;
			String^ operators;

#pragma endregion

#pragma region modernButton gui click
	private: System::Void mb_Equal_Click(System::Object^ sender, System::EventArgs^ e);

		   

	private: System::Void mb_0_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void mb_Plus_Click(System::Object^ sender, System::EventArgs^ e); 
	
	private: System::Void modern_Button5_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		//sendToTablo(mb_1, mt_tablo);
	}
	private: System::Void mb_2_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_2, mt_tablo);
	}
	private: System::Void mb_3_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_3, mt_tablo);
	}
	private: System::Void mb_4_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_4, mt_tablo);
	}
	private: System::Void mb_5_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_5, mt_tablo);
	}
	private: System::Void mb_6_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_6, mt_tablo);
	}
	private: System::Void mb_7_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_7, mt_tablo);
	}
	private: System::Void mb_8_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_8, mt_tablo);
	}
	private: System::Void mb_9_Click(System::Object^ sender, System::EventArgs^ e) {
		//sendToTablo(mb_9, mt_tablo);
	}
	private: System::Void mb_Minus_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mb_Increase_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mb_Divide_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void mb_C_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mb_Point_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mb_Percent_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mb_plusAndMinus_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mb_CA_Click(System::Object^ sender, System::EventArgs^ e);

#pragma endregion

	private: System::Void pnl_Bottom_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MainCalcForm_Load(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e);

	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e);

	private: System::Void mb_Hide_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void mb_close_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void optionsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OptionsCalc^ optionsForm = gcnew OptionsCalc();

		optionsForm->ShowDialog();
	}
};
}
