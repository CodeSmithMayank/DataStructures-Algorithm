#include<iostream>
#include<vector>

using namespace std;

vector<int> PairSum_BruteForce(vector<int> vec , int target)
{
    vector<int> res ;
    
    for(int i = 0 ; i < vec.size() ; i++)
    {
        for(int j = i+1 ; j < vec.size() ; j++)
        {
            if(vec[i]+vec[j] == target)
            {
                res.push_back(i);
                res.push_back(j);
                break;
            }
        }
    }

    return res;
}

vector<int> PairSum_Optimised(vector<int> vec , int target)
{
    vector<int> res ;
    
    int start = 0 ;

    int end = vec.size() - 1 ;
    while(start<=end)
    {
        if(vec[start]+vec[end] == target)
        {
            res.push_back(start);
            res.push_back(end);
            break;
        }
        else if (( vec[start] + vec[end] ) > target)
        {
            end--;
        }
        else
        {
            start++;
        }

    }

    return res;
}


int main()
{
    vector<int> vec = {2,7,11,15} ;

    vector<int> result = PairSum_BruteForce(vec , 22);

    for(auto v : result)
    {
        cout << v << " " ;
    }

    cout << "After Optimised " << endl;
    
    vector<int> res = PairSum_Optimised(vec , 13);

    for(auto v : res)
    {
        cout << v << " " ;
    }
}