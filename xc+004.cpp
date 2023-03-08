
/*
---------------------------------------
# ✅ xc+004
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+004]
AS
/*
/* strtod example */
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* strtod */

int main ()
{
  char szOrbits[] = "365.24 29.53";
  char* pEnd;
  double d1, d2;
  d1 = strtod (szOrbits, &pEnd);
  d2 = strtod (pEnd, NULL);
  printf ("A lua c0mpleta %.2f orbitas por ano em volta da terra\n", d1/d2);
  return 0;
}


*/