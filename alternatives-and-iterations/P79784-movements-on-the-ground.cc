/**
 * @file P79784-movements-on-the-ground.cc
 * @author Alexia Sánchez Cabrera (alu0101482323@ull.edu.es)
 * @brief 
 * @version 0.1
 * @date 2023-10-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

int main() {
  std::string moves;
  int coordenada_x{0};
  int coordenada_y{0};

  std::cin >> moves;

  for (int i{0}; i < moves.size(); i++) {
    switch (moves[i]) {
      case 'n':
        coordenada_y--;
        break;

      case 's':
        coordenada_y++;
        break;

      case 'e':
        coordenada_x++;
        break;

      case 'w':
        coordenada_x--;
        break;
    }
  }

  std::cout << "(" << coordenada_x << ", " << coordenada_y << ")\n";

  return 0;
}
