#include <stdio.h>
#include <math.h>

void pattern(char c, int x); // will print pattern

int totdig(int x); // no. of digits in the given input

int digit(int x, int i); // gives ith digit of the input number, i = 1, 2, 3, ...

char form(int n); // helper function, see definition for clear idea.

int main(void)
{
    char c;

    printf("Input: ");
    scanf("%d", &x);

    int n = totdig(x);

    c = form(n);

    pattern(c, x);


}
// Function definitions

int totdig(int x)
{
    int counter = 0;
    for (int i = 0; x != 0; i++)
    {
        x = x / 10;
        counter++;
    }
    return counter;
}

int digit(int x, int p) // p is the digit number. p = 1, 2, 3...
{
    int c;
    for (int j = 0; j < p; j++)
    {
        c = x % 10;
        x = x / 10;
    }
    return c;
}

char form(int n)
{
    char c;

    if (n == 2)
        c = '@';
    else if (n == 3)
        c = '#';
    else if (n == 4)
        c = '$';
    else if (n == 5)
        c = '&';
    else
        c = '.';

    return c;
}

void pattern(char c, int x)
{
    int n = totdig(x);
    // inner loop defines a row.
    // outer loop defines number of rows.
    for (int i = n; i > 0; i--) // i decrements for every row printed.
    {
        for (int j = n; j > i; j--)
        {
            printf("%c ", c); // each row has the character before the actual digit.
        }

        printf("%d\n", digit(x, i)); // prints digit at the end of each line of characters.
    }

}
