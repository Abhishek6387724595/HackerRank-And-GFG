#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    int temp;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){cin>>arr[i];}
    //for(i=0;i<n;i++){cout<<" "<<arr[i];}

    for(i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>temp)
        {
            
            arr[j+1] = arr[j];
            j--;
            //for(i=0;i<n;i++){cout<<arr[i]<<" ";}
            //cout<<endl;
        }
        arr[j+1] = temp;

        
    }
    for(i=0;i<n;i++){cout<<arr[i]<<" ";}
}
