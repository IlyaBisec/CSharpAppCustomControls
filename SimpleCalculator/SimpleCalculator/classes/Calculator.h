//Copyright (c) Ilya-BISEC.
//Calculator - реализация основного функционала калькулятор

#pragma once

using namespace System;
using namespace System::Windows::Forms;

namespace SimpleCalculator {

	
	public class Calculator
	{
	public:
		
		//performs basic functions, return result in double
		double base_calculate(double x, char operand, double y, double result);
		
		//performs basic functions, return result in textbox
		void base_calculate(double x, char operand, double y, TextBox^ texbox);

		//double base_calculate(double x, char operand, double y, double result, String msg);
		//double base_calculate(double x, char operand, double y, double result, char msg[]);
		//double base_calculate(double x, char operand, double y, double result, TextBox^ texbox);

		//find x, y and between them oper for calculating 
		void get_StringForDevide(TextBox^ texbox);

		void sendMessageToUser(char msg[], TextBox^ tetxbox);
		void sendMessageToUser(String^ msg, TextBox^ tetxbox);

		Calculator();
		~Calculator();




	};

}

