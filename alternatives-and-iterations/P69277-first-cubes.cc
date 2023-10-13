/**
 * @file first_cubes.cc
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
  std::cout << 0;

  for (int i = 1; i <= number; i++) {
    std::cout << "," << (i * i * i);
  }

  std::cout << std::endl;

  return 0;
}
