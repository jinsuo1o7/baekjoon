#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int i = 0, j = s.size() - 1;
  while (i <= j) {
    if (s[i] == s[j]) {
      i++;
      j--;
    } else {
      cout << 0 << endl;
      return 0;
    }
  }
  cout << 1 << endl;
  return 0;
}

void solution2() {
  string s, temp;
  cin >> s;
  temp = s;
  reverse(temp.begin(), temp.end());
  if (temp == s)
    cout << 1 << "\n";
  else
    cout << 0 << "\n";
}