#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calculate(int firstNumber,int secondNumber){
	if(firstNumber > 0 && secondNumber > 0){	
		return firstNumber + secondNumber;
	}
	
	return -1;	
	
}
		

int main(int argc, char *argv[]) {


	
	int a = 10;
	
	while (a < 10)
	{
		printf("%d \n",a);
		printf("deger artiliyor \n");
		a++;
	}
	
	
	return calculate(-4,2);
}
