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
#define pb push_back
#define mp make_pair
#define fst first
#define scd second
#define f(x, let) for(int let=0; let<x; let++)
#define ms(x, v) memset(x, v, sizeof x)
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pair<int, int> > vpi;
typedef set<int> si;
typedef set<int>::iterator sit;
const int MOD = 1000000007;
const int OO = 1000000000;
//REMEMBER LONG LONG INT
//REMEMBER TO INITIALZE THINGS
ll id[100007];

int main(){
    std::ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    f (n, i) {
        cin >> id[i];
    }
    ll aux = 0;
    while (aux * (aux+1ll) / 2ll < k) {
        aux++;
    }
    aux--;
    k -= aux * (aux+1ll) / 2ll;
    cout << id[k-1] << endl;
}
