#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf_BruteForce(vector<int>& nums) 
{
    vector<int> result ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        int tempprod = 1 ;
        for(int j = 0 ; j < nums.size() ; j++)
        {
            if(i!=j)
            {
                tempprod*=nums[j];
            }
        }
        result.push_back(tempprod);
    }
    return result;
}


  vector<int> productExceptSelf(vector<int>& nums) 
{
   int arr_size = nums.size() ;
   vector<int> result(arr_size,1) ; 
   vector<int> pref(arr_size,1);
   vector<int> suff(arr_size,1);
   
   for(int i = 1 ; i < arr_size ; i++)
   {
        pref[i] = pref[i-1] * nums[i-1] ;
   }

   
   for(int i = arr_size-2 ; i >=0 ; i--)
   {
        suff[i] = suff[i+1] * nums[i+1] ;
   }

  
   for(int i = 0 ; i < arr_size ; i++)
   {
        result[i] = pref[i] * suff[i] ;
   }

   return result; 

   /*For constant space
   
    int arr_size = nums.size() ;
   vector<int> result(arr_size,1) ; 
   
   for(int i = 1 ; i < arr_size ; i++)
   {
        result[i] = result[i-1] * nums[i-1] ;
   }

   int suffix = 1 ;
   for(int i = arr_size-2 ; i >=0 ; i--)
   {
        suffix*=nums[i+1];
        result[i]*=suffix;
   }

   return result; 
   
   
   */
}


int main()
{
    vector<int> nums{1,2,3,4};
    vector<int> result = productExceptSelf_BruteForce(nums);
    vector<int> res = productExceptSelf(nums);
   
}