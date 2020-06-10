#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
/*----------------------with vector---------------------*/


int main()
{
 int n;
 int x;
 cin>>n;
 vector<int> v(n);

for(int i=0;i<n;i++)
{
  cin>>x;
  v.push_back(x);    
}

sort(v.rbegin(),v.rend());
unsigned long long int ans=0;

for(int i=0;i<n;i++)
ans+=v[i]*pow(2,i);

cout<<ans;
}


/*-----------------------------Without Vector(my code)------------------------------*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
 int i,n;
 cin>>n;
 int a[n];

for(i=0;i<n;i++)
{
    cin>>a[i];    
}
sort(a, a + n, greater<int>()); 

int ans=0;

for(i=0;i<n;i++)
{
    ans+=a[i]*pow(2,i);
}

cout<<ans;
}