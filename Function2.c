#include<stdio.h>

//Function Defination
int Addition(int Value1, int Value2)
{
    int Result = 0;                      //local variable

    Result = Value1 + Value2;

    return Result;
}
int main()                               //Enter point function
{
    int No1 = 0, No2 = 0, Ans = 0;       //local variables
    
     printf("Enter first number : \n");
     scanf("%d" ,&No1);

     printf("Enter second number : \n");
     scanf("%d" ,&No2);

     Ans = Addition(No1, No2);            //function call
  
     printf("Addition is : %d\n",Ans);
    return 0;
}