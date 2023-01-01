#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(9);
  int total = 0;
  for (int i = 0; i < v.size(); i++) {
    cin >> v[i];
    total += v[i];
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    for (int j = i + 1; j < v.size(); j++) {
      if (total - v[i] - v[j] == 100) {
        for (int k = 0; k < v.size(); k++) {
          if (k == i || k == j)
            continue;
          cout << v[k] << endl;
        }
        return 0;
      }
    }
  }

  return 0;
}