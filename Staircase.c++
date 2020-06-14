#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {


}

int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int s=0;s<n-i;s++) cout<<" ";
        for(int j=0;j<i;j++) cout<<"#";
        cout<<endl;
    }
}
