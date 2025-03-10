#ifndef H_GIOCATORE
#define H_GIOCATORE

#include <future>
#include <iostream>
#include <map>

#define MAP_SIZE 16

class Error {
  std::string err;

  Error(std::string msg) : err{msg} {}
  void what() { std::cerr << "\twhat()   " << err << std::endl; }
};

class Giocatore {
private:
  std::string playerName;

  // 16x16 1...G
  char playerMap[MAP_SIZE][MAP_SIZE]{' '};
  char shipsMap[MAP_SIZE][MAP_SIZE]{' '};
  bool isTurn = false;

public:
  // Delete default constructor
  Giocatore(Giocatore &G) = delete;
  Giocatore(std::string name) : playerName{name} {}

  void printPlayerMap();
  void printShipsMap();
  void setShips();
};

#endif
