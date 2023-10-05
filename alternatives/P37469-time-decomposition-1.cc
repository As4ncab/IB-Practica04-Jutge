/**
 * @file P37469-time-decomposition-1.cc
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
  // First element = hours, Second = minutes, Third = seconds
  std::vector<int> time;
  int seconds;

  time.resize(3);

  std::cin >> seconds;

  time[2] = seconds % 60;

  seconds /= 60;

  time[1] = seconds % 60;
  time[0] = seconds / 60;

  for (unsigned i{0}; i < time.size(); i++) {
    if (i < time.size() - 1) {
      std::cout << time[i] << " ";

    } else {
      std::cout << time[i] << std::endl;
    }
  }

  return 0;
}