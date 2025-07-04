#include <iostream>

int main() {

  int answer1;
  int answer2 = 0;
  int answer3 = 0;

  std::cout << "The Woods.\n\n";

  std::cout << "You arrive at the woods you wanted to hike through. Will you go left, or right?\n";
  std::cout << "I will go...\n1) Left\n2) Right\n";
  std::cin >> answer1;
  if (answer1 == 1) {
    std::cout << "You walk about a mile into the woods on the left side, and you come across a bear. What will you do?";
    std::cout << "I will...\n1) Run for my life\n2) Pet the bear\n";
    std::cin >> answer2;
    if (answer2 == 1) {
      std::cout << "Thankfully, the bear didn't see you run. But while running, you trip and fall into a deep cave. It's easy to get out. What will you do?\n";
      std::cout << "I will...\n1)Venture farther into the cave\n2) Climb out";
      std::cin >> answer3;
      if (answer3 == 1) {
        std::cout << "You venture farther into the cave and find treasure. You escape home safely, but with a mysterious curse..";
      } else if (answer3 == 2) {
        std::cout << "You climb out of the cave only to be met by the same bear you ran away from! You startle the bear and keep running..";
      } else {
        std::cout << "Invalid answer. A boulder fell from the sky and hit you!";
      }
    } else if (answer2 == 2) {
      std::cout << "You walk up to the bear to pet it. It sees your lack of fear, and it lets you pet it. It starts to get up, and moves in a way that tells you 'follow me'. Will you?\n";
      std::cout << "I will...\n1)Follow the bear\n2)Refuse and move on\n";
      std::cin >> answer3;
      if (answer3 == 1) {
        std::cout << "You follow the bear, where it leads you deep into a cave and shows you where treasure is. You take the treasure, without a mysterious curse.";
      } else if (answer3 == 2) {
        std::cout << "You refuse to follow the bear. The bear understands, and walks away. You continue on with your hike and make it home safely.";
      } else {
        std::cout << "Invalid answer. It started thundering and you got struck!";
      }
    } else {
      std::cout << "Invalid answer. You tripped and stepped on a mine.";
    }
  } else if (answer1 == 2) {
    std::cout << "You walk about a mile into the woods on the right side. You come across a small, but strange, village. What will you do?\n";
    std::cout << "I will...\n1)Head into the village\n2)Walk around the village\n";
    std::cin >> answer2;
    if (answer2 == 1) {
      std::cout << "You walk into the village. A strange human-like creature greets you with a potion. Do you take it?\n";
      std::cout << "I will...\n1)Take the potion\n2)Refuse\n";
      std::cin >> answer3;
      if (answer3 == 1) {
        std::cout << "You take the potion. Something is happening to your body.. you are turning into one of these human-like creatures! Now you live a life in this village as one of them. You don't make it home.";
      } else if (answer3 == 2) {
        std::cout << "You refuse to take the potion. Instead, you are grabbed by many of these human-like creatures and dragged into a cage. You are now part of some kind of zoo for humans, and live the rest of your life in a cage. You don't make it home.";
      } else {
        std::cout << "Invalid answer. The creature saw you as a threat and killed you!";
      }
    } else if (answer2 == 2) {
      std::cout << "You walk around the village. A creature from the village stops you and asks who you are. What will you do?\n";
      std::cout << "I will...\n1)Tell the truth, I'm hiking\n2)Lie, I'm one of you";
      std::cin >> answer3;
      if (answer3 == 1) {
        std::cout << "You tell the truth, that you're just taking a hike. The creature looks you up and down for a while, and finally decides to let you go. You continue on and make it home safe.";
      } else if (answer3 == 2) {
        std::cout << "You lie to the creature, saying that you are just going for a walk but live in the village. The creature puts you in jail since you are not allowed to walk outside the village if you live there. You never make it back home.";
      } else {
        std::cout << "Invalid Answer. The creature serves you for dinner in the village.";
      }
    } else {
      std::cout << "Invalid answer. A tree fell on you!";
    }
  } else {
    std::cout << "Invalid answer. A bear ate you now.";
  }
std::cout << "\n";
}