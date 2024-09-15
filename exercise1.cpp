//datatypes 
//arithmetic operators
//formatting
#include <iostream>
using namespace std;
const int  SECRET = 11;// constant declaration and initialization
const double RATE = 12.50;// constant declaration and initialization

int main()
{
int num1, num2, newNum; //declaration statement
string name;
double hoursWorked, Variablewages;
  cout << "Please enter two integers: ";//prompt
  cin >> num1 >> num2;//input statement
  cout << endl;//output statement
  cout << "The value of num1 = " << num1<< " and the value of num2 = " << num2 << endl;//output statement
  newNum = num1 * 2 + num2;
  cout << "The value of newNum = " << newNum << endl;//output statement
  newNum = newNum + SECRET;
  cout << "The value of newNum + SECRET = " << newNum << endl;//output statement
  cout << "Please enter a last name: ";
  cin >> name ;//input statement
  cout << "Please enter a decimal number between 0 and 70: ";//output statement
  cin >> hoursWorked;//input statement
  Variablewages= RATE* hoursWorked;//assignment statement
  cout << "Name: " << name << endl;//output statement
  cout << "Pay Rate: $" << RATE << endl;
  cout << "Hours Worked: " << hoursWorked << endl;
  cout << "Salary: $" << Variablewages << endl;
  return 0;
}