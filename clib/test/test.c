#include "clib_utils.h"
#include <limits.h>
#include <stdio.h>
#include "test.h"

int main(void)
{
    double num = 65535;
    _data data;
    data.double_t = num;
    long i = 2147483656;
    convert_to_bits(data, int_t);
    num = magical_sqrt(num);
    printf("%d\n", INT_MAX);
    printf("%lf\n", num);
    printf("%ld\n", i);
    
    return 0;
}
