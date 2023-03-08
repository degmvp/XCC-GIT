/*
---------------------------------------
# ✅ xc+003
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+003]
AS
/*
/* atof example: sine calculator */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */

int main ()
{
  double n,m;
  double pi=3.1415926535;
  char buffer[256];
  printf ("Digite valor de n: ");
  fgets (buffer,256,stdin);
  n = atof (buffer);
  printf("o valor de n : %f\n\n", n);
  printf ("O valor de pi:%f\n" ,pi);
  return 0;
}

*/