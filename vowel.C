#include<stdio.h>
void main()
{
char c;
printf("Enter the character:");
scanf("%c",&c);
if(isalpha(c))
{
if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u')||(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
{
printf("Vowel");
}
else
{
printf("Consonant");
}
}
else
{
printf("Invalid");
}
}

