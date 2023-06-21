#include "main.h"
/**
 * main - Test function for positive or negative
 * Return: 0
 */
int main(void)
{
 int i;
 i = 0;
 positive_or_negative(i);
return (0);
}
================================================
1-main.c CODE
#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
int main(void)
{
 int i;
 printf("Infinite loop incoming :(\n");
 i = 0;
 /*while (i < 10)*/
 /*{*/
 /* putchar(i);*/
 /*}*/
 printf("Infinite loop avoided! \\o/\n");
 return (0);
}
