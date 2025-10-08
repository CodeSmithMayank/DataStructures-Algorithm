#include<iostream>
#include<vector>
using namespace std;

//This will give TLE because time complexity over here is O(n^2) which performs 10^10 operations but on coding platforms in second only atmost 10^8 performs
int Brute_Force(vector<int> height)
{
    int max_height = 0 ;
    for(int i = 0 ; i < height.size() ; i++)
    {
        
        for(int j = i+1 ; j < height.size() ; j++)
        {
            int tempheight = min(height[i],height[j]) * (j-i) ;
            max_height = max(max_height,tempheight);
        }
    }

    return max_height;
}

// Here increment or decrement only depends on that height which is less as compared to other because there's no point for opposite one

int Using_Two_Pointer(vector<int> height)
{
    int i = 0 ; int j = height.size() - 1 ;
    int max_amount = 0 ;
    while(i<j)
    {
       int heightdiff = min(height[i],height[j]) * ( j-i ) ;
       max_amount = max(max_amount,heightdiff);

        if(height[i]<height[j])
        {
           i++;
        }
        else 
        {
            j--;
        }

    }

    return max_amount ;
}


int main()
{
    vector<int> height{1,8,6,2,5,4,8,3,7} ;
    
    int result = Brute_Force(height) ;
    
    cout << result << endl;

    int res = Using_Two_Pointer(height);
    cout << res << endl;
}