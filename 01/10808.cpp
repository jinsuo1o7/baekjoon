#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> arr(26);
  string str;
  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    int idx = str[i] - 'a';
    arr[idx]++;
  }
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i] << ' ';
  }
  cout << endl;
  return 0;
}