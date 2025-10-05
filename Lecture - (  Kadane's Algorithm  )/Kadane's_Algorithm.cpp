#include<iostream>
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


int main()
{
    //For an array there would be no of subarrays = (n*(n+1))/2
    vector<int> vec{3,-4,5,4,-1,7,-8} ;
    int result = Maximum_Subarray(vec) ;
    cout << result << endl;
    
}