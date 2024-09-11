/* Start with Selection statements
First: Simple if statement */
#include <iostream>
using namespace std;

int main()
{
  int score; //declare an integer variable 
  cout << "please enter a vaulable for score: "; //Promt the user
  cin >> score; //get input from keyboard
  cout << "Here is the value you entered for score: " << score << endl; //echoing
  
  //simple if statement #1
  //Testing for perfect score ==> PROBLEM 0 to 100
  /* Keyword if followed by conditon (TEST) of equallity followed by the block of code to be executed when the test returns true. Alwys put the test in parentheses equaility operator is ==. DO NOT CONFUSE WITH = (assigment operator) */
 /* if (score == 100)
  { //block of code. Single pathway we take if condition is true.
  cout << "Score is perfect !!!" << endl;
  cout << "Bravo!" << endl;
  cout << "great !!!" << endl;
  } // curly braces are needed when the if statement has more than one line of code in the block.
*/
  //if then else statement has 2 pathways, one for true and one for false #2
  //check to  see if the score entered is EVEN or ODD --> PROBLEM
 /* if ((score % 2) == 0) // % is modulus operator that returns the remainder 
  {//gives the remainder to be compared to 0
cout<< "\n Score is even!\n\n"; //TRUE body
  }
  else 
  {//what follows else is false body
  cout << "\n Score is odd!\n\n";
  }
*/
  //if then else if statement, multiple pathways #3
  //Print the letter grade for the given score --> PROBLEM 
  if (score >89) //(score >=90)
    cout << "Letter Grade is A" << endl;
  else if (score >= 80) // (score >79)
    cout << "Letter Grade is B" << endl;
  else if (score >= 70)
    cout << "Letter Grade is C" << endl;
  else if (score >= 60)
    cout << "Letter Grade is D" << endl;
  else //This is called default else // catch all
    cout << "Letter Grade is F" << endl;
  return 0;
}
