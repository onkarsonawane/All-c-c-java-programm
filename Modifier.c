#include<stdio.h>

int main()
{
    int a = 10;      //4 byte
    short int b=10;  //2 byte
    long int c=10;   //4 byte depends on compiler 8 bytes also

    printf("%d\n",sizeof(a));
     printf("%d\n",sizeof(b));
      printf("%d\n",sizeof(c));

      return 0;
}