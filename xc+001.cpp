USE [XSUPG]
GO

/****** Object:  StoredProcedure [dbo].[xc+001]    Script Date: 12/02/2023 19:11:52 ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

/*
---------------------------------------
# ✅ xc+001
# ✅ C++ criado: 2021/03/05
# ✅ Objetivo:sql server - C++ Lib
---------------------------------------*/

create proc [dbo].[xc+001]
AS
/*
/* Converts an integer value to a null-terminated string
   using the specified base and stores the result in the
   array given by str parameter.

   Convert integer to string (non-standard function)
*/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i;
  char buffer [33];
  printf ("Enter a number: ");
  scanf ("%d",&i);

  itoa (i,buffer,10);
  printf ("decimal: %s\n",buffer);
  itoa (i,buffer,16);
  printf ("hexadecimal: %s\n",buffer);
  itoa (i,buffer,2);
  printf ("binary: %s\n",buffer);

int x, a=5, b=3;
  x=sprintf (buffer, "%d plus %d is %d", a, b, a+b);
  printf ("[%s] is a string %d chars long\n",buffer,x);

  return 0;
}

*/
