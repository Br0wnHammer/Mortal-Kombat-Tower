#include <bits/stdc++.h> 
using namespace std;
#define all(x) x.begin(), x.end()
#define fo(i, n) for(int i = 0; i < n; i++)
#define ll long long
#define vl vector<ll>
#define vi vector<int>
#define ui unordered_set<int>
#define pb(x) push_back(x)

void solve(){
    int n;
    cin >> n;
    vi a(n);

    fo(i, n)
        cin >> a[i];
    
    int count = 0, p = 1;
    while(p < n){
        if (a[p] == 1){
            int o = 0, j = p;
            while(a[j] == 1 and j < n)
                o++, j++;
            count += o / 3;
            p = j;
        }
        else 
            p++;
    }
    if (a[0] == 1)
        count++;
    
    cout << count << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
        solve();

    return 0;
}
