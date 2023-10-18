#include <stdio.h>
#define MAX 1000
size_t fibo[MAX];

size_t getFib(size_t n)
{
    if (n <= 2)
    {
        return n;
    }

    if (fibo[n] != 0)
    {
        return fibo[n];
    }

    fibo[n] = getFib(n - 1) + getFib(n - 2);

    return fibo[n];
}

int main(){
    int n = 5;
    printf("%lu\n", getFib(n));
}