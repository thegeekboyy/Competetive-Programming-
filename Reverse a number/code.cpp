// To Reverse a number and Return 0 if it overflows else return reverse of that number

#include<iostream>
using namespace std;
int Reverse(int num)
{   
    int ld,ans=0,n=num;
    while(num>0)
    {
        ld = num%10;
        if((ans>INT_MAX/10) || (ans<INT_MIN/2))
            return 0;
        ans = ans*10 + ld;
        
        num/=10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int ans  = Reverse(n);
    cout<<ans<<endl;
}
