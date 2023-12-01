# include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define M_PI 3.14159265358979323846
#define print(arr) for(auto x: arr) cout << x << ' '; cout << "\n";
 
int solve(string s){
    int a,b;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            a = s[i] - '0';
            break;
        }
    }
    for(int i = s.length()-1; i >= 0 ; i--){
        if(s[i] >= '0' && s[i] <= '9'){
            b = s[i] - '0';
            break;
        }
    }
    return 10*a + b;
}
 
int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    ll ans = 0;
    string s;
    while(cin >> s){
        ans += (ll)solve(s); 
    }
    cout << ans << endl;
}
