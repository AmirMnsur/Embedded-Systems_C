/*
 *  Created on: September 21, 2024
 * 		  Author: AmirMnsur
 *
 *	>>[ strings ]<<
 */


#include <stdio.h>

int main()
{
    char name[30];
   printf("Enter your name :");
   fflush(stdout);
   scanf("%s",name);

   printf("Hi,%s\n",name);
   fflush(stdout);

   return 0;
}
