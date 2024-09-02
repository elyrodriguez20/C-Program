//Arithmetic operators 
//Assignment operator =
//Assigment statement     L.H.S  =  R.H.S;    LHS is always a variable
//RHS could be a constant/ literal, variable, expression
//age(variable) = 45; age(variable) = X; age(variable) = X+45;
//formatting
//reading inout from keyboard/user
#include <iostream>
#include <iomanip>
using namespace std;

//variable are written in lowercase and constants as uppercase
const float ROI = 3.5;//constant declaration and initialization

int man()
{
  float amount= 0.0, interest=0.0, endOfYrBal=0.0;
  cout << "Please enter the amount of CD: "; //prompt the user
  // >> is called stream EXTRACTION operator
  cin >> amount; //get tge value from user 
  // 3+5, 3+x, x+y
  //+, -, *, /, %
  //2+(3+5-8/4) --> operator procedence (PMD) (AS) left to right!
  interest= amount *(ROI/100); //arithmetic expression
  endOfYrBal = amount + interest;

  cout << fixed << showpoint << setprecision(2); //formatting for currency
  cout << "At the end of the year the new balance is : " << endOfYrBal << endl << endl;
  return 0;
}
