#include<stdio.h>
int main() {
	float P,R,T,SI;
    printf("emter the value of P");
    scanf("%f/n",&P);
    printf("enter the value of R");
    scanf("%f/n",&R);
    printf("enter the value of T");
    scanf("%f/n",&T);
	SI=(P*R*T)/100;
	printf("SI is =%f\n",SI);
	return 0;
}