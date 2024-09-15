#include <iostream>
using namespace std;

int main()
{
  //Constants

  const float Tax_Rate= 0.14f;
  const float Clothes_Cost= 0.10;
  const float Supplies_Cost= 0.01;
  const float Savings_Bonds= 0.25;
  const float Parents_Spending= 0.50;

  //Variables
  double incomeBeforeTax=0, incomeAfterTax=0, HoursWorked, Hourly_Rate, clothes;
  
  cout << "Enter the number of hours worked: ";
  cin >> HoursWorked;
  cout << "Enter your hourly rate: ";
  cin >> Hourly_Rate;

  //calculation outputs
  incomeBeforeTax= HoursWorked * Hourly_Rate; 
  cout << "\nIncome before taxes\n" << incomeBeforeTax;
  incomeAfterTax= incomeBeforeTax -(incomeBeforeTax * Tax_Rate);
  cout << "\nIncome after taxes\n" << incomeAfterTax;
  clothes= incomeAfterTax * Clothes_Cost;
  cout << "\nMoney spent on clothes and other accessories\n" << clothes;
  cout << "\nMoney spent on school supplies\n" << incomeAfterTax * Supplies_Cost;
  cout << "\nMoney spent on savings bonds\n" << incomeAfterTax * Savings_Bonds;
  cout << "\nMoney spent by parents to buy additional savings bonds\n" << incomeAfterTax * Parents_Spending;
  return 0;
}

