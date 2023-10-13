/**
 * @file P60816-reversed-number-in-hexadecimal.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main() {
  int number;

  std::cin >> number;

  if (number == 0) {std::cout << 0;}

  while (number != 0) {
    switch (number % 16) {
      case 10:
        std::cout << 'A';
        break;

      case 11:
        std::cout << 'B';
        break;

      case 12:
        std::cout << 'C';
        break;

      case 13:
        std::cout << 'D';
        break;

      case 14:
        std::cout << 'E';
        break;

      case 15:
        std::cout << 'F';
        break;

      default:
        std::cout << number % 16;
    }

    number = number / 16;
  }

  std::cout << std::endl;

  return 0;
}
