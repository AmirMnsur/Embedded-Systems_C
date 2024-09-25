/**
  ******************************************************************************
  * @file    main.c
  * @author  AmirMnsur by STM32CubeIDE
  * @version
  * @brief   test 2
  ******************************************************************************
*/

#include <stdio.h>

/* global variables */
int g_data1 = 4000;
int g_data2 = 200;


int main(void)
{
	int result = 0;

	result = 65535;

	printf("Result = %d\n",result);
	fflush(stdout);
	scanf("%u",&result);
	printf("Result = %u\n",result);

	//for(;;);
}
