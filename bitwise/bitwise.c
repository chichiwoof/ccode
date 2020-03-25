#include <stdio.h>

int main (void)
{
  int bit2 = 4;  // 2 bit number is up to 4 variations (int has 32bits) === 0000 0000 0000 0000 0000 0000 0000 1111
  int bit8;

  bit8 = bit2 << 6;  // shift bits 6 places to the left to make 8 bit number 1111 1111

  int pot2 = 1023;  // 10 bit ADC

  int halfpot2 = pot2 >> 2;
printf("8 bit number can be equal to %i\n", bit8);
printf("pot to 8bit LED range is  %d", halfpot2);
  return 0;

}