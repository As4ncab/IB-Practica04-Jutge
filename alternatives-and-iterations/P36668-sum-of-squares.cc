/**
 * @file P36668-sum-of-squares.cc
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
  int sum = 0;

  std::cin >> number;

  for (int i = 1; i <= number; i++) {
    sum = (sum + (i * i));
  }

  std::cout << sum << std::endl;

  return 0;
}
