#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  map<string, int> m;
  map<string, int>::iterator it;
  int N, QuerieType, mark;
  string name;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> QuerieType >> name;
    if (QuerieType == 1) {
      cin >> mark;
      mark += m[name];
      m.erase(name);
      // cout << mark << it->second << endl;
      m.insert(make_pair(name, mark));
      // std::cout << "---------------1111-----" << endl;
    } else if (QuerieType == 2) {

      m.erase(name);
      // std::cout << "---------------2222-----" << endl;
    } else if (QuerieType == 3) {
      it = m.find(name);
      if (it != m.end()) {
        std::cout << it->second << endl;
      } else {
        std::cout << 0 << endl;
      }
      // std::cout << "---------------3333-----" << endl;
    }
  }

  return 0;
}
