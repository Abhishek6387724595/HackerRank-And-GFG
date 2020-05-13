#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    long n,i,j,ld,rd,sum=0,total=0;
    ld=rd=0;
    long arr[200][200];
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        ld+=arr[i][i];
    }
    for(i=0;i<n;i++)
    {
        rd+=arr[i][n-i-1];
    }
    sum=ld-rd;
    //abs is used to the mod of the value
    total=abs(sum);
    cout<<total;
}
