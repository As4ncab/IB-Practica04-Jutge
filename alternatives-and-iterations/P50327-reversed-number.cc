/**
 * @file reversed_number.cc
 * @author Alexia SÃ¡nchez Cabrera (alu0101482323@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2022-10-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

int main() {
  int number;

  std::cin >> number;

  if (number == 0)
    std::cout << "0";

  while (number != 0) {
    std::cout << number % 10;

    number = (number / 10);
  }

  std::cout << std::endl;

  return 0;
}