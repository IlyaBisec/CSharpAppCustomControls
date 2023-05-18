#pragma once

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainCalcForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainCalcForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnl_TabloUp;
	protected:

	private: OwnControls::Controls::Modern_Button^ mb_0;
	private: OwnControls::Controls::Modern_Button^ mb_Point;
	private: OwnControls::Controls::Modern_Button^ mb_Equal;
	private: OwnControls::Controls::Modern_Button^ mb_Plus;


	private: OwnControls::Controls::Modern_Button^ modern_Button3;
	private: OwnControls::Controls::Modern_Button^ modern_Button4;
	private: OwnControls::Controls::Modern_Button^ modern_Button5;
	private: OwnControls::Controls::Modern_Button^ mb_Minus;

	private: OwnControls::Controls::Modern_Button^ modern_Button7;
	private: OwnControls::Controls::Modern_Button^ modern_Button8;
	private: OwnControls::Controls::Modern_Button^ modern_Button9;
	private: OwnControls::Controls::Modern_Button^ mb_Increase;

	private: OwnControls::Controls::Modern_Button^ modern_Button11;
	private: OwnControls::Controls::Modern_Button^ modern_Button12;
	private: OwnControls::Controls::Modern_Button^ modern_Button13;
	private: OwnControls::Controls::Modern_Button^ mb_Divide;
	private: OwnControls::Controls::Modern_Button^ mb_C;



	private: OwnControls::Controls::Modern_Button^ mb_RightS;

	private: OwnControls::Controls::Modern_Button^ mb_LeftS;

	private: OwnControls::Controls::Modern_Button^ mb_Percent;

	private: OwnControls::Controls::Modern_TextBox^ mt_tablo;
	private: System::Windows::Forms::Panel^ pnl_Middle;
	private: System::Windows::Forms::Panel^ pnl_Bottom;









	protected:

































	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pnl_TabloUp = (gcnew System::Windows::Forms::Panel());
			this->mb_0 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Point = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Equal = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Plus = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button3 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button4 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button5 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Minus = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button7 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button8 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button9 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Increase = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button11 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button12 = (gcnew OwnControls::Controls::Modern_Button());
			this->modern_Button13 = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Divide = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_C = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_RightS = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_LeftS = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_Percent = (gcnew OwnControls::Controls::Modern_Button());
			this->mt_tablo = (gcnew OwnControls::Controls::Modern_TextBox());
			this->pnl_Middle = (gcnew System::Windows::Forms::Panel());
			this->pnl_Bottom = (gcnew System::Windows::Forms::Panel());
			this->pnl_TabloUp->SuspendLayout();
			this->pnl_Middle->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnl_TabloUp
			// 
			this->pnl_TabloUp->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_TabloUp->Controls->Add(this->mt_tablo);
			this->pnl_TabloUp->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl_TabloUp->Location = System::Drawing::Point(0, 0);
			this->pnl_TabloUp->Name = L"pnl_TabloUp";
			this->pnl_TabloUp->Size = System::Drawing::Size(323, 100);
			this->pnl_TabloUp->TabIndex = 0;
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
			// 
			// modern_Button3
			// 
			this->modern_Button3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button3->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button3->BorderColor = System::Drawing::Color::White;
			this->modern_Button3->BorderRadius = 10;
			this->modern_Button3->BorderSize = 1;
			this->modern_Button3->FlatAppearance->BorderSize = 0;
			this->modern_Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button3->ForeColor = System::Drawing::Color::White;
			this->modern_Button3->Location = System::Drawing::Point(241, 252);
			this->modern_Button3->Name = L"modern_Button3";
			this->modern_Button3->Size = System::Drawing::Size(70, 70);
			this->modern_Button3->TabIndex = 18;
			this->modern_Button3->Text = L"3";
			this->modern_Button3->TextColor = System::Drawing::Color::White;
			this->modern_Button3->UseVisualStyleBackColor = false;
			// 
			// modern_Button4
			// 
			this->modern_Button4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button4->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button4->BorderColor = System::Drawing::Color::White;
			this->modern_Button4->BorderRadius = 10;
			this->modern_Button4->BorderSize = 1;
			this->modern_Button4->FlatAppearance->BorderSize = 0;
			this->modern_Button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button4->ForeColor = System::Drawing::Color::White;
			this->modern_Button4->Location = System::Drawing::Point(165, 252);
			this->modern_Button4->Name = L"modern_Button4";
			this->modern_Button4->Size = System::Drawing::Size(70, 70);
			this->modern_Button4->TabIndex = 17;
			this->modern_Button4->Text = L"2";
			this->modern_Button4->TextColor = System::Drawing::Color::White;
			this->modern_Button4->UseVisualStyleBackColor = false;
			// 
			// modern_Button5
			// 
			this->modern_Button5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button5->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button5->BorderColor = System::Drawing::Color::White;
			this->modern_Button5->BorderRadius = 10;
			this->modern_Button5->BorderSize = 1;
			this->modern_Button5->FlatAppearance->BorderSize = 0;
			this->modern_Button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button5->ForeColor = System::Drawing::Color::White;
			this->modern_Button5->Location = System::Drawing::Point(88, 252);
			this->modern_Button5->Name = L"modern_Button5";
			this->modern_Button5->Size = System::Drawing::Size(70, 70);
			this->modern_Button5->TabIndex = 16;
			this->modern_Button5->Text = L"1";
			this->modern_Button5->TextColor = System::Drawing::Color::White;
			this->modern_Button5->UseVisualStyleBackColor = false;
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
			// 
			// modern_Button7
			// 
			this->modern_Button7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button7->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button7->BorderColor = System::Drawing::Color::White;
			this->modern_Button7->BorderRadius = 10;
			this->modern_Button7->BorderSize = 1;
			this->modern_Button7->FlatAppearance->BorderSize = 0;
			this->modern_Button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button7->ForeColor = System::Drawing::Color::White;
			this->modern_Button7->Location = System::Drawing::Point(241, 176);
			this->modern_Button7->Name = L"modern_Button7";
			this->modern_Button7->Size = System::Drawing::Size(70, 70);
			this->modern_Button7->TabIndex = 22;
			this->modern_Button7->Text = L"6";
			this->modern_Button7->TextColor = System::Drawing::Color::White;
			this->modern_Button7->UseVisualStyleBackColor = false;
			// 
			// modern_Button8
			// 
			this->modern_Button8->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button8->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button8->BorderColor = System::Drawing::Color::White;
			this->modern_Button8->BorderRadius = 10;
			this->modern_Button8->BorderSize = 1;
			this->modern_Button8->FlatAppearance->BorderSize = 0;
			this->modern_Button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button8->ForeColor = System::Drawing::Color::White;
			this->modern_Button8->Location = System::Drawing::Point(165, 176);
			this->modern_Button8->Name = L"modern_Button8";
			this->modern_Button8->Size = System::Drawing::Size(70, 70);
			this->modern_Button8->TabIndex = 21;
			this->modern_Button8->Text = L"5";
			this->modern_Button8->TextColor = System::Drawing::Color::White;
			this->modern_Button8->UseVisualStyleBackColor = false;
			// 
			// modern_Button9
			// 
			this->modern_Button9->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button9->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button9->BorderColor = System::Drawing::Color::White;
			this->modern_Button9->BorderRadius = 10;
			this->modern_Button9->BorderSize = 1;
			this->modern_Button9->FlatAppearance->BorderSize = 0;
			this->modern_Button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button9->ForeColor = System::Drawing::Color::White;
			this->modern_Button9->Location = System::Drawing::Point(88, 176);
			this->modern_Button9->Name = L"modern_Button9";
			this->modern_Button9->Size = System::Drawing::Size(70, 70);
			this->modern_Button9->TabIndex = 20;
			this->modern_Button9->Text = L"4";
			this->modern_Button9->TextColor = System::Drawing::Color::White;
			this->modern_Button9->UseVisualStyleBackColor = false;
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
			// 
			// modern_Button11
			// 
			this->modern_Button11->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button11->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button11->BorderColor = System::Drawing::Color::White;
			this->modern_Button11->BorderRadius = 10;
			this->modern_Button11->BorderSize = 1;
			this->modern_Button11->FlatAppearance->BorderSize = 0;
			this->modern_Button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button11->ForeColor = System::Drawing::Color::White;
			this->modern_Button11->Location = System::Drawing::Point(241, 100);
			this->modern_Button11->Name = L"modern_Button11";
			this->modern_Button11->Size = System::Drawing::Size(70, 70);
			this->modern_Button11->TabIndex = 26;
			this->modern_Button11->Text = L"9";
			this->modern_Button11->TextColor = System::Drawing::Color::White;
			this->modern_Button11->UseVisualStyleBackColor = false;
			// 
			// modern_Button12
			// 
			this->modern_Button12->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button12->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button12->BorderColor = System::Drawing::Color::White;
			this->modern_Button12->BorderRadius = 10;
			this->modern_Button12->BorderSize = 1;
			this->modern_Button12->FlatAppearance->BorderSize = 0;
			this->modern_Button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button12->ForeColor = System::Drawing::Color::White;
			this->modern_Button12->Location = System::Drawing::Point(165, 100);
			this->modern_Button12->Name = L"modern_Button12";
			this->modern_Button12->Size = System::Drawing::Size(70, 70);
			this->modern_Button12->TabIndex = 25;
			this->modern_Button12->Text = L"8";
			this->modern_Button12->TextColor = System::Drawing::Color::White;
			this->modern_Button12->UseVisualStyleBackColor = false;
			// 
			// modern_Button13
			// 
			this->modern_Button13->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button13->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->modern_Button13->BorderColor = System::Drawing::Color::White;
			this->modern_Button13->BorderRadius = 10;
			this->modern_Button13->BorderSize = 1;
			this->modern_Button13->FlatAppearance->BorderSize = 0;
			this->modern_Button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button13->ForeColor = System::Drawing::Color::White;
			this->modern_Button13->Location = System::Drawing::Point(88, 100);
			this->modern_Button13->Name = L"modern_Button13";
			this->modern_Button13->Size = System::Drawing::Size(70, 70);
			this->modern_Button13->TabIndex = 24;
			this->modern_Button13->Text = L"7";
			this->modern_Button13->TextColor = System::Drawing::Color::White;
			this->modern_Button13->UseVisualStyleBackColor = false;
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
			// 
			// mb_RightS
			// 
			this->mb_RightS->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_RightS->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_RightS->BorderColor = System::Drawing::Color::White;
			this->mb_RightS->BorderRadius = 10;
			this->mb_RightS->BorderSize = 1;
			this->mb_RightS->FlatAppearance->BorderSize = 0;
			this->mb_RightS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_RightS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_RightS->ForeColor = System::Drawing::Color::White;
			this->mb_RightS->Location = System::Drawing::Point(165, 24);
			this->mb_RightS->Name = L"mb_RightS";
			this->mb_RightS->Size = System::Drawing::Size(70, 70);
			this->mb_RightS->TabIndex = 29;
			this->mb_RightS->Text = L")";
			this->mb_RightS->TextColor = System::Drawing::Color::White;
			this->mb_RightS->UseVisualStyleBackColor = false;
			// 
			// mb_LeftS
			// 
			this->mb_LeftS->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_LeftS->BackgroundColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mb_LeftS->BorderColor = System::Drawing::Color::White;
			this->mb_LeftS->BorderRadius = 10;
			this->mb_LeftS->BorderSize = 1;
			this->mb_LeftS->FlatAppearance->BorderSize = 0;
			this->mb_LeftS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_LeftS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_LeftS->ForeColor = System::Drawing::Color::White;
			this->mb_LeftS->Location = System::Drawing::Point(88, 24);
			this->mb_LeftS->Name = L"mb_LeftS";
			this->mb_LeftS->Size = System::Drawing::Size(70, 70);
			this->mb_LeftS->TabIndex = 28;
			this->mb_LeftS->Text = L"(";
			this->mb_LeftS->TextColor = System::Drawing::Color::White;
			this->mb_LeftS->UseVisualStyleBackColor = false;
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
			// 
			// mt_tablo
			// 
			this->mt_tablo->BackColor = System::Drawing::Color::Black;
			this->mt_tablo->BorderColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->mt_tablo->BorderFocusColor = System::Drawing::Color::Gray;
			this->mt_tablo->BorderRadius = 10;
			this->mt_tablo->BorderSize = 2;
			this->mt_tablo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(200)));
			this->mt_tablo->ForeColor = System::Drawing::Color::Silver;
			this->mt_tablo->Location = System::Drawing::Point(12, 13);
			this->mt_tablo->Margin = System::Windows::Forms::Padding(4);
			this->mt_tablo->MultiLine = false;
			this->mt_tablo->Name = L"mt_tablo";
			this->mt_tablo->Padding = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->mt_tablo->PasswordStyle = false;
			this->mt_tablo->PlaceholderColor = System::Drawing::Color::DarkGray;
			this->mt_tablo->PlaceholderText = L"";
			this->mt_tablo->Size = System::Drawing::Size(299, 69);
			this->mt_tablo->TabIndex = 0;
			this->mt_tablo->Texts = L"123";
			this->mt_tablo->UnderLineStyle = false;
			// 
			// pnl_Middle
			// 
			this->pnl_Middle->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_Middle->Controls->Add(this->mb_Percent);
			this->pnl_Middle->Controls->Add(this->mb_0);
			this->pnl_Middle->Controls->Add(this->mb_Divide);
			this->pnl_Middle->Controls->Add(this->mb_Point);
			this->pnl_Middle->Controls->Add(this->mb_C);
			this->pnl_Middle->Controls->Add(this->mb_Equal);
			this->pnl_Middle->Controls->Add(this->mb_RightS);
			this->pnl_Middle->Controls->Add(this->modern_Button5);
			this->pnl_Middle->Controls->Add(this->mb_LeftS);
			this->pnl_Middle->Controls->Add(this->modern_Button4);
			this->pnl_Middle->Controls->Add(this->mb_Increase);
			this->pnl_Middle->Controls->Add(this->modern_Button3);
			this->pnl_Middle->Controls->Add(this->modern_Button11);
			this->pnl_Middle->Controls->Add(this->mb_Plus);
			this->pnl_Middle->Controls->Add(this->modern_Button12);
			this->pnl_Middle->Controls->Add(this->modern_Button9);
			this->pnl_Middle->Controls->Add(this->modern_Button13);
			this->pnl_Middle->Controls->Add(this->modern_Button8);
			this->pnl_Middle->Controls->Add(this->mb_Minus);
			this->pnl_Middle->Controls->Add(this->modern_Button7);
			this->pnl_Middle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_Middle->Location = System::Drawing::Point(0, 100);
			this->pnl_Middle->Name = L"pnl_Middle";
			this->pnl_Middle->Size = System::Drawing::Size(323, 454);
			this->pnl_Middle->TabIndex = 34;
			// 
			// pnl_Bottom
			// 
			this->pnl_Bottom->BackColor = System::Drawing::SystemColors::Control;
			this->pnl_Bottom->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->pnl_Bottom->Location = System::Drawing::Point(0, 523);
			this->pnl_Bottom->Name = L"pnl_Bottom";
			this->pnl_Bottom->Size = System::Drawing::Size(323, 31);
			this->pnl_Bottom->TabIndex = 35;
			// 
			// MainCalcForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(323, 554);
			this->Controls->Add(this->pnl_Bottom);
			this->Controls->Add(this->pnl_Middle);
			this->Controls->Add(this->pnl_TabloUp);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MainCalcForm";
			this->Text = L"MainCalcForm";
			this->pnl_TabloUp->ResumeLayout(false);
			this->pnl_Middle->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
