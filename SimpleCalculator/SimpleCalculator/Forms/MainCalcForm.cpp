//Copyright (c) Ilya-BISEC.
//MainCalcForm.cpp - description of MainCalcForm.h  methods

#include "MainCalcForm.h"
#include "..\classes\Calculator.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SimpleCalculator;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SimpleCalculator::MainCalcForm mainform;
	Application::Run(% mainform);
}



#pragma region GUI buttons click 

Void MainCalcForm::mb_Equal_Click(System::Object^ sender, System::EventArgs^ e){

	secondDigit = Double::Parse(mt_tablo->Texts);

	Calculator calculator;

	calculator.base_calculate(firstDigit, operators, secondDigit, result, mt_tablo);

}

Void MainCalcForm::mb_0_Click(System::Object^ sender, System::EventArgs^ e) {

}

Void MainCalcForm::mb_Plus_Click(System::Object^ sender, System::EventArgs^ e){

}

Void MainCalcForm::mb_C_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//clear 1 element to right
	if (mt_tablo->Texts->Length > 0)
		mt_tablo->Texts = mt_tablo->Texts->Remove(mt_tablo->Texts->Length - 1, 1);
}

Void MainCalcForm::mb_CA_Click(System::Object^ sender, System::EventArgs^ e)
{
	//clear everything, but zero remains, 
	//since the string cannot be empty -> will result in an error
	mt_tablo->Texts = "0";
}
	
Void MainCalcForm::mb_plusAndMinus_Click(System::Object^ sender, System::EventArgs^ e)
{
	Calculator calculator;
	calculator.base_plusAndMinus(mt_tablo);
}

Void MainCalcForm::mb_Percent_Click(System::Object^ sender, System::EventArgs^ e){}

Void MainCalcForm::mb_Point_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!mt_tablo->Texts->Contains(","))
		mt_tablo->Texts += mt_tablo->Texts + ",";

}

#pragma endregion

#pragma region buttons events

Void MainCalcForm::EnterNumber(System::Object^ sender, System::EventArgs^ e)
{
	
	OwnControls::Controls::Modern_Button^ mb_Numbers = safe_cast<OwnControls::Controls::Modern_Button^>(sender);

	if (mt_tablo->Texts == "0" || mt_tablo->Texts == "")
		mt_tablo->Texts = mb_Numbers->Text;
	else mt_tablo->Texts += mb_Numbers->Text;

}

Void MainCalcForm::EnterOperator(System::Object^ sender, System::EventArgs^ e)
{
	OwnControls::Controls::Modern_Button^ mb_NumbersOper = safe_cast<OwnControls::Controls::Modern_Button^>(sender);
	
	firstDigit = Double::Parse(mt_tablo->Texts);

	mt_tablo->Texts = "";
	operators = mb_NumbersOper->Text;

	

}

#pragma endregion

#pragma region button controls

Void MainCalcForm::mb_Hide_Click(System::Object^ sender, System::EventArgs^ e)
{
	WindowState = FormWindowState::Minimized;
}

Void MainCalcForm::mb_close_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

#pragma endregion

#pragma region Forms

Void MainCalcForm::MainCalcForm_Load(System::Object^ sender, System::EventArgs^ e) {

	mt_tablo->Texts = "";
}
#pragma endregion

