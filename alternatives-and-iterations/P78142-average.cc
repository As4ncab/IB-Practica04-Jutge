/**
 * @file average.cc
 * @author Alexia SÃ¡nchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2022-10-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iomanip>
#include <iostream>

int main() {
  double number;
  double sum = 0;
  int counter = 0;
  double average = 0;

  while (std::cin >> number) {
    sum = (sum + number);
    counter++;
  }

  average = sum / counter;

  std::cout << std::fixed << std::setprecision(2) << average << std::endl;

  return 0;
}