#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
using ll = long long;
using vll = vector<ll>;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
#define pb push_back


// Merge sort Implementation using mg and mergesort
void mg(vll &v, ll left, ll mid, ll right){
    vll res; ll l = left; ll r = mid+1;
    while(l<=mid || r<=right){
        if(l>mid || (r<=right && v[l]>v[r])) res.pb(v[r++]);
        else if(r>right || (l<=mid && v[l]<=v[r])) res.pb(v[l++]);
    }
    for(ll i = 0; i < res.size(); i++) v[i+left] = res[i];
}
void mergesort(vll &v, ll left, ll right){
    if(left>=right) return;
    ll mid = (left+right)/2;
    mergesort(v,left,mid);
    mergesort(v,mid+1,right);
    mg(v,left,mid,right);
}


// Modular inverse of a mod m
ll ModularInverse(ll a, ll m) {
    if(a<=1) return a;
    else return m-(m/a)*ModularInverse(m%a,m)%m;
}


// Generates Permutation
void permutation(vll v){
    do{
        for(auto i:v) cout << i << " ";
        cout << '\n';
    } while(next_permutation(v.begin(), v.end()));
}


void solve(){

    
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    // Totient function using sieve
    vll phi(1000001);
    for(ll i = 0; i <= 1000000; i++) phi[i] = i;
    for(ll i = 2; i <= 1000000; i++){
        if(phi[i]==i){
            for(ll j = i; j <= 1000000; j+=i) phi[j] -= phi[j]/i;
        }
    }

    // ll tt; cin >> tt;
    // while(tt--)
        solve();
    
    return 0;
}
