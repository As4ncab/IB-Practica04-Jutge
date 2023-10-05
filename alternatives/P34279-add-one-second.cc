/**
 * @file P34279-add-one-seconds.cc
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
  int hours, minutes, seconds;

  std::cin >> hours;
  std::cin >> minutes;
  std::cin >> seconds;

  seconds++;

  while (seconds >= 60) {
    seconds = (seconds - 60);
    minutes++;
  }

  while (minutes >= 60) {
    minutes = (minutes - 60);
    hours++;
  }

  while (hours >= 24) {
    hours = (hours - 24);
  }

  if (hours < 10) {
    std::cout << "0" << hours;

  } else {
    std::cout << hours;
  }

  std::cout << ":";

  if (minutes < 10) {
    std::cout << "0" << minutes;

  } else {
    std::cout << minutes;
  }

  std::cout << ":";

  if (seconds < 10) {
    std::cout << "0" << seconds;

  } else {
    std::cout << seconds;
  }

  std::cout << std::endl;

  return 0;
}
