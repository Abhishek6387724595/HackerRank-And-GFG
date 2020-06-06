#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int count[100];
    for (int i = 0; i < 100; i++) {
        count[i] = 0;
    }
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        count[temp]++;
    }
    for (int i = 0; i < 100; i++) {
        cout << count[i] << " ";
    }
    return 0;
}
