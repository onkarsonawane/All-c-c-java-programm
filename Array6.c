#include<stdio.h>

int main()
{
  int Arr [3] [4] = {10,20,30,40,50,60,70,80,90,110,120};
 
 printf("%d\n",sizeof(Arr)); //48

 printf("%d",Arr[1][0]);   //50
 printf("%d",Arr[2][1]);   //100
 printf("%d",Arr[1][1]);   //60
 printf("%d",Arr[0][2]);   //30
 printf("%d",Arr[1][3]);   //80
 printf("%d",Arr[2][3]);   //120
 printf("%d",Arr[0][3]);   //40

return 0;
}