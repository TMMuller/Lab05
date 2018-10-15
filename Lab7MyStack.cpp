
#include "stdafx.h"
#include <iostream>
#include <stack>
#include <vector>
#include <deque>
#include <list>
#include "Lab7MyStack.h"

using namespace std;

void stringstringReversal1(string input) {
	stack<char> stack_string; //Initialize instance of class


	cout << endl;
	cout << ": : : : : : : : : S T R I N G  R E V E R S A L  1 : : : : : : : : :" << endl;
	cout << "The size of this string is : " << input.size() << endl;

	for (int i = 0; i < input.size(); i++) {
		stack_string.push(input[i]);//Push variable into the back of the list
	}

	cout << endl;
	cout << "The size of this stack is : " << stack_string.size() << endl << endl;

	

	cout << "Here is your string reversed : " << endl;

	while (!stack_string.empty())//While stack is not empty do loop
	{
		cout << stack_string.top();//Print variable
		stack_string.pop();//Pop variable off
	}
	cout << endl;

}


void stringstringReversal2(string input) {
	cout << endl;
	cout << ": : : : : : : : : S T R I N G  R E V E R S A L  2 : : : : : : : : :" << endl;
	cout << "The size of this string is : " << input.size() << endl;

	vector<char> my_vec;//Initialize instance of class

	for (int i = 0; i < input.size(); i++) {
		my_vec.push_back(input[i]);//Push variable into the back of the list
	}

	cout << endl;
	cout << "The size of this vector is : " << my_vec.size() << endl << endl;

	cout << "Here is your string reversed : " << endl;

	while (!my_vec.empty())//While stack is not empty do loop
	{
		cout << my_vec.back();//Print variable
		my_vec.pop_back();//Pop variable off
	}
	cout << endl;

}


void stringstringReversal3(string input) {
	cout << endl;
	cout << ": : : : : : : : : S T R I N G  R E V E R S A L  3 : : : : : : : : :" << endl;
	cout << "The size of this string is : " << input.size() << endl;

	list<char> my_list;//Initialize instance of class

	for (int i = 0; i < input.size(); i++) {
		my_list.push_back(input[i]); //Push variable into the back of the list
	}

	cout << endl;
	cout << "The size of this vector is : " << my_list.size() << endl << endl;

	cout << "Here is your string reversed : " << endl;

	while (!my_list.empty())//While stack is not empty do loop
	{
		cout << my_list.back(); //Print variable
		my_list.pop_back(); //Pop variable off
	}
	cout << endl;


}


void stringstringReversal4(string input) {
	cout << endl;
	cout << ": : : : : : : : : S T R I N G  R E V E R S A L  4 : : : : : : : : :" << endl;
	cout << "The size of this string is : " << input.size() << endl;

	MYStack my_stack; //Initialize instance of class
	for (int i = 0; i < input.size(); i++) {
		my_stack.push(input[i]); //insert the values of the string
	}

	cout << "Here is your string reversed : " << endl;

	while (!my_stack.isEmpty()) //While stack is not empty do loop
	{
		cout << my_stack.pull(); //get top value and then pops it off
	}
	cout << endl;


}

bool MYStack::isEmpty()
{
	if (my_vec.empty()) //Retrun true if empty
	{
		return true;
	}
	return false;
}

void MYStack::push(char & c)
{
	my_vec.push_back(c); //Push a variable into the stack
}

char MYStack::pull() 
{
	char var;
	var = my_vec.back(); //stores the variable on back
	my_vec.pop_back(); // Remove the back variable
	return var;
}

