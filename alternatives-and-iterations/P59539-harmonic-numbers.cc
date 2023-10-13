/**
 * @file P59539-harmonic-numbers.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iomanip>
#include <iostream>

int main() {
  int number;
  double sum = 0;
  double harmonic;
  std::cin >> number;

  for (double i = 1; i <= number; i++) {
    sum = sum + (1 / i);
  }

  harmonic = sum;

  std::cout << std::fixed << std::setprecision(4) << harmonic << std::endl;

  return 0;
}
