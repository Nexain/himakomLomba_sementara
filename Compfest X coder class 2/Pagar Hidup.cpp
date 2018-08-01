#include <bits/stdc++.h>
 
#define MEMSET(a, b) memset(a, (b), sizeof(a))
#define forn(i, n) for (int i=0 ; i < (int)(n) ; ++i)
#define for1(i, n) for (int i=1 ; i <= (int)(n) ; ++i)
#define fore(i, l, r) for(int i = (int)(l); i <= (int)(r); ++i)
#define ford(i, n) for(int i = (int)(n); i >= 0 ; --i)
#define all(cont) cont.begin(), cont.end()
#define Sort(n) sort(all(n))
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define LL long long
 
using namespace std;



int main()
{	
	int t, n;
	vector<long> v;
	long a, l, ans, memo[3] = {1, 2, 2};
	cin >> t;
	while(t--){
		v.clear();
		cin >> l >> n;
		forn(i, n){
			cin >> a;
			v.push_back(a);
		}
		sort(all(v));
		ans = max(v[0] - 1, (l - v[n-1]) * 2); 
		forn(i, n-1){
			long c = v[i+1] - 1 - v[i];
			if(c)
				ans = max(ans, memo[(c-1) % 3] + (((c-1) / 3) * 2));
		}
		cout << ans << endl;
	}
	return 0;
}
 
 
 
/* Source code dengan case
 
int main(){
    int T;
    cin >> T;
    for(int counterT = 1 ; counterT <= T ; T++){
         
        printf("%d\n", ans);
    }
    return 0;
}
 */
 
/* Source code dengan case
 
int main(){
    int T;
    cin >> T;
    for(int counterT = 1 ; counterT <= T ; T++){
         
        printf("Case #%d: %d\n", counterT, ans);
    }
    return 0;
}
 */
