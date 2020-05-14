#include <bits/stdc++.h>

using namespace std;


int main()
{
    long i,total=0;
    int arr[5];
    for(i=0;i<5;i++)
    {

        cin>>arr[i];
         total+=arr[i];
    }
    //cout<<total<<endl;

    int *max,*min;
//max_element is used to find the greatest no in an element  ::  syntax:max_element[start,end]
//min_element is used to find the smallest no in an element  ::  syntax:max_element[start,end]

    max = max_element(arr,arr+5);
    min = min_element(arr,arr+5);
    

    //cout<<*max<<endl<<*min;
    long maximum = total-*min;
    long minimum = total-*max;
    cout<<minimum<<" "<<maximum;
}
