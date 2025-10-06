#include<iostream>
#include<vector>
using namespace std;

int MajorityElement_BruteForce(vector<int> vec)
{
    int maj_ele = 0 ;
    for(int i = 0 ; i < vec.size() ; i++)
    {
        int element = vec[i] ;
        
        int frequencycount = 0 ;

        for(int j = 0 ; j < vec.size() ; j++)
        {
            if(element==vec[j])
            {
                frequencycount++;
            }
        }

        if(frequencycount>vec.size()/2)
        {
            maj_ele = element;
        }

        frequencycount = 0 ;
    }

    return maj_ele;
}

int MajorityElement_Moores(vector<int> vec)
{
    int freqeuency = 0 ; int ans = 0 ;

    for(int i = 0 ; i < vec.size() ; i++)
    {
        if(freqeuency == 0)
        {
            ans = vec[i] ;
        }
        
        if(ans == vec[i])
        {
            freqeuency++;
        }
        else
        {
            freqeuency--;
        }
    }

    return ans;
}

int main()
{
    vector<int> vec{3,3,4};

    int result = MajorityElement_BruteForce(vec);

    cout << "Before Moore's Voting " << result << endl;

    // For this question there's one more variation if returning any answer then check if frequency of that answer is greater that sizeofelements/2 then return answer otehrwise -1
       
    int res = MajorityElement_Moores(vec);

    cout << "After Moores's Voting " << res << endl;
    
}