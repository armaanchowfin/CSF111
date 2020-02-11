#include <stdio.h>
#include <cs50.h>
#include <math.h>

void pattern(char c, int x);

int totdig(int x);

int digit(int x, int i);

char form(int n);

int main(void)
{
    char c;

    int x = get_int("Input: ");

    int n = totdig(x);

    c = form(n);

    pattern(c, x);


}

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
    for (int i = n; i > 0; i--)
    {
        for (int j = n; j > i; j--)
        {
            printf("%c ", c);
        }

        printf("%d\n", digit(x, i));
    }

}
