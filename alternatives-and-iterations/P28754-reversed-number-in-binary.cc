/**
 * @file P28754-reversed-number-in-binary.cc
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
  long int number;

  std::cin >> number;

  if (number == 0) {
    std::cout << 0;
  }

  while (number != 0) {
    std::cout << (number % 2);

    number = (number / 2);
  }

  return 0;
}