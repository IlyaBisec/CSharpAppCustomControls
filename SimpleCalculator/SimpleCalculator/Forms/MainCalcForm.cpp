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

Void MainCalcForm::mb_Equal_Click(System::Object^ sender, System::EventArgs^ e)
{
	//Calculator calculator;

	//calculator.base_calculate()
}

void MainCalcForm::sendToTablo(OwnControls::Controls::Modern_Button^ msgIn, OwnControls::Controls::Modern_TextBox^ msgTo)
{
	msgTo->Texts = msgIn->Text;
}

void MainCalcForm::sendToTablo(char msgIn, OwnControls::Controls::Modern_TextBox^ msgTo)
{
	msgTo->Texts = Convert::ToString(msgIn);
}


#pragma region GUI buttons 

Void MainCalcForm::mb_0_Click(System::Object^ sender, System::EventArgs^ e) {

	mt_tablo->Texts = "0";
	//sendToTablo('0', mt_tablo);
}



Void MainCalcForm::mb_Plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	mt_tablo->Texts = "+";
	//sendToTablo('+', mt_tablo);
}

Void MainCalcForm::mb_C_Click(System::Object^ sender, System::EventArgs^ e) {
	mt_tablo->Texts = "";
}

#pragma endregion

#pragma region Forms

Void MainCalcForm::MainCalcForm_Load(System::Object^ sender, System::EventArgs^ e) {

	mt_tablo->Texts = "";
}
#pragma endregion

