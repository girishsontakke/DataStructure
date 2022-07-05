#include <bits/stdc++.h>
using namespace std;

// segment tree containing maximum of the interval
int arr[100005], seg[4 * 100005];

// build(0, 0, n-1);
void build(int ind, int low, int high) {
  if (low == high) {
    seg[ind] = arr[low];
    return;
  }
  int mid = (low + high) / 2;
  build(ind * 2 + 1, low, mid);
  build(ind * 2 + 2, mid + 1, high);
  seg[ind] = max(seg[ind * 2 + 1], seg[ind * 2 + 2]);
}

// query(0, 0, n-1, givenLow, givenHigh)
int query(int ind, int low, int high, int l, int r) {
  if (low >= l && high <= r) return seg[ind];
  if (high<l || low>r) return INT_MIN;

  int mid = (low + high) / 2;
  int left = query(ind * 2 + 1, low, mid, l, r);
  int right = query(ind * 2 + 2, mid + 1, high, l, r);

  return max(left, right);
}

int main() {
}