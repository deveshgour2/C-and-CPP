#include<stdio.h>
int main ()
{
    char ch;
    printf("enter the character ch");
    scanf("%c",&ch);
    (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?printf("%c is a vowel",ch):printf("%c is consonant",ch);
	return 0;
}