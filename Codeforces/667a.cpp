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
const double EPS = 0.00000001;

int main(){
    std::ios::sync_with_stdio(false);
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double tot = 3.1415926*(d/2)*(d/2)*h;
    double inc = 3.1415926*(d/2)*(d/2)*e;
    double delta = v - inc;
    if (delta < EPS) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        cout << tot/delta << endl;
    }
}
