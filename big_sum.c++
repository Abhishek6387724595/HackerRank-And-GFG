#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,i;
    cin>>n;
    long a[n];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    long sum = 0;
    for(i=0;i<5;i++)
    {
        sum+=a[i];
    }
    cout<<sum;

}
