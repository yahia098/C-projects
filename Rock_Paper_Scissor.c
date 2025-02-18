#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Choice_cpu(int m);
void Choice_player(int m);
int main() {
  printf("this is a Scissors rocks papers game!!!\n");
  srand(time(NULL)); // seed initialization
  int R;             // for the rnd part
  int input;         // for the player
  // main game loop
  printf("input 4 to leave the game \n");
  while (1) {
    // input loop
    while (1) {
      printf("input 1 for rock, 2 for paper, and 3 for scissor: ");
      scanf("%d", &input);
      if (input == 4) {
        return 0;
      }
      if (input < 1 || input > 3) {
        printf("do it again \n");
      } else {
        break;
      }
    }
    R = (rand() % 3) + 1;
    Choice_player(input);
    Choice_cpu(R);
    if ((input - R) == 1 || (input - R) == -2) {
      printf("you won !! \n");
    } else if ((input - R) == -1) {
      printf("you lost !! \n");
    } else {
      printf("tie \n");
    }
  }
  return 0;
}
void Choice_player(int m) {
  switch (m) {
  case 1:
    printf("you have chosen a rock \n");
    break;

  case 2:
    printf("you have chosen a paper \n");
    break;
  case 3:
    printf("you have chosen scissor \n");
    break;
  }
}

void Choice_cpu(int m) {
  switch (m) {
  case 1:
    printf("PC have chosen a rock \n");
    break;

  case 2:
    printf("PC have chosen a paper \n");
    break;
  case 3:
    printf("PC have chosen scissor \n");
    break;
  }
}
