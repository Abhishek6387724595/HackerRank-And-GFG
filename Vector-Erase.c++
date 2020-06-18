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
   //cout<<n<<endl;
   for(i=0;i<n;i++)
   {
       cin>>a;
       ar.push_back(a);
   }

   int n1;
   cin>>n1;

   int n2,n3;
   cin>>n2>>n3;

   ar.erase(ar.begin()+n1-1);

   ar.erase(ar.begin()+n2-1,ar.begin()+n3-1);

   cout<<ar.size()<<endl;

   for(i=0;i<ar.size();i++)
   {
       cout<<ar[i]<<" ";
   }

}
