#include<stdio.h>

int main()
{
    char c = 'M';
    int i =11;
    float f =3.14;
    double d = 3.9987;

    int *cptr =&c;
    char *iptr = &i;
    float *fptr = &f;
    double *dptr = &d;

    return 0;
}

/*
 i            11
 c            M
f             3.14
d             3.9987
&i            200
&f            300
&d            400
&c            100
sizeof(i)     4 
sizeof(f)     4
sizeof(d)     8
sizeof(c)     1
iprt          200
cptr          100
fptr          300
dptr          400
*iprt         11
*fptr         3.14
*dptr         3.9987
*cptr         M
sizeof(iptr)  8
sizeof(cptr)  8
sizeof(fptr)  8
sizeof(dptr)  8

*/