// Name:
// This program calculates the tax and tip on a restaurant bill.

#include<iostream>

int main()
{
  double tax, tip, meal_cost, bill;

  //Total cost of meal.
  std::cout<<"Welcome to the Restaurant Bill Calculator!\nWhat is the total meal cost? $";

  std::cin>> meal_cost;

//calculate the tax of the meal.
tax = meal_cost * 0.0775;

  std::cout<<"Tax:          $" << tax << std::endl;

//calculate the tip of the meal.
  tip = meal_cost * 0.2;

  std::cout<<"Tip:          $" << tip << std::endl;

//calculate the bill.
bill = meal_cost + tax + tip;

  std::cout<<"Total Bill:   $" << bill << std::endl;

  return 0;
}
