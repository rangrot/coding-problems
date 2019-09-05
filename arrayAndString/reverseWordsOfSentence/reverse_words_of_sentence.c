#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * @brief 
 * Given a sentence, reverse the words of the sentence.
For example,
"i live in a house" becomes "house a in live i"
Questions to Clarify:
Q. What about punctuations (.,)?
A. Assume there are no punctuations.
Q. How to deal with capitalization (uppercase vs lowercase letters)?
A. Ignore the case, keep as it is.
Q. Can I allocate a new String for the result?
A. Solve with both new String(Limit the space complexity to O(n)) and in place.

Solution 1:
We start from the back. As soon as we find a space separating words, we add that word to the result.
Pseudocode:
result = empty string
current_word_end = str.length
i -> str.length-1 to 0
   if str[i] is a space:
     extract str[i..current_word_end], add it to result
     reset current_word_end to i;
// first word was not added by the above loop
at the end, add the first word - str[0..current_word_end] to result

Solution 2:

Test Cases:
Corner Cases: null string, empty string, single letter,  single space, begins with space, ends with space
Base Cases: one word, two words
Regular Cases: 5 words
Time Complexity: O(n)
Space Complexity: O(n)
 */
void print_string(char *input_string, int len)
{
  for (int i = 0; i < len; i++)
  {
    printf("%c", input_string[i]);
  }
  printf("\r\n");
}
void reverse_words_of_sentence(char *input_string, int len)
{
  int end = len;

  if(!input_string || len <=0)
  {
    printf("Invalid\r\n");
  }

  char *out_string = (char *)malloc(sizeof(input_string) * len);
  int j = 0;

  for (int i = len - 1; i >= 0; i--)
  {
    if (input_string[i] == ' ')
    {
      for (int k = i + 1; k < end; k++)
      {
        out_string[j++] = input_string[k];
      }
      out_string[j++] = ' '; //compensate for the space
      end = i;
    }
  }

  //add the first word, which was missed because of no space being considered.
  for (int k = 0; k < end; k++)
  {
    out_string[j++] = input_string[k];
  }

  print_string(out_string, len);
}

int main()
{
  //Test cases

  ////Regular case
  char str[18] ="i live in a house";

  ////Base case
  //One word
  //char str[6] = "hello";
  //Two words
  //char str[12] = "hello there";

  ////Corner cases
  //null string
  //char str[2] = "\0";
  //empty string
  //char str[1] = "";
  //single letter
  //char str[2] = "h";
  //begins with space
  //char str[7] = " hello";
  //ends with space
  //char str[7] = "hello ";

  int len = strlen(str);
  print_string(str, len);
  reverse_words_of_sentence(str, len);
}