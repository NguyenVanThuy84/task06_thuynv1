#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	char ch;
	int i;
	float f;
	double d,result;
	
	printf("nhap char: \n");
	scanf("%c",&ch);
	printf("nhap i: \n");
	scanf("%d",&i);
	printf("nhap f: \n");
	scanf("%f",&f);
	printf("nhap d \n");
	scanf("%lf",&d);
	result = (ch/i)+ (f*d) - (f+i);
	printf("result =  %lf", result);
	
	return 0;
}
