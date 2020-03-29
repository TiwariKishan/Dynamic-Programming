/*
  Author - KISHAN TIWARI
  Dream bigger. Do bigger.
  Wake up with determination. Go to bed with satisfaction.
*/
//Sometimes later becomes never. Do it now.
#include<bits/stdc++.h>
using namespace std;
#define ll           long long
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define mod          1000000007
#define fi           first
#define se           second
#define pa           pair <ll,ll>
#define mp           make_pair
#define pb           push_back
#define ve           vector<ll>
#define vep          vector< pa >
#define all(a)       a.begin(), a.end()
#define sz(x)        (ll)x.size()
#define c(t)         cout<<t<<"\n"
using namespace std;
bool prime[8192];
void SieveOfEratosthenes(ll n)
{

	memset(prime, true, sizeof(prime));

	for (ll p=2; p*p<=n; p++)
	{
		if (prime[p] == true)
		{
			for (ll i=p*p; i<=n; i += p)
				prime[i] = false;
		}
	}
}
void solve()
{  ll n;
cin>>n;
ll a[n];
map<ll,ll> m;
f(i,0,n)
{cin>>a[i];
 m[a[i]]++;
}
map<ll,ll> ::iterator p=m.begin();
ll flag=0,dp[2][8192],ans=0;
f(i,0,8192)
dp[flag][i]=0;
dp[flag][p->fi]=(p->se+1)/2;
dp[flag][0]=(p->se)/2+1;
flag=flag^1;
p++;
while(p!=m.end())
{f(j,0,8192)
    {
        dp[flag][j]=(((dp[flag^1][j])%mod*((p->se)/2+1)%mod)%mod+((dp[flag^1][j^p->fi])%mod*((p->se+1)/2)%mod)%mod)%mod;
    }
    flag=flag^1;
    p++;
}
flag=flag^1;
f(i,2,8192)
{
    if(prime[i])
    {
        ans=(ans%mod+dp[flag][i]%mod)%mod;
        //cout<<i<<" "<<ans<<endl;
    }
}
c(ans);
}
int main()
{
    ios::sync_with_stdio(true);
   //freopen ("input.txt","r",stdin);
   //freopen ("output.txt","w",stdout);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    SieveOfEratosthenes(8191);
    while(t--)
    {
        solve();
    }
return 0;
}
