#include <iostream>
using namespace std;

int main () 
{
int numStudents; 
double Calories_per_Student, CalperLbFruit, CalperLbNuts, TotalNuts, TotalFruit, Total_Calories;

  //What the user will input
  cout << "Enter the number of students: ";
  cin >> numStudents;
  cout << "Enter the number of calories per student: ";
  cin >> Calories_per_Student;
  cout << "Enter the number of calories per pound of fruit: ";
  cin >> CalperLbFruit;
  cout << "Enter the number of calories per pound of nuts: ";
  cin >> CalperLbNuts;
  //Calculations for the calperNuts and calperFruit
  CalperLbNuts= 0.70 * CalperLbFruit;
    //Calculations fro number of calories per student
    Total_Calories= numStudents * Calories_per_Student;
  //Calculations for number of calories in each pound of nuts 50/50
  double CalfromNuts= CalperLbNuts/2;
  double CalfromFruit= CalperLbFruit/2;

  //Calculations for total calories from nuts and fruit
  TotalNuts= CalfromNuts/ CalperLbNuts;
  TotalFruit= CalfromFruit/ CalperLbFruit;
  //Output 
  cout << "Amount of nuts needed: " << TotalNuts << "lbs" <<endl;
  cout << "Amount of fruit needed: " << TotalFruit << "lbs" <<endl;
  cout << "Total calories needed: " << Total_Calories << "cal" <<endl;
  return 0;
}


/*
#include <iostream>
using namespace std;

int main () 
{
// Declaring variables
  int numstudent;
  double calories, numcalperLB, totalcal, calperLbnuts, calperLbfruit;
//calculations
  calperLbnuts * 0.70 = calperLbfruit;
  totalcal = numstudent * 
  
  cout << " Number of students in the elementary school: ";
  cin >> numstudent;
  cout <<" Number of calories required for each student: ";
  cin >> calories;
  cout >> "Number of calories in each pound of nuts: ";
  cin >> numcalperLb;

  //Output
  cout << "Amount of nuts and dried fruit needed for the students: " << 
}
*/