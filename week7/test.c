#include <stdio.h>

int main ()
{
  char sentence []="Rudolphis, 12 years old";
  char str [5];
  int i;

  sscanf (sentence,"%s, %d",str,&i);
  printf ("%s -> %d\n",str,i);
  
  return 0;
}