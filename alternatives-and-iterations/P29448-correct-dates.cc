/**
 * @file P29448-correct-dates.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-13
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <iostream>

bool ValidYear(int& year) {
  if ((year > 1800) && (year < 9999)) {
    return 1;
  }

  return 0;
}

bool ValidMonth(int& month) {
  if ((month <= 12) && (month >= 1)) {
    return 1;
  }

  return 0;
}

bool ValidDay(int& day) {
  if ((day >= 1) && (day <= 31)) {
    return 1;
  }

  return 0;
}

bool IsLeapYear(int year) {
  year /= 100;

  if ((year % 4) == 0) {
    
  }
}

int main() {
  int year{0}, month{0}, day{0};

  while (std::cin >> day >> month >> year) {
    if (ValidMonth(month) && ValidYear(year) && ValidDay(day)) {
      std::cout << "Correct Date" << std::endl;

    } else {
      std::cout << "Incorrect Date" << std::endl;
    }
  }

  return 0;
}