#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,z,cont;

  x=0;
  y=1;
 
  printf("0\n1\n",z);
 
 while (cont<=20)
  {
      z=x+y;
      printf("%d\n",z);
      x=y;
      y=z;
      cont++;
  }

  return 0;
}
