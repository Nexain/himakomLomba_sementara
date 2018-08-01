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
	vector<int> edge[101];
	queue<int> q;
	int t, n, m ,c , v ,e , z;
	cin >> t;
	while(t--){
		int vis[101] = {0};
		forn(i, 100) edge[i].clear();
		cin >> n >> m >> z;
		forn(j, m){
			cin >> v >> e;
			edge[v].push_back(e);
			edge[e].push_back(v);
		}
		vis[z] = 1;
		q.push(z);
		while(!q.empty()){
			v = q.front();
			while(!edge[v].empty()){
				e = edge[v].back();
				if(!vis[e]){
					q.push(e);
					vis[e] = vis[v]+1;
				}
				edge[v].pop_back();
			}
			q.pop();
		}
		int ans = 0;
		for(int i = 1 ; i <= n ; i++)
			ans = max(ans, vis[i]);
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
