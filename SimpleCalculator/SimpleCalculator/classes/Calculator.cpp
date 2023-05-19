//Copyright (c) Ilya-BISEC.
//MainCalcForm.cpp - description of Calculator.h methods

#include "Calculator.h"

namespace SimpleCalculator {


	void Calculator::base_calculate(double first, String^ operators, double second, 
		double result, OwnControls::Controls::Modern_TextBox^ texbox)
	{
		if (operators == "+")
		{
			result = first + second;
			texbox->Texts = Convert::ToString(result);
		}
		else if (operators == "-")
		{
			result = first - second;
			texbox->Texts = Convert::ToString(result);
		}
		else if (operators == "*")
		{
			result = first * second;
			texbox->Texts = Convert::ToString(result);
		}
		else if (operators == "/")
		{
			result = first / second;
			texbox->Texts = Convert::ToString(result);
		}
		else if (operators == "%")
		{
			int f = Convert::ToInt32(first),
				s = Convert::ToInt32(second);

			result = f % s;
			texbox->Texts = Convert::ToString(result);
		}
	}

	void Calculator::base_plusAndMinus(OwnControls::Controls::Modern_TextBox^ texbox)
	{
		if (texbox->Texts->Contains("-"))
			texbox->Texts = texbox->Texts->Remove(0, 1);
		else
			texbox->Texts = "-" + texbox->Texts;
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