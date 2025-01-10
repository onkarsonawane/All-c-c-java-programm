#include<iostream>
using namespace std;

int main()
{ 
  int arr[5];      //Static memory

  int *ptr = NULL;

// step1 : Allocte the memory
  ptr = new int[5];
  
  //step2 : Use the memory
  //logic

  //step3 : Deallocate the memory
  delete []ptr;


    return 0;
}