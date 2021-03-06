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

int main(){
    std::ios::sync_with_stdio(false);
    string s;
    cin >> s;
    int k;
    cin >> k;

    vector<char> v;
    for (char c: s) v.pb (c);
    stack<char> right;
    queue<char> q;

    while (k--) {
        int flip = 0;
        for (int i = v.size () - 1; i >= 0; i--) {
            if (flip) right.push (v[i]);
            else q.push (v[i]);
            flip = !flip;
        }
        while (!q.empty ()) {
            right.push (q.front ());
            q.pop ();
        }
        int i = v.size () - 1;
        while (!right.empty ()) {
            v[i--] = right.top ();
            right.pop ();
        }
    }
    f (v.size (), i) cout << v[i];
    cout << endl;
}
