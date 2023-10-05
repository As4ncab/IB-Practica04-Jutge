/**
 * @file P42042-classification-of-characters-1.cc
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

  std::cin >> letter;

  if (!isalpha(letter)) {
    std::cout << "This is not a letter silly!" << std::endl;

    return 1;
  }

  if ((letter >= 65) && (letter <= 90)) {
    std::cout << "uppercase" << std::endl;

    if ((letter == 'A') || (letter == 'E') || (letter == 'I') ||
        (letter == 'O') || (letter == 'U')) {
      std::cout << "vowel" << std::endl;

    } else {
      std::cout << "consonant" << std::endl;
    }

  } else {
    std::cout << "lowercase" << std::endl;

    if ((letter == 'a') || (letter == 'e') || (letter == 'i') ||
        (letter == 'o') || (letter == 'u')) {
      std::cout << "vowel" << std::endl;

    } else {
      std::cout << "consonant" << std::endl;
    }
  }

  return 0;
}
