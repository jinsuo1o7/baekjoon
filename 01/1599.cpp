#include <bits/stdc++.h>
using namespace std;

int arr[26], n;
string ans, tmp;

int main() {
  scanf("%d", &n);
  while (n--) {
    cin >> tmp;
    arr[tmp[0] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (arr[i] >= 5) {
      ans += i + 'a';
    }
  }
  if (ans.size())
    cout << ans << '\n';
  else
    cout << "PREDAJA" << '\n';
  return 0;
}