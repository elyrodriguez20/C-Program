#include <iostream>
#include <string> //prewritten header file

using namespace std;
int main()
{
  int stdId=0;// initial value
  string name= " "; //initializing with null string
  double gpa = 0.0; //declarations and initializations

  cout << "\nPlease enter the value for the following variables..." <<endl; //promting user
  cout << "Enter the ID: ";
  cin >> stdId;
  cin.ignore( ); //It ignores the nextline and reads the name input
  cout << "Enter the full name:";
  //cin >> name; //can only read ONE word
  getline(cin, name); //can read multiple words (strings)
  cout << "Enter the gpa:";
  cin >> gpa;

  cout << "\nHere are the values entered" << endl;
  cout << "Student ID:\t" << stdId <<endl;
  cout << "Student name:\t" << name << endl;
  cout << "Length of the student name is:\t" << name.length() << endl;// Length is a string function
  cout << "Student GPA:\t" << gpa << endl << endl;

  string fname = name.substr(0,7);
  string lname = name.substr(8);
  cout << "Student first name:\t\t\t" << fname << endl;
  cout << "Student last name: \t\t\t" << lname << endl;
    cout << "My sister's name \t" << name.substr (0,2) << name.substr (5,2) << endl;
  cout << "Using concaenation: \t" << fname + " " + lname << endl; // Puts one string right nect to another.
  // + is the concatenation operator only if a string is right next to it (One side or the other).
  //Swapping two values
  //string first { "one"};
  string first;
  first = "one";
  string second { "two"}; //This is the same as the one above.

  //output strings 
  cout << "Before swap:\n first: " << first << "\nsecond:" << second <<endl;
  first.swap(second); // swap strings
  cout << "\n\nAfter swap;\n first:" << first << "\n second:" << second << endl;
  first.swap(fname);
  cout << "\n\nAfter swap:\n first:" << first << "\nfname:" << fname << endl;

  return 0;
}