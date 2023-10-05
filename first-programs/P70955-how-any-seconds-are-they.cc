/**
 * @file P70955-how-any-seconds-are-they.cc
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
  int years, days, hours, minutes, seconds;
  int total_seconds = 0;

  std::cin >> years >> days >> hours >> minutes >> seconds;

  days = (days + (years * 365));
  hours = (hours + (days * 24));
  minutes = (minutes + (hours * 60));
  seconds = (seconds + (minutes * 60));

  std::cout << seconds << std::endl;

  return 0;
}