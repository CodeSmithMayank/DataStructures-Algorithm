#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) 
{
    int mp = 0;
    //basically here we are assuming each prices as a selling day
    int bestbuy = prices[0];
    for(int s = 1 ; s < prices.size() ; s++)
    {
        if(prices[s]>bestbuy)
        {
            mp = max(mp,prices[s]-bestbuy);
        }
        bestbuy = min(prices[s],bestbuy);
    }
    return mp;    
}

int main()
{
    vector<int> prices{7,1,5,3,6,4};
    cout << maxProfit(prices) << endl;
}