#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,j;
    cin>>n;
    
    for(i=0;i<n;i++){
        string str;
        cin>>str;

        for(j=0;j<str.length();j++){
            if(j%2==0)
            {
                cout<<str[j];                             //Hacker
                                                          //Rank
            }
        }cout<<" ";
        for(j=0;j<str.length();j++)
            {
                if(j%2!=0)
                    {
                    cout<<str[j];
                    }
                }cout<<"\n";
            }
    
    
    
    return 0;
}
