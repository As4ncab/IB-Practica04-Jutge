/**
 * @file P59875-top-to-bottom.cc
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
  int first_number, second_number;
  int maximum, minimum;

  std::cin >> first_number >> second_number;

  maximum = first_number;

  if (second_number > maximum) {
    maximum = second_number;
    minimum = first_number;

  } else {
    minimum = second_number;
  }

  for (int i = maximum; i >= minimum; i--) {
    std::cout << i << std::endl;
  }

  return 0;
}
