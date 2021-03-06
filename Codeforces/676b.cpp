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
double glass[1000];

int main(){
    std::ios::sync_with_stdio(false);
    int n, t;
    cin >> n >> t;
    int ans = 0;
    int index[] = {0, 1, 2, 4, 7, 11, 16, 22, 29, 37, 46};
    for (int i = 0; i < t; i++) {
        glass[1] += 1;
        for (int j = 1; j <= n; j++) {
            for (int k = 0; k < j; k++) {
                if (glass[index[j] + k] > 1) {
                    double aux = glass[index[j] + k] - 1;
                    glass[index[j] + k] = 1;
                    glass[index[j] + k + j] += aux / 2;
                    glass[index[j] + k + j + 1] += aux / 2;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < i; k++) {
            if (abs (glass[index[i]+ k] - 1) < 0.0000001) ans++;
        }
    }
    cout << ans << endl;
}
