#include <iostream>
using namespace std;
int main()
{
  //constants
  double liters= 3.78;
  double cost_per_liter= 0.38;
  double profit_per_liter= 0.27;

  //varibles
  double totalMilkProduced;
  int total_cartons;
  double costOfProducingMilk, profitOfProducingMilk;
  cout << "Entere the total amount of milk produced in the morning: ";
  cin >> totalMilkProduced;
  total_cartons =  (totalMilkProduced / liters);
  costOfProducingMilk = totalMilkProduced * cost_per_liter;
  profitOfProducingMilk = totalMilkProduced * profit_per_liter;
  cout << "Total cartons needed to hold milk: " << total_cartons << endl;
  cout << "Cost of producing milk: " << costOfProducingMilk << endl;
  cout << "Profit of producing milk: " << profitOfProducingMilk << endl;

  // Where the user inputs the total amount of milk produced in liters and profit per carton of milk.
  cout << "Enter the cost of producing one liter of milk: ";
  cin >> cost_per_liter;
  cout << "Enter the profit per carton of milk: ";
  cin >> profit_per_liter;
  // Recalculate total cost and profit based on user input
  costOfProducingMilk = totalMilkProduced * cost_per_liter;
  profitOfProducingMilk = totalMilkProduced * profit_per_liter;
// Output results based on new inputs
  cout << "Total cartons needed to hold milk: " << total_cartons << endl;
  cout << "Cost of producing milk: " << costOfProducingMilk << endl;
  cout << "Profit of producing milk: " << profitOfProducingMilk << endl;  
  return 0; 
}