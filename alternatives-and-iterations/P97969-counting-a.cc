/**
 * @file counting_as.cc
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
  std::string some_string;
  int count_of_a = 0;

  std::getline(std::cin, some_string);

  for (int i = 0; i < some_string.size(); i++) {
    if (some_string[i] == 'a') {
      count_of_a++;
    }
  }

  std::cout << count_of_a << std::endl;

  return 0;
}