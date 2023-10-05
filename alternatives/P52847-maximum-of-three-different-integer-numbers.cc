/**
 * @file P52847-maximum-of-three-different-integer-numbers.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers_to_compare;
  int number, max_of_numbers, size = 0;

  while (std::cin >> number) {
    numbers_to_compare.resize(size++);
    numbers_to_compare.push_back(number);
  }

  max_of_numbers = numbers_to_compare[0];

  for (int i = 0; i < numbers_to_compare.size(); i++) {
    if (numbers_to_compare[i] > max_of_numbers) {
      max_of_numbers = numbers_to_compare[i];
    }
  }

  std::cout << max_of_numbers << std::endl;

  return 0;
}