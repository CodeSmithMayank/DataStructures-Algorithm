#include<iostream>
using namespace std;
int main()
{
    double x = 2.00000; 
    int n = -2;
    double ans = 1;
    
    if(n<0)
    {
        x = 1/x;
        n = -(n);
    }

    while(n>0)
    {
        if(n%2==1)
        {
            ans*=x;
        }
        x*=x;
        n/=2;
    }

    cout << ans << endl;
}