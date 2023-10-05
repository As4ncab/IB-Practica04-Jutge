/**
 * @file P98960-uppercase-and-lowercase-letters.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief
 * @version 0.1
 * @date 2023-10-05
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <cctype>
#include <iostream>

int main() {
  char letter;
  char new_letter;

  std::cin >> letter;

  if (!isalpha(letter)) {
    std::cout << "This is not a letter silly!" << std::endl;

    return 1;
  }

  if ((letter >= 65) && (letter <= 90)) {
    new_letter = tolower(letter);

  } else {
    new_letter = toupper(letter);
  }

  std::cout << new_letter << std::endl;

  return 0;
}
