/**
 * @file P48107-integer-division-and-remainder-two-natural-numbers.cc
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
  int a, b, division, reminder;

  while (std::cin >> a >> b) {
    while (b <= 0) {
      std::cout << "It needs to be higher than 0!" << std::endl;

      std::cin >> b;
    }

    division = a / b;
    reminder = a % b;

    std::cout << division << " " << reminder << std::endl;
  }

  return 0;
}