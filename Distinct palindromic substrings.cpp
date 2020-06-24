#include <bits/stdc++.h>
using namespace std;
int countSubstrings(string s) {
        int n=s.size(),dp[n][n],ans=0;
        map<string,int > m;
        for(int d=0;d<n;d++)
        {
            for(int i=0;i+d<n;i++)
            {
                int j=i+d;
                dp[i][j]=0;
                if(s[i]==s[j])
                {
                    dp[i][j]= (i+1>=j-1) ? true : dp[i+1][j-1];
                    if(dp[i][j])
                    m[s.substr(i,j-i+1)]=1;
                }
            }
        }
        return m.size();
}
int main() {
	//code
	  int t;
	  cin>>t;
	  while(t--)
	  {
	      string S;
	      cin>>S;
	      cout<<countSubstrings(S)<<"\n";
	  }
	return 0;
}
