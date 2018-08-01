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
	int n;
	LL a, b, c;
	cin >> n;
	forn(i, n){
		cin >> a >> b >> c;
		if(a + c > b && b + a > c && c + b > a){
			if(a == b && b == c)
				cout << "segitiga sama sisi";
			else if(a == b || b == c || c == a)
				cout << "segitiga sama kaki";
			else if((a*a) + (c*c) == (b*b) || (b*b) + (a*a) == (c*c) || (c*c) + (b*b) == (a*a))
				cout << "segitiga siku-siku";
			else
				cout << "segitiga sembarang";
		} else if(a + c == b || b + a == c || c + b == a)
			cout << "garis lurus";
		else
			cout << "bukan segitiga";
		cout << endl;
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
