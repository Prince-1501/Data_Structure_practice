#include <iostream>
using namespace std;
int main()
{
    //char y= 'c';
    int x = 20;
    // declare pointer variable
    //int *ptr ;
    
    //ptr  = &x;
    
//    int *ptr = &x;
//    //char *pointer  = &y;
//
//    cout<<ptr<<endl;
//    cout<<*ptr<<endl;
    
    //int num = &x;
    
//    int *ptr;
//    int* ptr ;
//    int*ptr;
    
//    int *ptr = &x;
//    int **ptr1;
//    ptr1 = &ptr;
//    //ptr1= &x;
//    cout<<ptr1<<endl;  // adress of ptr
//    cout<<**ptr1<<endl;
    
    int a[]= {2,3,5,7};
    int *ptr ;
    int *ptr1;
    ptr = a;  // automatic stores addrss of first index
    // wrong --> ptr = &a;
    
    ptr1 = &a[0];
    cout<<ptr<<endl;
    cout<<ptr1<<endl;
    
    
}



