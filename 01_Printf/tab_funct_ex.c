#include <stdlib.h>
#include <stdio.h>

typedef int(*fp_marie)();

int multiply(int nb)
{
    return (nb * 2);
}

int divide(int nb)
{
    return (nb / 2);
}

fp_marie    idformat(int c)
{
    fp_marie    *storage;

    storage = (fp_marie[128]){
        (void *)0,
    ['c'] = multiply,
    ['d'] = divide,
    };
    return (storage[c]);
}

int main(void)
{
    fp_marie    print;
    int res;

    print = idformat('d');
    res = printf("%d\n", print(42));
}
