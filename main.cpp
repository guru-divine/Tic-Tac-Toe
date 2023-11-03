//Author: DIVYA RAJ (aka guru_divine)
#include <bits/stdc++.h>
#define nl "\n"
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define sz(arr) (int)arr.size()
#define vi vector<int>
#define vs vector<string>
#define pii pair<int, int>
#define all(arr) arr.begin(), arr.end()
using namespace std; 

void solve() {
    cout << "Welcome to the world of games" << nl;
    

    cout << "~~~~~TIC-TAC-TOE~~~~~" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 1 || 2 || 3 ||" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 4 || 5 || 6 ||" << nl;
    cout << "++---++---++---++" << nl;
    cout << "|| 7 || 8 || 9 ||" << nl;
    cout << "++---++---++---++" << nl;

    int board[9] = {0};

    int cnt_moves = 0;
    while(cnt_moves < 9) {
        cout << "Enter your move: ";
        int mv; cin >> mv;
        
    }

}

signed main() {
    // freopen("inp.txt", "r", stdin);
    // freopen("out.txt", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    solve();
    return 0;
}