#include<iostream>
using namespace std;

void changevalue(int* x)
{
   *x = 200;
}

int main()
{
    int no = 10 ;
    cout << "Address of no variable is : " << &(no) << endl;
    int* ptr1 = &no ;
    cout << "Address of Ptr1 " << &ptr1 << endl;
    cout << "value store at Ptr1 " << ptr1 << endl;
    int** ptr2 = &ptr1;
    cout << "Address of Ptr2 " << &ptr2 << endl;
    cout << "value store at Ptr2 " << ptr2 << endl;
    int* ptr3 = NULL;
    cout << "Null Pointer " << ptr3 << endl;

    int a = 5 ;
    int* p = &a ;
    int**q = &p ;
    cout << *p << endl; //5
    cout << **q << endl; //5
    cout << &a << endl; //Adress of a
    cout << p << endl; //address of a 
    cout << *q << endl; //value at p
    
    //PassByRefrence
    int x = 100 ;
    changevalue(&x);
    cout << "After Change " << x << endl;

    int arr[5] = {1,2,3,4,5};
    cout << "Address of arr " << arr << endl;
    cout << "Address of first element in arr " << &arr[0] << endl;

    int d = 100 ;
    int*b = &d;
    cout << "Address Of a " << &d << endl;
    cout << "Address Of b " << b << endl;
    cout << "After increment in address Of b " << ++b << endl;
    cout << "After increment in address Of b " << ++b << endl;

    int newarr[5] = {1,2,3,4,5};
    cout << "value at 0 " << arr[0] << endl;
    int* add = newarr;
    add++;
    add++;
    add++;
    cout << "value at 3 " << *(add) << endl;

}