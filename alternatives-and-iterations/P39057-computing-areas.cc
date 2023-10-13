/**
 * @file P39057-computing-areas.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

int main() {
  int amount;
  std::string which_one;
  double number1, number2;

  std::cin >> amount;

  for (int i{0}; i < amount; i++) {
    std::cin >> which_one;

    if (which_one == "rectangle") {
      std::cin >> number1 >> number2;

      std::cout << std::fixed << std::setprecision(6) << number1 * number2
                << std::endl;

    } else {
      std::cin >> number1;

      std::cout << std::fixed << std::setprecision(6)
                << M_PI * (number1 * number1) << std::endl;
    }
  }
}
