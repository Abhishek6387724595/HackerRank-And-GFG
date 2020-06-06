#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,i,j,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){cin>>a[i];}
    //for(i=0;i<n;i++){cout<<a[i];}

    for(i=1;i<n;i++){

        temp = a[i];
        j = i-1;
        while(j>0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = temp;
    }

   // for(i=0;i<n;i++){cout<<a[i]<<" ";}

   /* 
    int t=0;
    cin>>t;
    t=n/2;
    cout<<floor(t); */

    int t= 0;
    t = n/2;
    int final;
    final = floor(a[t]);
    cout<<final;

    /*if(n%2==1)
    {
        cout<<a[n-1]/2;
    }*/
    
}
