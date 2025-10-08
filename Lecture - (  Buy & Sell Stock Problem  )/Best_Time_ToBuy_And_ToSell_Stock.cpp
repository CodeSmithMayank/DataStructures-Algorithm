#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices) 
{
        int max_profit = 0 ; int bestbuy = prices[0] ;
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(prices[i] > bestbuy)
            {
                max_profit = max(max_profit, prices[i]-bestbuy) ;
            }
            
            bestbuy = min(bestbuy , prices[i]);
        }

        return max_profit ;
}

int main()
{
    vector<int> prices{7,1,5,3,6,4} ;
    int result = maxProfit(prices);
    cout << result << endl;
}