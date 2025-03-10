#include "Giocatore.h"

void printPlayerMap() {
  for (int i = 0; i < MAP_SIZE; ++i) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      std::cout << std::quoted(playerMap[i][j]);
      if (j < MAP_SIZE - 1) {
        std::cout << ", ";
      }
    }
  }
}

void printShipsMap() {
  for (int i = 0; i < MAP_SIZE; ++i) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      std::cout << std::quoted(shipsMap[i][j]);
      if (j < MAP_SIZE - 1) {
        std::cout << ", ";
      }
    }
  }
}

void setShips() {
  // 6 blocchi => 1
  // 4 blocchi => 2
  // 3 blocchi => 3
  // 2 blocchi => 3
}
