#include <bits/stdc++.h>
using namespace std;


int main() {
    
/*-------------With Vector--------------*/
    int a,n,mx = INT_MAX;
    vector<int> ar;
    cin >> n;
   
    //cout<<a<<" ";
    //cout<<n<<endl;
    for(int i = 0; i < n; i++){
        
         cin >> a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    for(int i = 0; i < ar.size() - 1; i++){
        if(ar[i+1]-ar[i] < mx)
        {
            mx = ar[i+1]-ar[i];
        }
    }
    cout << mx << endl;
    return 0;
}

/*------------------------Without Vectors-------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,mx=INT_MAX;
    
    
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
      
        cin>>a[i];
    }
    
    sort(a,a+n);

    int len = sizeof(a)/sizeof(0);
    
    for(i=0;i<len-1;i++)
    {
        if(a[i+1]-a[i] < mx)
            {
                mx = a[i+1]-a[i];
            }
    }cout << mx << endl;
    return 0;
}
