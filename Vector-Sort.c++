#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   vector<int> ar;
   int i,n,a;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>a;
       ar.push_back(a);
   }
   sort(ar.begin(),ar.end());
   for(i=0;i<n;i++)
   {
       cout<<ar[i]<<" ";
   }
}
