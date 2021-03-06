#include <bits/stdc++.h>
/*
#include <iostream>
#include <cstring>
#include <climits>
#include <algorithm>
#include <vector>
#include <set>
#include <string>
#include <map>
*/
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define f(x, let) for(int let=0; let<x; let++)
#define ms(x, v) memset(x, v, sizeof x)
#define vi vector<int>
#define si set<int>
#define vit vector<int>::iterator
#define sit set<int>::iterator
#define MOD 1000000007
#define OO INT_MAX
using namespace std;
typedef long long ll;
//REMEMBER TO DECLARE GLOBAL VARIABLES

int main(){
    std::ios::sync_with_stdio(false);

    vi ap(100005, 1), p;
    for(int i=2; i<1000; i++){
        if(!ap[i]) continue;
        for(int j=i*i; j<=100000; j+=i){
            ap[j] = 0;
        }
    }
    for(int i=2; i<=100000; i++){
        if(ap[i]) p.pb(i);
    }

    ll t;
    cin >> t;
    while(t--){
        int a, b, n, ans=0;
        cin >> a >> b >> n;
        while(b>=a){
            int fts=0, aux=0;
            while(aux<p.size() && p[aux]<=b){
                if(b%p[aux]==0) fts++;
                aux++;
            }
            if(fts == n) ans++;
            b--;
        }
        cout << ans << "\n";
    }
}
