#include<stdio.h>
 #include<string.h>
 void main()
 {
 	char str[100];
 	char str2[100];
 	printf("enter the  str\n");
 	scanf("%[^\n]s",str);
 	strncpy(str2,str,8);
 	printf("%s",str2);
 }