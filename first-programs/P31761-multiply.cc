/**
 * @file P31761-multiply.cc
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
  long long var1, var2;

  while (std::cin >> var1 >> var2) {
    std::cout << var1 * var2 << std::endl;
  }

  return 0;
}