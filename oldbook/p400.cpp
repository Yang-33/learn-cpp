#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define FOR(i, s, e) for (ll(i) = (s); (i) < (e); (i)++)
#define FORR(i, s, e) for (ll(i) = (s); (i) > (e); (i)--)
#define debug(x) cout << #x << ": " << x << endl
#define mp make_pair
#define pb push_back
const ll MOD = 1000000007;
const int INF = 1e9;
const ll LINF = 1e16;
const double PI = acos(-1.0);
int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1};
int dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

/* -----  xtimex  Problem: __CONTEST_NAME__  / Link:   ----- */
/* ------問題------



-----問題ここまで----- */
/* -----解説等-----



----解説ここまで---- */


int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;
  istringstream is(str);
  int y, m, d;
  char c;
  is >> y >> c >> m >> c >> d;
  cout << y << "year " << m << "month " << d << "day" << endl;
  
  int num;
  cin >> num;
  istringstream iss(num); //string でないとだめ(stringstreamなのでね)
  int x;
  iss >> x;
  cout << x << endl;

  return 0;
}
