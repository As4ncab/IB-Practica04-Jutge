/**
 * @file P15613-temperatures.cc
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
  int degrees_celsius;

  std::cin >> degrees_celsius;

  if (degrees_celsius <= 0) {
    std::cout << "it's cold\nwater would freeze" << std::endl;

  } else if ((degrees_celsius > 0) && (degrees_celsius < 10)) {
    std::cout << "it's cold" << std::endl;

  } else if ((degrees_celsius >= 10) && (degrees_celsius <= 30)) {
    std::cout << "it's ok" << std::endl;

  } else if ((degrees_celsius > 30) && (degrees_celsius < 100)) {
    std::cout << "it's hot" << std::endl;

  } else {
    std::cout << "it's hot\nwater would boil" << std::endl;
  }

  return 0;
}