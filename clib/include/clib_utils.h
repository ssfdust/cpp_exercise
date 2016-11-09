typedef enum _data_type { short_t, int_t, char_t, long_t, \
                float_t, double_t, llong_t, ldouble_t, \
                ushort_t, uint_t, uchar_t, ulong_t
} data_type;

typedef union __data {
    short short_t;
    int int_t;
    char char_t;
    long long_t;
    float float_t;
    double double_t;
    long long llong_t;
    long double ldouble_t;
    unsigned short ushort_t;
    unsigned uint_t;
    unsigned char uchar_t;
    unsigned long ulong_t;
} _data;
    
extern _data convert_to_bits(_data data, data_type types);
extern float magical_sqrt(float num);
