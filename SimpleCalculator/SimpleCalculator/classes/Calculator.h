//Copyright (c) Ilya-BISEC.
//Calculator - implementation of the basic functionality of the calculator

#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace SimpleCalculator {

	
	public class Calculator
	{
	public:
		
		//performs basic functions,such as: divide, increase,
		//plus, minus, percent and etc, return result in textbox output
		void base_calculate(double first, String^ operators, double second,
			double result, OwnControls::Controls::Modern_TextBox^ texbox);

		//function plus and minus, return result in textbox output
		void base_plusAndMinus(OwnControls::Controls::Modern_TextBox^ texbox);

		//send message to user in panel of output
		void sendMessageToUser(char msg[], TextBox^ tetxbox);
		void sendMessageToUser(String^ msg, TextBox^ tetxbox);

	};

}

