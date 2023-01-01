#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> cnt(101, 0);
  int ans = 0;
  int a, b, c;
  cin >> a >> b >> c;

  for (int i = 0; i < 3; i++) {
    int start, end;
    cin >> start >> end;
    for (int j = start; j < end; j++) {
      cnt[j]++;
    }
  }

  for (int i = 1; i < 101; i++) {
    if (cnt[i] == 1)
      ans += a;
    if (cnt[i] == 2)
      ans += 2 * b;
    if (cnt[i] == 3) {
      ans += 3 * c;
    }
  }

  cout << ans << endl;
  return 0;
}