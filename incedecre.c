#include<stdio.h>
int main()
{
   float a,b,c;
   printf("enter the value of a&b");
   scanf("%f%f",&a,&b);
   c=a++ + ++b;
   printf("%f\n%f\n%f\n",a,b,c);
   c= ++b - --b - --a + a++;
   printf("%f\n%f\n%f\n",a,b,c);
   c=++a * --b - a++ / --a;
   printf("%f\n%f\n%f",a,b,c);
   return 0;
}