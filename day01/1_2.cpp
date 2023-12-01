# include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define M_PI 3.14159265358979323846
#define print(arr) for(auto x: arr) cout << x << ' '; cout << "\n";
 
int solve(string s){
    string arr[19] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"};
    int a,b;
    vector <pair <int,string>> v1;
    for(int i = 0; i < 19; i++){
        size_t index = s.find(arr[i]);
        if (index != string::npos) v1.push_back({(int)index, arr[i]});
    }
    sort(v1.begin(), v1.end());
    string temp = v1[0].second;
    if(temp.length() == 1) a = stoi(temp);
    else if(temp == "one") a = 1;
    else if(temp == "two") a = 2;
    else if(temp == "three") a = 3;
    else if(temp == "four") a = 4;
    else if(temp == "five") a = 5;
    else if(temp == "six") a = 6;
    else if(temp == "seven") a = 7;
    else if(temp == "eight") a = 8;
    else if(temp == "nine") a = 9;
    vector <pair <int,string>> v2;
    for(int i = 0; i < 19; i++){
        size_t index = s.rfind(arr[i]);
        if (index != string::npos) v2.push_back({(int)index, arr[i]});
    }
    sort(v2.begin(), v2.end());
    temp = v2[v2.size()-1].second;
    if(temp.length() == 1) b = stoi(temp);
    else if(temp == "one") b = 1;
    else if(temp == "two") b = 2;
    else if(temp == "three") b = 3;
    else if(temp == "four") b = 4;
    else if(temp == "five") b = 5;
    else if(temp == "six") b = 6;
    else if(temp == "seven") b = 7;
    else if(temp == "eight") b = 8;
    else if(temp == "nine") b = 9;
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
