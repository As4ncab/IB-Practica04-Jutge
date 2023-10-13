/**
 * @file polynomial_evaluation.cc
 * @author Alexia SÃ¡nchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2022-10-26
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

int main() {
  double number_to_evaluate;
  double numbers_of_polynomial;
  double sum{0};
  int size{0};

  std::vector<double> polynomial;

  std::cin >> number_to_evaluate;

  while (std::cin >> numbers_of_polynomial) {
    polynomial.resize(size++);

    polynomial.push_back(numbers_of_polynomial);
  }

  for (int i = 0; i < polynomial.size(); i++) {
    sum = (sum + (polynomial[i] * pow(number_to_evaluate, i)));
  }

  std::cout << std::fixed << std::setprecision(4) << sum << std::endl;

  return 0;
}
