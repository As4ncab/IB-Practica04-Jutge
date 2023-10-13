/**
 * @file number_digits.cc
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
  int number, aux;
  int counter = 0;

  std::cin >> number;
  aux = number;

  if (number == 0) {
    counter = 1;
  }

  while (aux != 0) {
    counter++;

    aux = (aux / 10);
  }

  std::cout << "The number of digits of " << number << " is " << counter << "."
            << std::endl;

  return 0;
}