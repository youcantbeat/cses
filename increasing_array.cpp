#include<iostream>
#include<algorithm>
#define lli long long int
using namespace std;
int main(){
    
    lli n;
    cin >> n;
    lli a[n];
    for(lli i = 0; i<n; i++){
        cin >> a[i];
    }
    lli total = 0, m = a[0];
    for(lli i = 0; i<n; i++){
        total += max(9LL, m-a[i]);
        m = max(m, a[i]);
    }
    cout << total << endl;
    return 0;
}