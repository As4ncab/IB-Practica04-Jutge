/**
 * @file P37500-first-numbers.cc
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
  int number;

  std::cin >> number;

  for (int i = 0; i <= number; i++) {
    std::cout << i << std::endl;
  }

  return 0;
}
