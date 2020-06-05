#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,temp,n;
    cin>>n;
    int shift = 0;
    int a[n];
    for(i=0;i<n;i++){cin>>a[i];}
    //for(i=0;i<n;i++){cout<<arr[i];}
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j = i-1;    
        while(j>=0 && a[j]>temp)
    {
        a[j+1] = a[j];
        j--;
    shift++;    
    }
    
    a[j+1] = temp;
        
    } 
     //for(i=0;i<n;i++){cout<<a[i]<<" ";}
     cout<<shift;
}
