//Hard drive storage capacity
#include <iostream>
using namespace std;

int main()
{
  double advertisedCapacityGB, actualStorage, totalBytes;
  //Calculations 
  cout << "Enter the advertised storage capacity of the hard drive (in GB):";
  cin >> advertisedCapacityGB;
  //Calculatng the advertised capacity of the hard drive
  totalBytes= advertisedCapacityGB* 1000000000;
//Converting bytes to GB using 1GB= 1024^3 bytes
  actualStorage= totalBytes / (1024 * 1024 * 1024);
  //Output
  cout << "The actual storage capacity of the hard drive is: " << actualStorage << " GB" << endl;
  return 0;
}

