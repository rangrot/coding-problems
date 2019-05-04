#include "../../main/main.h"


//To flip all the bits of a number, 
//you just do a ^ with all 1's
//assuming a 32 bit number
int flipNumber(int num)
{
   // calculating number of bits 
    // in the number 
    int x = log2(num) + 1; 
  
    // Inverting the bits one by one 
    for (int i = 0; i < x; i++)  
       num = (num ^ (1 << i));  
   
    return num; 
}

int flipNumAtPos( int num, int pos1, int pos2)
{
  return num;
}


void flipBits()
{
  int num = 12, outNum = 0;
  char res[32];
  char resOut[32];
  printf("num = %d |  Binary Representation = %s\r\n", num, decToBase(res, 2, num) );
  outNum = flipNumber(num);
  printf("flipped Value of %s - > %d is %s - > %d\r\n", decToBase(res, 2, num), num, decToBase(resOut, 2, outNum), outNum );
}
