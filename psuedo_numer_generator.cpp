#include<iostream>
#include<math.h>
using namespace std;
long long int n,i,j,k,l,digit,count=0,sum=0, h=pow(10,9)+7,r;
long long int call(long long int f)
{
    sum=0;
    while(f>0)
    {
        digit=f%10;
        sum=sum+pow(digit,2);
        f=f/10;
    }
    return sum;
}

int main()
{
    cin>>r;
    n=pow(10,r);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
       
            if(call(i)==call(j))
            {
                    // cout<<i<<j<<endl;
                count++;
            }
        }
    }
    
    cout<<(count%h)<<endl;
    return 0;
}