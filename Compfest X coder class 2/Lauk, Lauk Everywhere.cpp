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
	string s, curr;
	map <string, LL> menu;
	while(true){
		getline(cin, s);
		if(s.compare("!") == 0) break;
		else if(s.compare(0, 1, "#") == 0){
			s.erase(0, 2);
			curr = s;
			menu[curr] = 0;
		}else{
			menu[curr]++;
		}
	}
	while(getline(cin, s)){
		long long comb = 1;
		long found = s.find("+");
		while(found != string::npos){
			curr = "";
			curr.insert(0, s, 0, found-1);
			s.erase(0, found+2);
			comb *= menu[curr];
			found = s.find("+");
		}
		comb *= menu[s];
		cout << comb << endl;
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
