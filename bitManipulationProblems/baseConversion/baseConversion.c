#include "../../main/main.h"


/*------------------Utility Functions-------------------------*/
/**
 * @brief 
 *  To return char for a utilCharForVal. For example '2' 
 *  is returned for 2. 'A' is returned for 10. 'B' 
 *  for 11
 * @param num 
 * @return char 
 */
char utilCharForVal(int num)
{
  if (num >= 0 && num <= 9)
  {
    return (char)(num + '0');
  }
  else
  {
    return (char)(num - 10 + 'A');
  }
}

/**
 * @brief 
 *  To return a utilValForChar for char. For example
 *  '2' is returned for '2'. 10 is returned for 'A'
 * @param c: Input character 
 * @return int: return number 
 */
int utilValForChar(char c)
{
  if (c >= '0' && c <= '9')
    return (int)c - '0';
  else
    return (int)c - 'A' + 10;
}

/**
 * @brief 
 * Utility function to reverse a string 
 * @param str: Input string
 */
void utilStrRev(char *str)
{
  int len = (int)strlen(str);
  for (int i = 0; i < len / 2; i++)
  {
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }
}

/*---------------------Function Definitions--------------------------*/

/**
 * @brief 
 * Function to convert a given decimal number 
 * to a base.
 * @param res 
 * @param base: Which base to convert to 2,4,6,8,12 etc.  
 * @param num: Input number that needs to be converted. 
 * @return char*: Returns the converted number in an array. 
 */
char *decToBase(char res[], int base, int num)
{
  /*initializing the i for the output array*/
  int i = 0;

  /*
  Way to convert to any base is by dividing the number by base
  repeatedly and taking the remainder.
  */
  while (num > 0)
  {
    res[i++] = utilCharForVal(num % base);
    num /= base;
  }

  res[i] = '\0';

  /* Reverse the result*/
  utilStrRev(res);

  return res;
}

/**
 * @brief 
 * Function to convert a number from any given base to decimal.
 * @param inStr: input number, in form of a string. 
 * @param base: Which base the input num is currently in. 
 * @return int: output number in decimal. 
 */
int baseToDec(char *inStr, int base)
{
  int num = 0;             /* result*/
  int len = (int)strlen(inStr); /*length of the input string*/
  int power = 1;           /*power of base*/

  /* 
  Decimal equivalent is inStr[len-0]*1 + 
  inStr[len-1]*base + inStr[len-2]*(base^2) + ... 
  */
  for (int i = len - 1; i >= 0; i--)
  {
    /* 
    Check for valid base at the digit in input number must be 
    less than number's base. 
    */
    if (utilValForChar(inStr[i]) >= base)
    {
      printf("Invalid Number");
      return -1;
    }

    num += utilValForChar(inStr[i]) * power;
    power = power * base;
  }

  return num;
}

/**
 * @brief 
 * Driver Program to test the functions
 * @return int 
 */
void baseConversion()
{
  int num = 10, base = 16;
  char res[100];
  printf("Equivalent of %d in base %d is = %s\r\n", num, base, decToBase(res, base, num));

  {
    char str[] = "A";
    int base = 16;
    printf("Decimal equivalent of %s in base %d is = %d\r\n", str, base, baseToDec(str, base));
  }

  //return 0;
}
