#include<iostream>
using namespace std;

void pass_by_refrence(int arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        arr[i] = arr[i] * 200 ;
    }
}

bool linear_search(int arr[], int size , int element)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            return true ;
        }
    }

    return false;
}

void reverse_array(int arr[] , int size)
{
    int i = 0;
    int j = size-1 ;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main()
{
    //Creating Array
    int new_array[4]={3,77,10,12};



    //Accessing elements through loop
    for(int i = 0 ; i < 4 ; i++)
    {
        cout << new_array[i] << " " ;
    }

    cout << endl;
    cout << "Afer Passed By Refrence" << endl;
    
    //Pass By Refrence
    pass_by_refrence(new_array , 4);

    for(int i = 0 ; i < 4 ; i++)
    {
        cout << new_array[i] << " " ;
    }
       
    cout << endl; 

    //Linear Search
    int linear_array[5]={199,21,88,12,61};
    bool value = linear_search(linear_array,5,10);
    if(value)
    {
        cout << "Element Found" << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
        
    }

    cout << endl;
    cout << "After Swap\n";
    int rev_array[5]={46,82,99,100,21};

    //Reversing an array
    reverse_array(rev_array,5);

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << rev_array[i] << " " ;
    }
}