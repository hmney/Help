#include <stdio.h>

void ft_sort(int *tab, int size)
{
    int i;
    int rev;
    i = 1;
    while (i < size)
    {
        if (tab[i] > tab[i - 1])
        {
            rev = tab[i];
            tab[i] = tab[i - 1];
            tab[i - 1] = rev;
            i = 1;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int i;
    int n;
    int tab[] = {1, 5, 7, 99, 8 , 0};
    n = sizeof(tab) / sizeof(tab[0]);
    ft_sort(tab, n);
    for (i = 0; i < n; i++)
        printf("%d\n", tab[i]);
    return (0);
}
