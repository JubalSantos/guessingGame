#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  /* Your code goes here */
  char word[100];
  char number[10];
  FILE *file;
  file = fopen("guesses.txt", "r");
  while(fscanf(file, "%s", word) != EOF)
  {
	  printf("%s", word);
  }
  fclose(file);
  return 0;
}

