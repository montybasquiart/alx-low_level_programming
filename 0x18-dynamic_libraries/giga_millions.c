#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Giga Millions program
  * Players may pick six numbers from two separate pools of numbers:
  * - five different numbers from 1 to 75 and
  * - one number from 1 to 15
  * You win the jackpot by matching all six winning numbers in a drawing.
  * Your chances to win the jackpot is 1 in 258,890,850            
  *           
  * usage: ./gm n1 n2 n3 n4 n5 bonus
  */

int printf(const char * format, ...)
{
  write(1, "9 8 10 24 75 +9\n", 17);
  write(1, "Congratulations you won the Jackpot!\n", 38);

  exit(EXIT_SUCCESS);
}
