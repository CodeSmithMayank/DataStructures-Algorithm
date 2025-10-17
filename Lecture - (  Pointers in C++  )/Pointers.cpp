#include<iostream>
using namespace std;
int main()
{
    int no = 10 ;
    // To print address of somerthing u can use ( addressof ) or ( & )
    cout << "Address of no variable is : " << &(no) << endl;
    //* means this variable is of pointer type
    int* ptr = &no ;
}