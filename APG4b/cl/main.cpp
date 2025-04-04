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

  vector<string> op(N);
  vector<int> B(N);

  for (int i = 0; i < N; i++) {
    cin >> op.at(i) >> B.at(i);
    if (op.at(i) == "+") {
      A += B.at(i);
    } else if (op.at(i) == "-") {
      A -= B.at(i);
    } else if (op.at(i) == "*") {
      A *= B.at(i);
    } else if (op.at(i) == "/") {
      if (B.at(i) == 0) {
        cout << "error" << endl;
        return;
      }
      A /= B.at(i);
    }
    cout << i + 1 << ":" << A << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();
}
