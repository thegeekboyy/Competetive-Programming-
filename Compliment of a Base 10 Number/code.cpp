// To Calculate compliment of a decimel number

#include<iostream>
using namespace std;

int compliment(int num)
{
    if(num==0)
        return 1;
    int mask = 0,m=num,ans;
    while(m!=0)
    {
        mask = (mask<<1) | 1;
        m = m>>1;
    }
    ans = (~num)&mask;
    return ans;
}
int main()
{
    int n;
    cin>>n;

    int ans = compliment(n);
    cout<<"Compliment of "<<n<<" is :" <<ans<<endl;
}
