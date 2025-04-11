#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#define debug(x) cerr << #x << ": " << x << '\n'
#else
#define debug(x) 0
#endif

bool is_odd(int n) { return n % 2 == 1; }

void solve() {
  int a, b;
  cin >> a >> b;

  if (is_odd(a * b)) {
    cout << "Odd" << '\n';
  } else {
    cout << "Even" << '\n';
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();
}
