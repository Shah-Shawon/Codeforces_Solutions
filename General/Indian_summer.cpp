#include <bits/stdc++.h>
using namespace std;
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
#define ll long long int

int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);//if b==0 then return a else return gcd(b,b%a)
}
vector<ll>bld_pre_sum(const vector<ll>&arr){
    int n = arr.size();
    vector<ll>pref(n);
    pref[0]=arr[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+arr[i];
    }
    return pref;
}
int rangesum(const vector<ll>&pref,int l,int r){
    if(l==0)    return pref[r];
    return pref[r]-pref[l-1];
}
void solve(){
    
}
 
int main(){
    int t;
    cin >> t;
    set<string>vs;
    cin.ignore();
    for(int i=0;i<t;i++){
        string s;
        getline(cin,s);
        vs.insert(s);
    }
    cout<<vs.size()<<endl;
}
