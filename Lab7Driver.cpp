// Lab_05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Lab7MyStack.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;
using std::cin;


int main()
{
	cout << endl;
	cout << "Please input a string : " << endl;

	string user_string;
	cin >> user_string;

	cout << endl;
	cout << "Here is your string : " << endl << endl;

	cout << user_string << endl << endl;


	

	stringstringReversal1(user_string);
	stringstringReversal2(user_string);
	stringstringReversal3(user_string);
	stringstringReversal4(user_string);
	cout << endl;


    return 0;
}

