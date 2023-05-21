#pragma once

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ OptionsCalc
	/// </summary>
	public ref class OptionsCalc : public System::Windows::Forms::Form
	{
	public:
		OptionsCalc(void)
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
		~OptionsCalc()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Panel^ pnl_allControls;
	private: System::Windows::Forms::Label^ lb_borderColorWin;




	private: OwnControls::Controls::Modern_Button^ mb_allToDefault;
	private: OwnControls::Controls::Modern_Button^ mb_borderColorWin;


	private: System::Windows::Forms::TrackBar^ trackB_sizeFontOnDisplay;

	private: System::Windows::Forms::Label^ lb_sizeFontOnDisplay;
	private: System::Windows::Forms::TrackBar^ trackB_sizeFontOnBut;


	private: System::Windows::Forms::Label^ lb_sizeFontOnBut;

	private: System::Windows::Forms::TrackBar^ trackB_sizeFontOnWin;

	private: System::Windows::Forms::Label^ lb_sizeFontOnWin;
	private: OwnControls::Controls::Modern_ToggleButton^ mdToggle_EnableDragAndDrop;

	private: System::Windows::Forms::Label^ lb_EnableDragAndDrop;


	private: System::Windows::Forms::TrackBar^ trackB_borderSizeOfDisplay;

	private: System::Windows::Forms::Label^ lb_borderSizeOfDisplay;
	private: System::Windows::Forms::TrackBar^ trackB_borderSizeOfBut;


	private: System::Windows::Forms::Label^ lb_borderSizeOfBut;
	private: System::Windows::Forms::TrackBar^ trackB_borderSizeOfWin;


	private: System::Windows::Forms::Label^ lb_borderSizeOfWin;


	private: OwnControls::Controls::Modern_Button^ modern_Button1;
	private: OwnControls::Controls::Modern_Button^ mb_borderColorDisplay;

	private: System::Windows::Forms::Label^ lb_borderColorDisplay;
	private: OwnControls::Controls::Modern_Button^ mb_borderColorBut;


	private: System::Windows::Forms::Label^ lb_borderColorBut;
	private: OwnControls::Controls::Modern_Button^ mb_fontColorInDisplay;



	private: System::Windows::Forms::Label^ lb_fontColorInDisplay;
	private: OwnControls::Controls::Modern_Button^ mb_fontColorOnBut;


	private: System::Windows::Forms::Label^ lb_fontColorOnBut;
	private: OwnControls::Controls::Modern_Button^ mb_fontColorInWin;


	private: System::Windows::Forms::Label^ lb_fontColorInWin;
	private: OwnControls::Controls::Modern_Button^ mb_ColorDisplay;



	private: System::Windows::Forms::Label^ lb_ColorDisplay;
	private: OwnControls::Controls::Modern_Button^ mb_ColorBut;


	private: System::Windows::Forms::Label^ lb_ColorBut;
	private: OwnControls::Controls::Modern_Button^ mb_ColorWin;


	private: System::Windows::Forms::Label^ lb_ColorWin;




	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
private: OwnControls::Controls::Modern_TextBox^ modern_TextBox1;
private: System::Windows::Forms::TrackBar^ trackB_borderRadiusOfDisplay;
private: System::Windows::Forms::Label^ lb_borderRadiusOfDisplay;
private: System::Windows::Forms::TrackBar^ trackB_borderRadiusOfBut;
private: System::Windows::Forms::Label^ lb_borderRadiusOfBut;
private: System::Windows::Forms::TrackBar^ trackB_borderRadiusOfWin;
private: System::Windows::Forms::Label^ lb_borderRadiusOfWin;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: OwnControls::Controls::Modern_Button^ modern_Button2;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::ComboBox^ comboBox2;
private: OwnControls::Controls::Modern_Button^ modern_Button3;
private: System::Windows::Forms::Label^ label2;
private: OwnControls::Controls::Modern_TextBox^ modern_TextBox2;

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
			this->pnl_allControls = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->modern_Button3 = (gcnew OwnControls::Controls::Modern_Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->modern_TextBox2 = (gcnew OwnControls::Controls::Modern_TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->modern_Button2 = (gcnew OwnControls::Controls::Modern_Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->trackB_borderRadiusOfDisplay = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderRadiusOfDisplay = (gcnew System::Windows::Forms::Label());
			this->trackB_borderRadiusOfBut = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderRadiusOfBut = (gcnew System::Windows::Forms::Label());
			this->trackB_borderRadiusOfWin = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderRadiusOfWin = (gcnew System::Windows::Forms::Label());
			this->modern_TextBox1 = (gcnew OwnControls::Controls::Modern_TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->mb_ColorDisplay = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_ColorDisplay = (gcnew System::Windows::Forms::Label());
			this->mb_ColorBut = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_ColorBut = (gcnew System::Windows::Forms::Label());
			this->mb_ColorWin = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_ColorWin = (gcnew System::Windows::Forms::Label());
			this->mb_fontColorInDisplay = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_fontColorInDisplay = (gcnew System::Windows::Forms::Label());
			this->mb_fontColorOnBut = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_fontColorOnBut = (gcnew System::Windows::Forms::Label());
			this->mb_fontColorInWin = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_fontColorInWin = (gcnew System::Windows::Forms::Label());
			this->mb_borderColorDisplay = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_borderColorDisplay = (gcnew System::Windows::Forms::Label());
			this->mb_borderColorBut = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_borderColorBut = (gcnew System::Windows::Forms::Label());
			this->modern_Button1 = (gcnew OwnControls::Controls::Modern_Button());
			this->trackB_borderSizeOfDisplay = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderSizeOfDisplay = (gcnew System::Windows::Forms::Label());
			this->trackB_borderSizeOfBut = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderSizeOfBut = (gcnew System::Windows::Forms::Label());
			this->trackB_borderSizeOfWin = (gcnew System::Windows::Forms::TrackBar());
			this->lb_borderSizeOfWin = (gcnew System::Windows::Forms::Label());
			this->trackB_sizeFontOnDisplay = (gcnew System::Windows::Forms::TrackBar());
			this->lb_sizeFontOnDisplay = (gcnew System::Windows::Forms::Label());
			this->trackB_sizeFontOnBut = (gcnew System::Windows::Forms::TrackBar());
			this->lb_sizeFontOnBut = (gcnew System::Windows::Forms::Label());
			this->trackB_sizeFontOnWin = (gcnew System::Windows::Forms::TrackBar());
			this->lb_sizeFontOnWin = (gcnew System::Windows::Forms::Label());
			this->mdToggle_EnableDragAndDrop = (gcnew OwnControls::Controls::Modern_ToggleButton());
			this->lb_EnableDragAndDrop = (gcnew System::Windows::Forms::Label());
			this->mb_allToDefault = (gcnew OwnControls::Controls::Modern_Button());
			this->mb_borderColorWin = (gcnew OwnControls::Controls::Modern_Button());
			this->lb_borderColorWin = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->pnl_allControls->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfDisplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfBut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfDisplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfBut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfWin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnDisplay))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnBut))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnWin))->BeginInit();
			this->SuspendLayout();
			// 
			// pnl_allControls
			// 
			this->pnl_allControls->Controls->Add(this->comboBox2);
			this->pnl_allControls->Controls->Add(this->modern_Button3);
			this->pnl_allControls->Controls->Add(this->label2);
			this->pnl_allControls->Controls->Add(this->modern_TextBox2);
			this->pnl_allControls->Controls->Add(this->comboBox1);
			this->pnl_allControls->Controls->Add(this->modern_Button2);
			this->pnl_allControls->Controls->Add(this->label1);
			this->pnl_allControls->Controls->Add(this->trackB_borderRadiusOfDisplay);
			this->pnl_allControls->Controls->Add(this->lb_borderRadiusOfDisplay);
			this->pnl_allControls->Controls->Add(this->trackB_borderRadiusOfBut);
			this->pnl_allControls->Controls->Add(this->lb_borderRadiusOfBut);
			this->pnl_allControls->Controls->Add(this->trackB_borderRadiusOfWin);
			this->pnl_allControls->Controls->Add(this->lb_borderRadiusOfWin);
			this->pnl_allControls->Controls->Add(this->modern_TextBox1);
			this->pnl_allControls->Controls->Add(this->radioButton3);
			this->pnl_allControls->Controls->Add(this->radioButton2);
			this->pnl_allControls->Controls->Add(this->mb_ColorDisplay);
			this->pnl_allControls->Controls->Add(this->lb_ColorDisplay);
			this->pnl_allControls->Controls->Add(this->mb_ColorBut);
			this->pnl_allControls->Controls->Add(this->lb_ColorBut);
			this->pnl_allControls->Controls->Add(this->mb_ColorWin);
			this->pnl_allControls->Controls->Add(this->lb_ColorWin);
			this->pnl_allControls->Controls->Add(this->mb_fontColorInDisplay);
			this->pnl_allControls->Controls->Add(this->lb_fontColorInDisplay);
			this->pnl_allControls->Controls->Add(this->mb_fontColorOnBut);
			this->pnl_allControls->Controls->Add(this->lb_fontColorOnBut);
			this->pnl_allControls->Controls->Add(this->mb_fontColorInWin);
			this->pnl_allControls->Controls->Add(this->lb_fontColorInWin);
			this->pnl_allControls->Controls->Add(this->mb_borderColorDisplay);
			this->pnl_allControls->Controls->Add(this->lb_borderColorDisplay);
			this->pnl_allControls->Controls->Add(this->mb_borderColorBut);
			this->pnl_allControls->Controls->Add(this->lb_borderColorBut);
			this->pnl_allControls->Controls->Add(this->modern_Button1);
			this->pnl_allControls->Controls->Add(this->trackB_borderSizeOfDisplay);
			this->pnl_allControls->Controls->Add(this->lb_borderSizeOfDisplay);
			this->pnl_allControls->Controls->Add(this->trackB_borderSizeOfBut);
			this->pnl_allControls->Controls->Add(this->lb_borderSizeOfBut);
			this->pnl_allControls->Controls->Add(this->trackB_borderSizeOfWin);
			this->pnl_allControls->Controls->Add(this->lb_borderSizeOfWin);
			this->pnl_allControls->Controls->Add(this->trackB_sizeFontOnDisplay);
			this->pnl_allControls->Controls->Add(this->lb_sizeFontOnDisplay);
			this->pnl_allControls->Controls->Add(this->trackB_sizeFontOnBut);
			this->pnl_allControls->Controls->Add(this->lb_sizeFontOnBut);
			this->pnl_allControls->Controls->Add(this->trackB_sizeFontOnWin);
			this->pnl_allControls->Controls->Add(this->lb_sizeFontOnWin);
			this->pnl_allControls->Controls->Add(this->mdToggle_EnableDragAndDrop);
			this->pnl_allControls->Controls->Add(this->lb_EnableDragAndDrop);
			this->pnl_allControls->Controls->Add(this->mb_allToDefault);
			this->pnl_allControls->Controls->Add(this->mb_borderColorWin);
			this->pnl_allControls->Controls->Add(this->lb_borderColorWin);
			this->pnl_allControls->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_allControls->Location = System::Drawing::Point(0, 0);
			this->pnl_allControls->Name = L"pnl_allControls";
			this->pnl_allControls->Size = System::Drawing::Size(685, 729);
			this->pnl_allControls->TabIndex = 1;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L".nog" });
			this->comboBox2->Location = System::Drawing::Point(293, 683);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(66, 21);
			this->comboBox2->TabIndex = 84;
			// 
			// modern_Button3
			// 
			this->modern_Button3->BackColor = System::Drawing::Color::Transparent;
			this->modern_Button3->BackgroundColor = System::Drawing::Color::Transparent;
			this->modern_Button3->BorderColor = System::Drawing::SystemColors::WindowText;
			this->modern_Button3->BorderRadius = 5;
			this->modern_Button3->BorderSize = 1;
			this->modern_Button3->FlatAppearance->BorderSize = 0;
			this->modern_Button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button3->ForeColor = System::Drawing::Color::Black;
			this->modern_Button3->Location = System::Drawing::Point(248, 681);
			this->modern_Button3->Name = L"modern_Button3";
			this->modern_Button3->Size = System::Drawing::Size(33, 30);
			this->modern_Button3->TabIndex = 83;
			this->modern_Button3->Text = L"...";
			this->modern_Button3->TextColor = System::Drawing::Color::Black;
			this->modern_Button3->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(24, 649);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 20);
			this->label2->TabIndex = 82;
			this->label2->Text = L"Log file location";
			// 
			// modern_TextBox2
			// 
			this->modern_TextBox2->BackColor = System::Drawing::SystemColors::Window;
			this->modern_TextBox2->BorderColor = System::Drawing::Color::Black;
			this->modern_TextBox2->BorderFocusColor = System::Drawing::Color::HotPink;
			this->modern_TextBox2->BorderRadius = 5;
			this->modern_TextBox2->BorderSize = 1;
			this->modern_TextBox2->ForeColor = System::Drawing::Color::DimGray;
			this->modern_TextBox2->Location = System::Drawing::Point(28, 681);
			this->modern_TextBox2->Margin = System::Windows::Forms::Padding(4);
			this->modern_TextBox2->MultiLine = false;
			this->modern_TextBox2->Name = L"modern_TextBox2";
			this->modern_TextBox2->Padding = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->modern_TextBox2->PasswordStyle = false;
			this->modern_TextBox2->PlaceholderColor = System::Drawing::Color::DarkGray;
			this->modern_TextBox2->PlaceholderText = L"";
			this->modern_TextBox2->Size = System::Drawing::Size(213, 28);
			this->modern_TextBox2->TabIndex = 81;
			this->modern_TextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->modern_TextBox2->Texts = L"";
			this->modern_TextBox2->UnderLineStyle = false;
			this->modern_TextBox2->WorldWrap = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L".byte", L".digit", L".json", L".xml" });
			this->comboBox1->Location = System::Drawing::Point(293, 612);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(66, 21);
			this->comboBox1->TabIndex = 80;
			// 
			// modern_Button2
			// 
			this->modern_Button2->BackColor = System::Drawing::Color::Transparent;
			this->modern_Button2->BackgroundColor = System::Drawing::Color::Transparent;
			this->modern_Button2->BorderColor = System::Drawing::SystemColors::WindowText;
			this->modern_Button2->BorderRadius = 5;
			this->modern_Button2->BorderSize = 1;
			this->modern_Button2->FlatAppearance->BorderSize = 0;
			this->modern_Button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button2->ForeColor = System::Drawing::Color::Black;
			this->modern_Button2->Location = System::Drawing::Point(248, 610);
			this->modern_Button2->Name = L"modern_Button2";
			this->modern_Button2->Size = System::Drawing::Size(33, 30);
			this->modern_Button2->TabIndex = 79;
			this->modern_Button2->Text = L"...";
			this->modern_Button2->TextColor = System::Drawing::Color::Black;
			this->modern_Button2->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(24, 578);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 20);
			this->label1->TabIndex = 78;
			this->label1->Text = L"Save options config  location";
			// 
			// trackB_borderRadiusOfDisplay
			// 
			this->trackB_borderRadiusOfDisplay->Location = System::Drawing::Point(460, 161);
			this->trackB_borderRadiusOfDisplay->Name = L"trackB_borderRadiusOfDisplay";
			this->trackB_borderRadiusOfDisplay->Size = System::Drawing::Size(175, 45);
			this->trackB_borderRadiusOfDisplay->TabIndex = 77;
			// 
			// lb_borderRadiusOfDisplay
			// 
			this->lb_borderRadiusOfDisplay->AutoSize = true;
			this->lb_borderRadiusOfDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_borderRadiusOfDisplay->Location = System::Drawing::Point(460, 138);
			this->lb_borderRadiusOfDisplay->Name = L"lb_borderRadiusOfDisplay";
			this->lb_borderRadiusOfDisplay->Size = System::Drawing::Size(174, 20);
			this->lb_borderRadiusOfDisplay->TabIndex = 76;
			this->lb_borderRadiusOfDisplay->Text = L"Border radius of display";
			// 
			// trackB_borderRadiusOfBut
			// 
			this->trackB_borderRadiusOfBut->Location = System::Drawing::Point(460, 96);
			this->trackB_borderRadiusOfBut->Name = L"trackB_borderRadiusOfBut";
			this->trackB_borderRadiusOfBut->Size = System::Drawing::Size(175, 45);
			this->trackB_borderRadiusOfBut->TabIndex = 75;
			// 
			// lb_borderRadiusOfBut
			// 
			this->lb_borderRadiusOfBut->AutoSize = true;
			this->lb_borderRadiusOfBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_borderRadiusOfBut->Location = System::Drawing::Point(456, 73);
			this->lb_borderRadiusOfBut->Name = L"lb_borderRadiusOfBut";
			this->lb_borderRadiusOfBut->Size = System::Drawing::Size(172, 20);
			this->lb_borderRadiusOfBut->TabIndex = 74;
			this->lb_borderRadiusOfBut->Text = L"Border radius of button";
			// 
			// trackB_borderRadiusOfWin
			// 
			this->trackB_borderRadiusOfWin->Location = System::Drawing::Point(460, 32);
			this->trackB_borderRadiusOfWin->Name = L"trackB_borderRadiusOfWin";
			this->trackB_borderRadiusOfWin->Size = System::Drawing::Size(175, 45);
			this->trackB_borderRadiusOfWin->TabIndex = 73;
			// 
			// lb_borderRadiusOfWin
			// 
			this->lb_borderRadiusOfWin->AutoSize = true;
			this->lb_borderRadiusOfWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_borderRadiusOfWin->Location = System::Drawing::Point(456, 9);
			this->lb_borderRadiusOfWin->Name = L"lb_borderRadiusOfWin";
			this->lb_borderRadiusOfWin->Size = System::Drawing::Size(178, 20);
			this->lb_borderRadiusOfWin->TabIndex = 72;
			this->lb_borderRadiusOfWin->Text = L"Border radius of window";
			// 
			// modern_TextBox1
			// 
			this->modern_TextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->modern_TextBox1->BorderColor = System::Drawing::Color::Black;
			this->modern_TextBox1->BorderFocusColor = System::Drawing::Color::HotPink;
			this->modern_TextBox1->BorderRadius = 5;
			this->modern_TextBox1->BorderSize = 1;
			this->modern_TextBox1->ForeColor = System::Drawing::Color::DimGray;
			this->modern_TextBox1->Location = System::Drawing::Point(28, 610);
			this->modern_TextBox1->Margin = System::Windows::Forms::Padding(4);
			this->modern_TextBox1->MultiLine = false;
			this->modern_TextBox1->Name = L"modern_TextBox1";
			this->modern_TextBox1->Padding = System::Windows::Forms::Padding(10, 7, 10, 7);
			this->modern_TextBox1->PasswordStyle = false;
			this->modern_TextBox1->PlaceholderColor = System::Drawing::Color::DarkGray;
			this->modern_TextBox1->PlaceholderText = L"";
			this->modern_TextBox1->Size = System::Drawing::Size(213, 28);
			this->modern_TextBox1->TabIndex = 71;
			this->modern_TextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->modern_TextBox1->Texts = L"";
			this->modern_TextBox1->UnderLineStyle = false;
			this->modern_TextBox1->WorldWrap = true;
			// 
			// radioButton3
			// 
			this->radioButton3->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton3->AutoSize = true;
			this->radioButton3->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton3->Location = System::Drawing::Point(409, 393);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(8, 8);
			this->radioButton3->TabIndex = 70;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->Appearance = System::Windows::Forms::Appearance::Button;
			this->radioButton2->AutoSize = true;
			this->radioButton2->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->radioButton2->Location = System::Drawing::Point(409, 212);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(8, 8);
			this->radioButton2->TabIndex = 69;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// mb_ColorDisplay
			// 
			this->mb_ColorDisplay->BackColor = System::Drawing::Color::Transparent;
			this->mb_ColorDisplay->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_ColorDisplay->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_ColorDisplay->BorderRadius = 5;
			this->mb_ColorDisplay->BorderSize = 1;
			this->mb_ColorDisplay->FlatAppearance->BorderSize = 0;
			this->mb_ColorDisplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_ColorDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_ColorDisplay->ForeColor = System::Drawing::Color::Black;
			this->mb_ColorDisplay->Location = System::Drawing::Point(28, 536);
			this->mb_ColorDisplay->Name = L"mb_ColorDisplay";
			this->mb_ColorDisplay->Size = System::Drawing::Size(143, 30);
			this->mb_ColorDisplay->TabIndex = 67;
			this->mb_ColorDisplay->Text = L"click";
			this->mb_ColorDisplay->TextColor = System::Drawing::Color::Black;
			this->mb_ColorDisplay->UseVisualStyleBackColor = false;
			// 
			// lb_ColorDisplay
			// 
			this->lb_ColorDisplay->AutoSize = true;
			this->lb_ColorDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_ColorDisplay->Location = System::Drawing::Point(24, 505);
			this->lb_ColorDisplay->Name = L"lb_ColorDisplay";
			this->lb_ColorDisplay->Size = System::Drawing::Size(98, 20);
			this->lb_ColorDisplay->TabIndex = 66;
			this->lb_ColorDisplay->Text = L"Display color";
			// 
			// mb_ColorBut
			// 
			this->mb_ColorBut->BackColor = System::Drawing::Color::Transparent;
			this->mb_ColorBut->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_ColorBut->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_ColorBut->BorderRadius = 5;
			this->mb_ColorBut->BorderSize = 1;
			this->mb_ColorBut->FlatAppearance->BorderSize = 0;
			this->mb_ColorBut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_ColorBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_ColorBut->ForeColor = System::Drawing::Color::Black;
			this->mb_ColorBut->Location = System::Drawing::Point(224, 461);
			this->mb_ColorBut->Name = L"mb_ColorBut";
			this->mb_ColorBut->Size = System::Drawing::Size(143, 30);
			this->mb_ColorBut->TabIndex = 65;
			this->mb_ColorBut->Text = L"click";
			this->mb_ColorBut->TextColor = System::Drawing::Color::Black;
			this->mb_ColorBut->UseVisualStyleBackColor = false;
			// 
			// lb_ColorBut
			// 
			this->lb_ColorBut->AutoSize = true;
			this->lb_ColorBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_ColorBut->Location = System::Drawing::Point(220, 429);
			this->lb_ColorBut->Name = L"lb_ColorBut";
			this->lb_ColorBut->Size = System::Drawing::Size(95, 20);
			this->lb_ColorBut->TabIndex = 64;
			this->lb_ColorBut->Text = L"Button color";
			// 
			// mb_ColorWin
			// 
			this->mb_ColorWin->BackColor = System::Drawing::Color::Transparent;
			this->mb_ColorWin->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_ColorWin->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_ColorWin->BorderRadius = 5;
			this->mb_ColorWin->BorderSize = 1;
			this->mb_ColorWin->FlatAppearance->BorderSize = 0;
			this->mb_ColorWin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_ColorWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_ColorWin->ForeColor = System::Drawing::Color::Black;
			this->mb_ColorWin->Location = System::Drawing::Point(28, 461);
			this->mb_ColorWin->Name = L"mb_ColorWin";
			this->mb_ColorWin->Size = System::Drawing::Size(143, 30);
			this->mb_ColorWin->TabIndex = 63;
			this->mb_ColorWin->Text = L"click";
			this->mb_ColorWin->TextColor = System::Drawing::Color::Black;
			this->mb_ColorWin->UseVisualStyleBackColor = false;
			// 
			// lb_ColorWin
			// 
			this->lb_ColorWin->AutoSize = true;
			this->lb_ColorWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_ColorWin->Location = System::Drawing::Point(19, 429);
			this->lb_ColorWin->Name = L"lb_ColorWin";
			this->lb_ColorWin->Size = System::Drawing::Size(103, 20);
			this->lb_ColorWin->TabIndex = 62;
			this->lb_ColorWin->Text = L"Window color";
			// 
			// mb_fontColorInDisplay
			// 
			this->mb_fontColorInDisplay->BackColor = System::Drawing::Color::Transparent;
			this->mb_fontColorInDisplay->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_fontColorInDisplay->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_fontColorInDisplay->BorderRadius = 5;
			this->mb_fontColorInDisplay->BorderSize = 1;
			this->mb_fontColorInDisplay->FlatAppearance->BorderSize = 0;
			this->mb_fontColorInDisplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_fontColorInDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mb_fontColorInDisplay->ForeColor = System::Drawing::Color::Black;
			this->mb_fontColorInDisplay->Location = System::Drawing::Point(28, 387);
			this->mb_fontColorInDisplay->Name = L"mb_fontColorInDisplay";
			this->mb_fontColorInDisplay->Size = System::Drawing::Size(143, 30);
			this->mb_fontColorInDisplay->TabIndex = 61;
			this->mb_fontColorInDisplay->Text = L"click";
			this->mb_fontColorInDisplay->TextColor = System::Drawing::Color::Black;
			this->mb_fontColorInDisplay->UseVisualStyleBackColor = false;
			// 
			// lb_fontColorInDisplay
			// 
			this->lb_fontColorInDisplay->AutoSize = true;
			this->lb_fontColorInDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_fontColorInDisplay->Location = System::Drawing::Point(19, 357);
			this->lb_fontColorInDisplay->Name = L"lb_fontColorInDisplay";
			this->lb_fontColorInDisplay->Size = System::Drawing::Size(175, 20);
			this->lb_fontColorInDisplay->TabIndex = 60;
			this->lb_fontColorInDisplay->Text = L"Font color in the display";
			// 
			// mb_fontColorOnBut
			// 
			this->mb_fontColorOnBut->BackColor = System::Drawing::Color::Transparent;
			this->mb_fontColorOnBut->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_fontColorOnBut->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_fontColorOnBut->BorderRadius = 5;
			this->mb_fontColorOnBut->BorderSize = 1;
			this->mb_fontColorOnBut->FlatAppearance->BorderSize = 0;
			this->mb_fontColorOnBut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_fontColorOnBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_fontColorOnBut->ForeColor = System::Drawing::Color::Black;
			this->mb_fontColorOnBut->Location = System::Drawing::Point(28, 312);
			this->mb_fontColorOnBut->Name = L"mb_fontColorOnBut";
			this->mb_fontColorOnBut->Size = System::Drawing::Size(143, 30);
			this->mb_fontColorOnBut->TabIndex = 59;
			this->mb_fontColorOnBut->Text = L"click";
			this->mb_fontColorOnBut->TextColor = System::Drawing::Color::Black;
			this->mb_fontColorOnBut->UseVisualStyleBackColor = false;
			// 
			// lb_fontColorOnBut
			// 
			this->lb_fontColorOnBut->AutoSize = true;
			this->lb_fontColorOnBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_fontColorOnBut->Location = System::Drawing::Point(14, 282);
			this->lb_fontColorOnBut->Name = L"lb_fontColorOnBut";
			this->lb_fontColorOnBut->Size = System::Drawing::Size(179, 20);
			this->lb_fontColorOnBut->TabIndex = 58;
			this->lb_fontColorOnBut->Text = L"Font color on the button";
			// 
			// mb_fontColorInWin
			// 
			this->mb_fontColorInWin->BackColor = System::Drawing::Color::Transparent;
			this->mb_fontColorInWin->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_fontColorInWin->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_fontColorInWin->BorderRadius = 5;
			this->mb_fontColorInWin->BorderSize = 1;
			this->mb_fontColorInWin->FlatAppearance->BorderSize = 0;
			this->mb_fontColorInWin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_fontColorInWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_fontColorInWin->ForeColor = System::Drawing::Color::Black;
			this->mb_fontColorInWin->Location = System::Drawing::Point(28, 239);
			this->mb_fontColorInWin->Name = L"mb_fontColorInWin";
			this->mb_fontColorInWin->Size = System::Drawing::Size(143, 30);
			this->mb_fontColorInWin->TabIndex = 57;
			this->mb_fontColorInWin->Text = L"click";
			this->mb_fontColorInWin->TextColor = System::Drawing::Color::Black;
			this->mb_fontColorInWin->UseVisualStyleBackColor = false;
			// 
			// lb_fontColorInWin
			// 
			this->lb_fontColorInWin->AutoSize = true;
			this->lb_fontColorInWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_fontColorInWin->Location = System::Drawing::Point(14, 209);
			this->lb_fontColorInWin->Name = L"lb_fontColorInWin";
			this->lb_fontColorInWin->Size = System::Drawing::Size(179, 20);
			this->lb_fontColorInWin->TabIndex = 56;
			this->lb_fontColorInWin->Text = L"Font color in the window";
			// 
			// mb_borderColorDisplay
			// 
			this->mb_borderColorDisplay->BackColor = System::Drawing::Color::Transparent;
			this->mb_borderColorDisplay->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_borderColorDisplay->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_borderColorDisplay->BorderRadius = 5;
			this->mb_borderColorDisplay->BorderSize = 1;
			this->mb_borderColorDisplay->FlatAppearance->BorderSize = 0;
			this->mb_borderColorDisplay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_borderColorDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->mb_borderColorDisplay->ForeColor = System::Drawing::Color::Black;
			this->mb_borderColorDisplay->Location = System::Drawing::Point(225, 387);
			this->mb_borderColorDisplay->Name = L"mb_borderColorDisplay";
			this->mb_borderColorDisplay->Size = System::Drawing::Size(143, 30);
			this->mb_borderColorDisplay->TabIndex = 55;
			this->mb_borderColorDisplay->Text = L"click";
			this->mb_borderColorDisplay->TextColor = System::Drawing::Color::Black;
			this->mb_borderColorDisplay->UseVisualStyleBackColor = false;
			// 
			// lb_borderColorDisplay
			// 
			this->lb_borderColorDisplay->AutoSize = true;
			this->lb_borderColorDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_borderColorDisplay->Location = System::Drawing::Point(221, 357);
			this->lb_borderColorDisplay->Name = L"lb_borderColorDisplay";
			this->lb_borderColorDisplay->Size = System::Drawing::Size(148, 20);
			this->lb_borderColorDisplay->TabIndex = 54;
			this->lb_borderColorDisplay->Text = L"Display border color";
			// 
			// mb_borderColorBut
			// 
			this->mb_borderColorBut->BackColor = System::Drawing::Color::Transparent;
			this->mb_borderColorBut->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_borderColorBut->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_borderColorBut->BorderRadius = 5;
			this->mb_borderColorBut->BorderSize = 1;
			this->mb_borderColorBut->FlatAppearance->BorderSize = 0;
			this->mb_borderColorBut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_borderColorBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_borderColorBut->ForeColor = System::Drawing::Color::Black;
			this->mb_borderColorBut->Location = System::Drawing::Point(224, 312);
			this->mb_borderColorBut->Name = L"mb_borderColorBut";
			this->mb_borderColorBut->Size = System::Drawing::Size(143, 30);
			this->mb_borderColorBut->TabIndex = 53;
			this->mb_borderColorBut->Text = L"click";
			this->mb_borderColorBut->TextColor = System::Drawing::Color::Black;
			this->mb_borderColorBut->UseVisualStyleBackColor = false;
			// 
			// lb_borderColorBut
			// 
			this->lb_borderColorBut->AutoSize = true;
			this->lb_borderColorBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_borderColorBut->Location = System::Drawing::Point(214, 282);
			this->lb_borderColorBut->Name = L"lb_borderColorBut";
			this->lb_borderColorBut->Size = System::Drawing::Size(145, 20);
			this->lb_borderColorBut->TabIndex = 52;
			this->lb_borderColorBut->Text = L"Button border color";
			// 
			// modern_Button1
			// 
			this->modern_Button1->BackColor = System::Drawing::Color::Transparent;
			this->modern_Button1->BackgroundColor = System::Drawing::Color::Transparent;
			this->modern_Button1->BorderColor = System::Drawing::SystemColors::WindowText;
			this->modern_Button1->BorderRadius = 5;
			this->modern_Button1->BorderSize = 1;
			this->modern_Button1->FlatAppearance->BorderSize = 0;
			this->modern_Button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modern_Button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->modern_Button1->ForeColor = System::Drawing::Color::Black;
			this->modern_Button1->Location = System::Drawing::Point(409, 602);
			this->modern_Button1->Name = L"modern_Button1";
			this->modern_Button1->Size = System::Drawing::Size(258, 36);
			this->modern_Button1->TabIndex = 51;
			this->modern_Button1->Text = L"save all changes";
			this->modern_Button1->TextColor = System::Drawing::Color::Black;
			this->modern_Button1->UseVisualStyleBackColor = false;
			// 
			// trackB_borderSizeOfDisplay
			// 
			this->trackB_borderSizeOfDisplay->Location = System::Drawing::Point(239, 161);
			this->trackB_borderSizeOfDisplay->Name = L"trackB_borderSizeOfDisplay";
			this->trackB_borderSizeOfDisplay->Size = System::Drawing::Size(175, 45);
			this->trackB_borderSizeOfDisplay->TabIndex = 50;
			// 
			// lb_borderSizeOfDisplay
			// 
			this->lb_borderSizeOfDisplay->AutoSize = true;
			this->lb_borderSizeOfDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_borderSizeOfDisplay->Location = System::Drawing::Point(239, 138);
			this->lb_borderSizeOfDisplay->Name = L"lb_borderSizeOfDisplay";
			this->lb_borderSizeOfDisplay->Size = System::Drawing::Size(159, 20);
			this->lb_borderSizeOfDisplay->TabIndex = 49;
			this->lb_borderSizeOfDisplay->Text = L"Border size of display";
			// 
			// trackB_borderSizeOfBut
			// 
			this->trackB_borderSizeOfBut->Location = System::Drawing::Point(239, 96);
			this->trackB_borderSizeOfBut->Name = L"trackB_borderSizeOfBut";
			this->trackB_borderSizeOfBut->Size = System::Drawing::Size(175, 45);
			this->trackB_borderSizeOfBut->TabIndex = 48;
			// 
			// lb_borderSizeOfBut
			// 
			this->lb_borderSizeOfBut->AutoSize = true;
			this->lb_borderSizeOfBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_borderSizeOfBut->Location = System::Drawing::Point(235, 73);
			this->lb_borderSizeOfBut->Name = L"lb_borderSizeOfBut";
			this->lb_borderSizeOfBut->Size = System::Drawing::Size(157, 20);
			this->lb_borderSizeOfBut->TabIndex = 47;
			this->lb_borderSizeOfBut->Text = L"Border size of button";
			// 
			// trackB_borderSizeOfWin
			// 
			this->trackB_borderSizeOfWin->Location = System::Drawing::Point(239, 32);
			this->trackB_borderSizeOfWin->Name = L"trackB_borderSizeOfWin";
			this->trackB_borderSizeOfWin->Size = System::Drawing::Size(175, 45);
			this->trackB_borderSizeOfWin->TabIndex = 46;
			// 
			// lb_borderSizeOfWin
			// 
			this->lb_borderSizeOfWin->AutoSize = true;
			this->lb_borderSizeOfWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_borderSizeOfWin->Location = System::Drawing::Point(235, 9);
			this->lb_borderSizeOfWin->Name = L"lb_borderSizeOfWin";
			this->lb_borderSizeOfWin->Size = System::Drawing::Size(163, 20);
			this->lb_borderSizeOfWin->TabIndex = 45;
			this->lb_borderSizeOfWin->Text = L"Border size of window";
			// 
			// trackB_sizeFontOnDisplay
			// 
			this->trackB_sizeFontOnDisplay->Location = System::Drawing::Point(18, 161);
			this->trackB_sizeFontOnDisplay->Name = L"trackB_sizeFontOnDisplay";
			this->trackB_sizeFontOnDisplay->Size = System::Drawing::Size(175, 45);
			this->trackB_sizeFontOnDisplay->TabIndex = 44;
			// 
			// lb_sizeFontOnDisplay
			// 
			this->lb_sizeFontOnDisplay->AutoSize = true;
			this->lb_sizeFontOnDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_sizeFontOnDisplay->Location = System::Drawing::Point(14, 138);
			this->lb_sizeFontOnDisplay->Name = L"lb_sizeFontOnDisplay";
			this->lb_sizeFontOnDisplay->Size = System::Drawing::Size(169, 20);
			this->lb_sizeFontOnDisplay->TabIndex = 43;
			this->lb_sizeFontOnDisplay->Text = L"Font size in the display";
			// 
			// trackB_sizeFontOnBut
			// 
			this->trackB_sizeFontOnBut->Location = System::Drawing::Point(18, 96);
			this->trackB_sizeFontOnBut->Name = L"trackB_sizeFontOnBut";
			this->trackB_sizeFontOnBut->Size = System::Drawing::Size(175, 45);
			this->trackB_sizeFontOnBut->TabIndex = 42;
			// 
			// lb_sizeFontOnBut
			// 
			this->lb_sizeFontOnBut->AutoSize = true;
			this->lb_sizeFontOnBut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_sizeFontOnBut->Location = System::Drawing::Point(14, 73);
			this->lb_sizeFontOnBut->Name = L"lb_sizeFontOnBut";
			this->lb_sizeFontOnBut->Size = System::Drawing::Size(173, 20);
			this->lb_sizeFontOnBut->TabIndex = 41;
			this->lb_sizeFontOnBut->Text = L"Font size on the button";
			// 
			// trackB_sizeFontOnWin
			// 
			this->trackB_sizeFontOnWin->Location = System::Drawing::Point(18, 32);
			this->trackB_sizeFontOnWin->Name = L"trackB_sizeFontOnWin";
			this->trackB_sizeFontOnWin->Size = System::Drawing::Size(175, 45);
			this->trackB_sizeFontOnWin->TabIndex = 40;
			// 
			// lb_sizeFontOnWin
			// 
			this->lb_sizeFontOnWin->AutoSize = true;
			this->lb_sizeFontOnWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_sizeFontOnWin->Location = System::Drawing::Point(14, 9);
			this->lb_sizeFontOnWin->Name = L"lb_sizeFontOnWin";
			this->lb_sizeFontOnWin->Size = System::Drawing::Size(173, 20);
			this->lb_sizeFontOnWin->TabIndex = 39;
			this->lb_sizeFontOnWin->Text = L"Font size in the window";
			// 
			// mdToggle_EnableDragAndDrop
			// 
			this->mdToggle_EnableDragAndDrop->AutoSize = true;
			this->mdToggle_EnableDragAndDrop->Location = System::Drawing::Point(225, 536);
			this->mdToggle_EnableDragAndDrop->MinimumSize = System::Drawing::Size(143, 25);
			this->mdToggle_EnableDragAndDrop->Name = L"mdToggle_EnableDragAndDrop";
			this->mdToggle_EnableDragAndDrop->OffBackColor = System::Drawing::Color::Gray;
			this->mdToggle_EnableDragAndDrop->OffToggleColor = System::Drawing::Color::Gainsboro;
			this->mdToggle_EnableDragAndDrop->OnBackColor = System::Drawing::Color::MediumSlateBlue;
			this->mdToggle_EnableDragAndDrop->OnToggleColor = System::Drawing::Color::WhiteSmoke;
			this->mdToggle_EnableDragAndDrop->Size = System::Drawing::Size(143, 25);
			this->mdToggle_EnableDragAndDrop->TabIndex = 38;
			this->mdToggle_EnableDragAndDrop->UseVisualStyleBackColor = true;
			// 
			// lb_EnableDragAndDrop
			// 
			this->lb_EnableDragAndDrop->AutoSize = true;
			this->lb_EnableDragAndDrop->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lb_EnableDragAndDrop->Location = System::Drawing::Point(221, 505);
			this->lb_EnableDragAndDrop->Name = L"lb_EnableDragAndDrop";
			this->lb_EnableDragAndDrop->Size = System::Drawing::Size(162, 20);
			this->lb_EnableDragAndDrop->TabIndex = 37;
			this->lb_EnableDragAndDrop->Text = L"Enable drag and drop";
			// 
			// mb_allToDefault
			// 
			this->mb_allToDefault->BackColor = System::Drawing::Color::Transparent;
			this->mb_allToDefault->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_allToDefault->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_allToDefault->BorderRadius = 5;
			this->mb_allToDefault->BorderSize = 1;
			this->mb_allToDefault->FlatAppearance->BorderSize = 0;
			this->mb_allToDefault->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_allToDefault->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_allToDefault->ForeColor = System::Drawing::Color::Black;
			this->mb_allToDefault->Location = System::Drawing::Point(409, 666);
			this->mb_allToDefault->Name = L"mb_allToDefault";
			this->mb_allToDefault->Size = System::Drawing::Size(258, 36);
			this->mb_allToDefault->TabIndex = 36;
			this->mb_allToDefault->Text = L"all changes by default";
			this->mb_allToDefault->TextColor = System::Drawing::Color::Black;
			this->mb_allToDefault->UseVisualStyleBackColor = false;
			// 
			// mb_borderColorWin
			// 
			this->mb_borderColorWin->BackColor = System::Drawing::Color::Transparent;
			this->mb_borderColorWin->BackgroundColor = System::Drawing::Color::Transparent;
			this->mb_borderColorWin->BorderColor = System::Drawing::SystemColors::WindowText;
			this->mb_borderColorWin->BorderRadius = 5;
			this->mb_borderColorWin->BorderSize = 1;
			this->mb_borderColorWin->FlatAppearance->BorderSize = 0;
			this->mb_borderColorWin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mb_borderColorWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mb_borderColorWin->ForeColor = System::Drawing::Color::Black;
			this->mb_borderColorWin->Location = System::Drawing::Point(224, 239);
			this->mb_borderColorWin->Name = L"mb_borderColorWin";
			this->mb_borderColorWin->Size = System::Drawing::Size(143, 30);
			this->mb_borderColorWin->TabIndex = 35;
			this->mb_borderColorWin->Text = L"click";
			this->mb_borderColorWin->TextColor = System::Drawing::Color::Black;
			this->mb_borderColorWin->UseVisualStyleBackColor = false;
			// 
			// lb_borderColorWin
			// 
			this->lb_borderColorWin->AutoSize = true;
			this->lb_borderColorWin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lb_borderColorWin->Location = System::Drawing::Point(216, 209);
			this->lb_borderColorWin->Name = L"lb_borderColorWin";
			this->lb_borderColorWin->Size = System::Drawing::Size(153, 20);
			this->lb_borderColorWin->TabIndex = 1;
			this->lb_borderColorWin->Text = L"Window border color";
			// 
			// OptionsCalc
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(685, 729);
			this->Controls->Add(this->pnl_allControls);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"OptionsCalc";
			this->Text = L"Options";
			this->pnl_allControls->ResumeLayout(false);
			this->pnl_allControls->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfDisplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfBut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderRadiusOfWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfDisplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfBut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_borderSizeOfWin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnDisplay))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnBut))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackB_sizeFontOnWin))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
