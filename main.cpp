// Anything #include is a prewritting code made available to the user fro the
// programmer library
#include <iostream> //for reading or writing
#include <string>   // for working with string data
using namespace std;
/* This line is whatever you include iostream or string
otherwise you will have to code std::cout everytime*/ //This is a multiline comment

// single line comment
int main()// function header-- entery into program from OS
// beinning of function body
{
  string firstname = "Ely";// declaration and initialization
  string lastname;// declaration
  lastname = "Rodriguez";// initialization
  int id = 555;// integer datatype
  float gpa = 3.75;// float datatype
  double hairSize = .000000089;// double datatype --> expansion of float
  char grade = 'A';// for single character datatype
  bool tuitionPaid = true;// boolean datatype for toggle data

  // Printing the data to output screen
  cout << "\n STUDENT INFORMATION\n"
       << endl; // cout is used to send datat to output
  cout << "\nFirst name \t" << firstname
       << endl; // << is called stream INSERTION operator
  cout << "\nLast name \t" << lastname << endl; // The caltion is a literal string
  cout << "\nID \t\t\t" << id << endl;
  cout << "\nGPA \t\t" << gpa << endl;
  cout << "\nHair Size \t" << hairSize << endl;
  cout << "\nGrade \t\t" << grade << endl;
  cout << "\nTuition Paid \t" << tuitionPaid << endl;

  // Find out where exactly our data is stored on our computer
  //  & is called the "address of" operator
  cout << "\nSTUDENT INFORMATION\n" << endl;
  cout << "First name: \t" << firstname << "\tis stored at location:\t" <<  &firstname
       << endl;
  cout << "\nLast name: \t" << lastname << "\tis stored at location:\t" << &lastname
       << endl;
  cout << "\nID: \t\t" << id << "\tis stored at location:\t" << &id << endl;
  cout << "\nGPA: \t\t" << gpa << "\tis stored at location:\t" << &gpa << endl;
  cout << "\nHair Size: \t" << hairSize << "\tis stored at location:\t" << &hairSize
       << endl;
  cout << "\nGrade: \t\t" << grade << "\tis stroed at location:\t" << &grade << endl;
  cout << "\nTuition Paid: \t" << tuitionPaid << "\tis stored at location:\t"
       << &tuitionPaid << endl;

  // Finding out how much space is needed by each datatype in my compiler
  // sizeof is a function
  cout << "\nInteger size is: \t"  << sizeof(int) << " bytes" << endl;
  cout << "\nShort size is: \t\t" << sizeof(short) << " bytes" << endl;
  cout << "\nLong size is: \t\t" << sizeof(long) << " bytes" << endl;
  cout << "\nFloat size is: \t\t" << sizeof(float) << " bytes" << endl;
  cout << "\nDouble size is: \t" << sizeof(double) << " bytes" << endl;
  cout << "\nCharacter size is: \t" << sizeof(char) << " bytes" << endl;
  cout << "\nBool size is: \t\t" << sizeof(bool) << " bytes" << endl;

  return 0; // indicate sucessful completion of program and return to OS
  // end of function body
}