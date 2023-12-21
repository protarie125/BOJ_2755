#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

map<string, double> mg = {{"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7}, {"B+", 3.3},
                          {"B0", 3.0}, {"B-", 2.7}, {"C+", 2.3}, {"C0", 2.0},
                          {"C-", 1.7}, {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7},
                          {"F", 0.0}};

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;

  auto sp = double{0};
  auto spg = double{0};

  for (auto i = 0; i < n; ++i) {
    string s;
    ll p;
    string g;

    cin >> s >> p >> g;

    sp += p;
    spg += p * mg[g];
  }

  cout << fixed << setprecision(2) << round((spg / sp) * 100) / 100;

  return 0;
}