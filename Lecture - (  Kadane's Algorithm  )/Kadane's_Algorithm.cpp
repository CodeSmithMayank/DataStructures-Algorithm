#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

//Brute Force Apporach :- O(n^3)
int Maximum_Subarray(vector<int> & nums)
{
    vector<int> result;
    vector<int> elesum;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        
        for(int j = i ; j < nums.size() ; j++)
        {
            for(int subarr = i ; subarr <= j ; subarr++ )
            {
                result.push_back(nums[subarr]) ;
            }

            int element_sum = 0 ;
            for(int elest = 0 ; elest < result.size() ; elest++)
            {
                element_sum+=result[elest];
            }

            elesum.push_back(element_sum) ;
            result.clear();

        }

        
    }

    int finalresult = 0 ;
    for(int start = 0 ; start < elesum.size() ; start++)
    {
        finalresult = max(finalresult , elesum[start]);
    }

    return finalresult;
}


//Optimised approach using kadane's algorithm
int Maximum_Subarray_Using_Kadanes(vector<int> vec)
{
    int current_sum = 0 ;
    int max_sum = INT_MIN;

    for(int i = 0 ; i < vec.size() ; i++)
    {
        current_sum+=vec[i]; 
        
        //we are finding max over here because of edge case let suppose an array contains all negative number , then if cs become 0 then we will not get that negative number
        max_sum = max(current_sum,max_sum);
        if(current_sum<0)
        {
            current_sum = 0 ;
        }
    }

    return max_sum;
}

int main()
{
    //For an array there would be no of subarrays = (n*(n+1))/2
    vector<int> vec{3,-4,5,4,-1,7,-8} ;
    int result = Maximum_Subarray(vec) ;
    cout << "Without Kadane's : " << result << endl;

    int res = Maximum_Subarray_Using_Kadanes(vec);
    cout << "Using Kadanes's : " << res << endl;
    
}