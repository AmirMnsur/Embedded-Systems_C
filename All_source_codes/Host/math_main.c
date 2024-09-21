/*
 *  Created on: September 21, 2024
 * 		  Author: AmirMnsur
 *
 *	>>[ math_main ]<<
 */

#include <stdio.h>
#include "math.h"

int main(void)
{
	printf("Add : %X\n",math_add(0x0FFF1111 , 0x0FFF1111 ) );

	printf("Mul : %I64x\n",math_mul(0x0FFF1111 , 0x0FFF1111 ) );

	printf("Div : %0.2f\n", math_div(n1, n2));

	return 0;
}
