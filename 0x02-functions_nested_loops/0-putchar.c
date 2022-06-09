#include "main.h"
/**
*main - program that prints _putchar
*
*Description: prints _putchar
*Return: always 0 (Success)
*/
int main(void)
{
char word [9] = "_putchar\n";
 int i = 0;
 while (i < 8)
{
_putchar(word[1]);
 i++;
}
 _putchar('\n');
return (0);
}
