#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1 = 0;
  int answer2 = 0;
  int answer3 = 0;
  int answer4 = 0;

  std::cout << "The Sorting Hat Quiz!\n\n";

  { //Q1
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
    std::cout << "  1) The Good\n";
    std::cout << "  2) The Great\n";
    std::cout << "  3) The Wise\n";
    std::cout << "  4) The Bold\n";

    std::cout << "Type in your answer: ";
    std::cin >> answer1;

    std::cout << "\n\n";

    if (answer1 == 1) {
      hufflepuff = hufflepuff + 1;
    } else if (answer1 == 2) {
      slytherin = slytherin + 1;
    } else if (answer1 == 3) {
      ravenclaw = ravenclaw + 1;
    } else if (answer1 == 4) {
      gryffindor = gryffindor + 1;
    } else {
      std::cout << "Invalid input.\n";
    }
  }
  { //Q2
    std::cout << "Q2) Dawn or Dusk?\n\n";
    std::cout << "  1) Dawn\n";
    std::cout << "  2) Dusk\n";

    std::cout << "Type in your answer: ";
    std::cin >> answer2;

    std::cout << "\n\n";

    if (answer2 == 1) {
      gryffindor = gryffindor + 1;
      ravenclaw = ravenclaw + 1;
    } else if (answer2 == 2) {
      hufflepuff = hufflepuff + 1;
      slytherin = slytherin + 1;
    } else {
      std::cout << "Invalid Input\n";
    }
  }
  { //Q3
    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
    std::cout << "  1) The violin\n";
    std::cout << "  2) The trumpet\n";
    std::cout << "  3) The piano\n";
    std::cout << "  4) The drum\n";

    std::cout << "Type in your answer: ";
    std::cin >> answer3;

    std::cout << "\n\n";

    if (answer3 == 1) {
      slytherin = slytherin + 1;
    } else if (answer3 == 2) {
      hufflepuff = hufflepuff + 1;
    } else if (answer3 == 3) {
      ravenclaw = ravenclaw + 1;
    } else if (answer3 == 4) {
      gryffindor = gryffindor + 1;
    } else {
      std::cout << "Invalid input.\n";
    }
  }
  { //Q4
    std::cout << "Q4) Which road tempts you the most?\n\n";
    std::cout << "  1) The wide, sunny grassy lane\n";
    std::cout << "  2) The narrow, dark, lantern-lit alley\n";
    std::cout << "  3) The twisting, leaf-strewn path through woods\n";
    std::cout << "  4) The cobbled street lined (ancient buidings)\n";

    std::cout << "Type in your answer: ";
    std::cin >> answer4;

    std::cout << "\n\n";

    if (answer4 == 1) {
      hufflepuff = hufflepuff + 1;
    } else if (answer4 == 2) {
      slytherin = slytherin + 1;
    } else if (answer4 == 3) {
      gryffindor = gryffindor + 1;
    } else if (answer4 == 4) {
      ravenclaw = ravenclaw + 1;
    } else {
      std::cout << "Invalid input.\n";
    }
  }

  int max = 0;
  std::string house;

  { //Find Max
    if (gryffindor > max) {
      max = gryffindor;
      house = "Gryffindor";
    }
    if (hufflepuff > max) {
      max = hufflepuff;
      house = "Hufflepuff";
    }
    if (ravenclaw > max) {
      max = ravenclaw;
      house = "Ravenclaw";
    }
    if (slytherin > max) {
      max = slytherin;
      house = "Slytherin";
    }
  }

  std::cout << house << "!\n";
}