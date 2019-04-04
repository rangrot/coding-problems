#include "stdio.h"
#include "stdint.h"
#include <string.h> 
#include "../baseConversion/baseConversion.h"

/*
int flipNumber(int num)
{
}

int flipNumAtPos(int num, int pos1, int pos2)
{
}
*/
void flipBits()
{
  int num = 12;
  char res[32];
  printf("num = %d |  Binary Representation = %s\r\n", num, decToBase(res, 2, num) );
}