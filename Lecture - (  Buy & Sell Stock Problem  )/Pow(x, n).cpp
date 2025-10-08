#include<iostream>
using namespace std;

double myPow(double x, int n) 
{
        long binaryform = n ;
        double ans = 1 ;
        if(n<0)
        {
            x = 1/x;
            binaryform = -binaryform ;
            
        }
        while(binaryform > 0)
        {
            if(binaryform % 2 == 1)
            {
                ans*= x;
            }
            x*=x;
            binaryform/=2 ;
        }

        return ans;
}

int main()
{
    double result = myPow(2.00000 , -2);
    cout << result << endl;
}