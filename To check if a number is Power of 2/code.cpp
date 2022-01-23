// To find if a number is power of 2

#include<iostream>
using namespace std;

int powerOfTwo(int num)
{
    int ans=1;
    for(int i=0;i<=31;i++)
    {
        if(ans > INT_MAX/2)
            return -1;

        ans = ans*2;

        if(num==ans)
            return i+1;
        else
            return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    
    int ans = powerOfTwo(n);
    cout<<ans<<endl;
    return 0;
}
