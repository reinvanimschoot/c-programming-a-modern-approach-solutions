#include <stdio.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h>   /* time() */
#include <ctype.h>  /* toupper() */

int play_game(void);
int roll_dice(void);

#define DICE_SIDES 6
#define PLAY_AGAIN 'Y'

int main(void)
{
  int outcome, wins = 0, losses = 0;
  char play_again = PLAY_AGAIN;

  srand((unsigned)time(NULL));

  while (toupper(play_again) == PLAY_AGAIN)
  {
    outcome = play_game();

    if (outcome)
    {
      wins++;
      printf("You win!");
    }
    else
    {
      losses++;
      printf("You lose!");
    }

    printf("\n\nPlay again? ");
    scanf(" %c", &play_again);
  }

  printf("\nWins: %d   Losses: %d", wins, losses);

  return 0;
}

int play_game(void)
{
  int roll, point = 0;

  roll = roll_dice();

  printf("You rolled: %d\n", roll);

  if (roll == 7 || roll == 11)
    return 1;

  if (roll == 2 || roll == 3 || roll == 12)
    return 0;

  point = roll;

  printf("Your point is %d\n", point);

  for (;;)
  {
    roll = roll_dice();

    printf("You rolled %d\n", roll);

    if (roll == point)
      return 1;

    if (roll == 7)
    {
      return 0;
    }
  }
}

int roll_dice(void)
{
  int dice_1, dice_2;

  dice_1 = rand() % DICE_SIDES + 1;
  dice_2 = rand() % DICE_SIDES + 1;

  return dice_1 + dice_2;
}
