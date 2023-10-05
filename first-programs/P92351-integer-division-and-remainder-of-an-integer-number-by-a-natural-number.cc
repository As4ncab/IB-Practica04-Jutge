/**
 * @file
 * P92351-integer-division-and-remainder-of-an-integer-number-by-a-natural-number.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <cassert>
#include <iostream>

int main() {
  long int number;
  int divisor, reminder;

  std::cin >> number >> divisor;
  assert(divisor > 0);

  if ((number % divisor) < 0) {
    reminder = (number - (((number / divisor) - 1) * divisor));

    std::cout << (number / divisor) - 1 << " " << reminder << std::endl;

  } else {
    reminder = (number % divisor);

    std::cout << number / divisor << " " << reminder << std::endl;
  }

  return 0;
}
