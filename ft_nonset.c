#include <unistd.h>

 void *ft_memset(void *s, int c, int n)
{
    int    j;
    char r[] = "\0";

    j = 0;

    while (j <= n)
    {
        r[j] = c;
        j++;
    }
    s = &r[];
	    printf("%d ", *s);
    return (0);
}

#include <stdio.h>
int main(void)
{
    int s = 5;
    int d = 'a';
    void *b;
    ft_memset(b, d, s);

    return (0);
}