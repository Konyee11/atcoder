#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << '\n'
#else
#define debug(x) 0
#endif

void solve() {
  int N, A;
  cin >> N >> A;

  cout << (N * N) - A <<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t; // 複数ケースがある問題では有効に
    while (t--) solve();
}
