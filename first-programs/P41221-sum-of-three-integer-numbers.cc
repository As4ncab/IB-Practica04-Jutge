/**
 * @file P41221-sum-of-three-integer-numbers.cc
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
  int var1, var2, var3;

  while (std::cin >> var1 >> var2 >> var3) {
    std::cout << var1 + var2 + var3 << std::endl;
  }

  return 0;
}