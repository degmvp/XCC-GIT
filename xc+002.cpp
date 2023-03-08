/*
---------------------------------------
# ✅ xc+002
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+002]
AS
/*
/* atoi example */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

int main ()
{
  int i;
  char buffer[256];
  printf ("Enter a number: ");
  fgets (buffer, 256, stdin);
  i = atoi (buffer);
  printf ("The value entered is %d. Its double is %d.\n",i,i*2);
  return 0;
}

*/