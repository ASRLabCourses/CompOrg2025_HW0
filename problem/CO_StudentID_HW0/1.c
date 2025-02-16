#include <errno.h>
#include <stdio.h>

int main()
{
    int a, b;
    FILE *input = fopen("../input/1.txt", "r");
    fscanf(input, "%d %d", &a, &b);
    fclose(input);
    asm volatile(/*Your code*/);
    printf("%d\n", a);
    return 0;
}
