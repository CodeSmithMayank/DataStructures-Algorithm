#include<iostream>

//We need to include this header file because implementation of vector is already done in STL , so for that we need to use this header file
#include<vector>
#include<algorithm>
using namespace std;

int singleNumber(vector<int>& nums)
{
      int res = 0 ;
    if(nums.size()==1)
    {
        return nums[0] ;
    }
    for(int i = 0 ; i < nums.size(); i++)
    {
       if(i==0)
       {
            if(nums[i]!=nums[i+1])
            {
                res = nums[i] ;
                break;
            }
           
       }
       else
       {
           if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
            {
                res = nums[i] ;
                break;
            } 
       }
    }

    return res;
}


int main()
{
    //Declaration of vector
    //First Way
    vector<int> vec ;

    //Second Way
    vector<int> secondvec = {3,12,3} ;

    //Third Way
    vector<int> thirdvec{33,10,28,129} ;

    //To Access vectors values
    cout << secondvec[0] << endl;
    cout << secondvec[1] << endl;

    cout << endl;

    cout << "Accessing through foreach loop" << endl;
    for (auto v : secondvec)
    {
        cout << v << endl;
    }

    cout << "Size of vector : " << secondvec.size() << endl;

    //To push element at the end and elements get add in same order
    vec.push_back(100);

    //To delete something from end
    vec.pop_back();

    //To print element from starting
    vec.front();

    //To access last element
    vec.back();

    //To access element from specific position :- at()
    // vec.at(0);

    //Size of vector
    cout << "Size of vector : " << secondvec.size() << endl;

    //Capacity of Vector
    cout << "Capacity of vector : " << secondvec.capacity() << endl;

    //LC Question :- Single Number 
    vector<int> nums = {8,3,1,1,3,3,8,0,0,12,12,11,11,818,818,10,10,772} ;
    sort(nums.begin() , nums.end());
    int Result = singleNumber(nums); 
    cout << "Our Single Number is : " << Result << endl;
    
}