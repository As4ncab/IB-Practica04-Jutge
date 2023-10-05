/**
 * @file P56118-maximum-of-two-integer-numbers.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

int main() {
  int number1, number2;
  int maximum;

  std::cin >> number1 >> number2;

  maximum = number1;

  if (number2 > maximum) {
    maximum = number2;
  }

  std::cout << maximum << std::endl;

  return 0;
}
