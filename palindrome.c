#include <stdio.h>
int main()
{
int n, rev = 0, rem, number;

printf(“Enter an integer: “);
scanf(“%d”, &n);

number = n;

while( n!=0 )
{
rem = n%10;
rev = rev*10 + rem;
n /= 10;
}

if (number == rev)
printf(“\n%d is a palindrome\n”, number);
else
printf(“\n%d is not a palindrome\n”, number);

return 0;
}
