/* You will pick Rock, Paper, or Scissors, and so will the computer. Then it will determine who wins! */

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));

  int computer = rand() % 3 + 1;

  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;
  std::cout << "\n\n";

  if (user == 1) {
    std::cout << "You picked Rock!";
  } else if (user == 2) {
    std::cout << "You picked Paper!";
  } else if (user == 3) {
    std::cout << "You picked Scissors!";
  } else {
    std::cout << "Invalid input!";
  }

  std::cout << "\n";

  if (computer == 1) {
    std::cout << "Computer picked Rock!";
  } else if (computer == 2) {
    std::cout << "Computer picked Paper!";
  } else {
    std::cout << "Computer picked Scissors!";
  }

  std::cout << "\n\n";

  /* Conditionals:
  Rock: 1
  Paper: 2
  Scissors: 3

  Paper > Rock, Scissors > Paper, Rock > Scissors */

  if (user == computer) {
    std::cout << "Tie!";
  } else if (user == 1 ) { //Rock
    if (computer == 2) {
      std::cout << "You lose!";
    }
    if (computer == 3) {
      std::cout << "You win!";
    }
  } else if (user == 2) {
    if (computer == 1) {
      std::cout << "You win!";
    }
    if (computer == 3) {
      std::cout << "You lose!";
    }
  } else if (user == 3) {
    if (computer == 1) {
      std::cout << "You lose!";
    }
    if (computer == 2) {
      std::cout << "You win!";
    }
  } else {
    std::cout << "Invalid input!";
  }
  
  std::cout << "\n";

}