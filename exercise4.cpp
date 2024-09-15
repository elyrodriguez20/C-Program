#include <iostream>
using namespace std;

int main () 
{
int numStudents; 
double Calories_per_Student, CalperLbFruit=0, CalperLbNuts=0, TotalNuts, TotalFruit, Total_Calories;

  //What the user will input
  cout << "Enter the number of students: ";
  cin >> numStudents;
  cout << "Enter the number of calories per student: ";
  cin >> Calories_per_Student;
  cout << "Enter the number of calories per pound of fruit: ";
  cin >> CalperLbFruit;
  
  //Calculations for the calperNuts and calperFruit
  CalperLbNuts= (0.70 * CalperLbFruit) + CalperLbFruit;
  cout << "TESTING" << CalperLbNuts <<endl;    //Calculations fro number of calories per student
    Total_Calories= numStudents * Calories_per_Student;
    cout << "Total calories needed: " << Total_Calories << "cal" <<endl;
  //Calculations for number of calories in each pound of nuts 50/50
  double CalfromNuts= Calories_per_Student/2;
  double CalfromFruit= Calories_per_Student/2;

  //Calculations for total calories from nuts and fruit
  TotalNuts= CalfromNuts/ CalperLbNuts;
  TotalFruit= CalfromFruit/ CalperLbFruit;
  //Output 
  cout << "Amount of nuts needed: " << TotalNuts << "lbs" <<endl;
  cout << "Amount of fruit needed: " << TotalFruit << "lbs" <<endl;
  cout << "Total calories needed: " << Total_Calories << "cal" <<endl;
  return 0;
}

