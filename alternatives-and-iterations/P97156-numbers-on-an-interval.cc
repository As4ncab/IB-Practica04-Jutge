/**
 * @file P97156-numbers-on-an-interval.cc
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
  int first_in_interval, last_in_interval;

  std::cin >> first_in_interval >> last_in_interval;

  if (first_in_interval <= last_in_interval) {
    std::cout << first_in_interval;

    first_in_interval++;

    if (first_in_interval != last_in_interval) {
      for (int i = first_in_interval; i <= last_in_interval; i++) {
        std::cout << "," << i;
      }
    }

    if (first_in_interval == last_in_interval) {
      std::cout << "," << last_in_interval;
    }
  }

  std::cout << std::endl;

  return 0;
}
