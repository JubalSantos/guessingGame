#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  /* Your code goes here */
  char word[100], name[100], number[100];
  FILE *in_file;

  in_file = fopen("answers.txt", "r");

  printf("What is your name?\r\n");
  scanf("%s", name);

  while(fscanf(in_file, "%s", word)!= EOF)
  {
    if(strcmp(name, word) == 0)
    {
      printf("What is the magic number, %s?\r\n", name);
      scanf("%s", number);

      fscanf(in_file, "%s", word);

      int guess = atoi(number);
      int num = atoi(word);

      if(guess == num){
        printf("SUCCESS\r\n");
	return 0;
      }
      if(guess < num)
      {
        printf("TOO LOW\r\n");
      }
      else
        printf("TOO HIGH\r\n");
      	return 0;
    }
  }
  fclose(in_file);
  return 0;
}

