
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;
int binarySearch(vector<int> v, int l, int r, int x) {
  int mid = l + (r - l) / 2;
  if (r >= l) {

    // cout << (arr[mid]) << endl;
    // If the element is present at the middle
    // itself
    if (v[mid] == x) {
      while (v[mid] == x) {
        mid--;
      }

      return mid + 2;
    }

    // If element is smaller than mid, then
    // it can only be present in left subarray
    if (v[mid] > x)
      return binarySearch(v, l, mid - 1, x);

    // Else the element can only be present
    // in right subarray
    return binarySearch(v, mid + 1, r, x);
  }

  // We reach here when element is not
  // present in array
  return -1 * (mid + 1);
}

int main() {
  int N, N_;
  cin >> N;
  vector<int> v;
  int in;
  for (int i = 0; i < N; i++) {
    cin >> in;
    v.push_back(in);
  }
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> in;
    N_ = binarySearch(v, 0, v.size() - 1, in);
    if (N_ > 0) {
      cout << "Yes " << N_ << endl;
    } else {
      cout << "No " << -N_ << endl;
    }
  }
  // cout << *v.begin() << endl << *(v.end() - 1) << endl << v[0] << endl;
  // Enter your code here. Read input from STDIN. Print output to STDOUT

  return 0;
}

/* lower_bound/upper_bound example
#include <algorithm> // std::lower_bound, std::upper_bound, std::sort
#include <iostream>  // std::cout
#include <vector>    // std::vector

int main() {
  int myints[] = {10, 20, 30, 30, 20, 10, 10, 20};
  std::vector<int> v(myints, myints + 8); // 10 20 30 30 20 10 10 20
  std::sort(v.begin(), v.end());          // 10 10 10 20 20 20 30 30

  std::vector<int>::iterator low, up;
  low = std::lower_bound(v.begin(), v.end(), 20); //          ^
  up = std::upper_bound(v.begin(), v.end(), 20);  //                   ^

  std::cout << "lower_bound at position " << (low - v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  return 0;
}
*/