#include <bits/stdc++.h>
 
typedef long long LL;
#define MP make_pair
#define PB push_back
#define X first
#define Y second
 
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define ITER(it, a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); ++it)
#define ALL(a) a.begin(), a.end()
#define SZ(a) (int)((a).size())
#define FILL(a, value) memset(a, value, sizeof(a))
#define debug(a) cout << #a << " = " << a << endl;
 
const double PI = acos(-1.0);
const LL INF = 1e9;
const LL LINF = INF * INF;
 
using namespace std;
 
long long  binaryExponentiation(long long  x,long long n)
{
    long long  result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}

int main()
{
    	ios_base::sync_with_stdio(0),
    	cin.tie(0), cout.tie(0);
		long long  int  n,k;
		int x;
		cin>>n>>k;
		 n=n%10;
		 if(k==0)
		    x=1;
		 else if(k==2)
		    x=2;
		 else if(k==3)
	     	    x=6;
		 else if(k==4)
	                       x=4;
		else 
		   x=0;
		
	cout<<binaryExponentiation(n,x)%10;

}