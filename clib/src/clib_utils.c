#include "clib_utils.h"

_data convert_to_bits(_data data, data_type types)
{
    switch (types) {
        case short_t:
            //someting to do here
            break;
        case int_t:
            //TODO
            break;
        case char_t:
            //TODO
            break;
        case long_t:
            //TODO
            break;
        case float_t:
            //TODO
            break;
        case double_t:
            //TODO
            break;
        case llong_t:
            //TODO
            break;
        case ldouble_t:
            //TODO
            break;
        case ushort_t:
            //TODO
            break;
        case uint_t:
            //TODO
            break;
        case uchar_t:
            //TODO
            break;
        case ulong_t:
            //TODO
            break;
    }
    return data;
}

float magical_sqrt(float x){
    float xhalf = 0.5f * x;
    int i = *(int*)&x;
    i = 0x5f3759df - (i>>1);
    x = *(float*)&i;
    x = x * (1.5f - xhalf * x * x);
    
    return 1/x;
}

int i_magical_pow(int x, int y){
    int p = x, n = 1;

    while(1)
    {
        if (n & 1)
            n = p * n;
        y = y >> 1;
        if (y == 0) return n;
        p = p * p
    }
}
