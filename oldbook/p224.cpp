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

ll N;

ll ans = 0LL;

int main() {
  cin.tie(0);
  ios_base::sync_with_stdio(false);


	
  N = 10;
  cout << N << endl;
  //int N = 100;
  int N = N;
  
  /* !!!!!!!!! 
  宣言された識別子は名前を書き終えた直後から有効で、
  上記の初期化子NはglobalのNではなくint N のNであるから初期価値は不定.*/

  cout << N << endl;
  FOR(i, 0, 2) {
	  int N = 12;
	  cout << "N: " << N << endl;
	  FOR(j, 0, 2) {
		  int N = 22;
		  cout << "in 2 N: " << N << endl;
		  cout << ::N << endl; // global をみる
	  }
  }

  cout << ans << endl;

  return 0;
}
