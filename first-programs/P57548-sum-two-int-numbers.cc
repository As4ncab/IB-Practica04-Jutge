/**
 * @file P57548-sum-two-int-numbers.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

int main() {
  int var1, var2;

  while (std::cin >> var1 >> var2) {
    std::cout << var1 + var2 << std::endl;
  }

  return 0;
}