#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int N;
  cin >> N;
  vector<int> v;
  int in;
  for (int i = 0; i < N; i++) {
    cin >> in;
    v.push_back(in);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
}
