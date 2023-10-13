/**
 * @file multiplication_table.cc
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
  int number;

  std::cin >> number;

  for (int i = 1; i <= 10; i++) {
    std::cout << number << "*" << i << " = " << number * i << std::endl;
  }

  return 0;
}
