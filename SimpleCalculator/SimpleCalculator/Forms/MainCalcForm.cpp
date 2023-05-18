#include "MainCalcForm.h"

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