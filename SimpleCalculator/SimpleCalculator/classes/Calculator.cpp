#include "Calculator.h"

namespace SimpleCalculator {

	void Calculator::base_calculate(double x, char operand, double y, TextBox^ textbox)
	{
		int x1 = Convert::ToInt32(x);
		int y2 = Convert::ToInt32(y);

		switch (operand)
		{
		case '+':
			textbox->Text = Convert::ToString(x + y);
		case '-':
			textbox->Text = Convert::ToString(x - y);
		case '*':
			textbox->Text = Convert::ToString(x * y);
		case '/':
			textbox->Text = Convert::ToString(x / y);
		case '%':
			textbox->Text = Convert::ToString(x1 % y2);
		default:
			textbox->Text = Convert::ToString(0.00);
			x1 = 0; y2 = 0;
			break;
		}


	}

	void Calculator::sendMessageToUser(char msg[], TextBox^ textbox)
	{
		textbox->Text = Convert::ToString(msg);
	}

	void Calculator::sendMessageToUser(String^ msg, TextBox^ textbox)
	{
		textbox->Text = msg;
	}
}