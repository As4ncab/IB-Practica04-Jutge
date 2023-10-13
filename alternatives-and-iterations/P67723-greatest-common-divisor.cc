/**
 * @file greatest_common_divisor.cc
 * @author Alexia SÃ¡nchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2022-10-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

int main() {
  int number1{0}, number2{0};

  std::cin >> number1 >> number2;

  if (number1 == number2) {
    std::cout << "The gcd of " << number1 << " and " << number2 << " is "
              << number1 << "." << std::endl;

  } else {
    if (number1 < number2) {
      for (int i{number1}; i >= 1; i--) {
        if (((number1 % i) == 0) && ((number2 % i) == 0)) {
          std::cout << "The gcd of " << number1 << " and " << number2 << " is "
                    << i << "." << std::endl;

          break;
        }
      }

    } else {
      for (int i{number2}; i >= 1; i--) {
        if (((number1 % i) == 0) && ((number2 % i) == 0)) {
          std::cout << "The gcd of " << number1 << " and " << number2 << " is "
                    << i << "." << std::endl;

          break;
        }
      }
    }
  }

  return 0;
}
