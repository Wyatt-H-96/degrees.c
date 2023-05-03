/*
how to covert fahrenheit to celsius
formula
c = (f-32)/1.8
*/

#include<stdio.h>
int main(void)
{
int fahrenheit, celsius;

printf("What is the degrees in fahrenheit?: ");
scanf("%d", &fahrenheit);
celsius = (fahrenheit - 32)/1.8;
printf("%d fahrenheit is %d celsius", fahrenheit, celsius);

return 0;


}