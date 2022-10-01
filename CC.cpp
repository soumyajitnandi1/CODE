#include <bits/stdc++.h>
using namespace std;

int main() 
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);
	// your code goes here
    int T;
    cin>>T;
    while (T>0)
    {
        string sA[26],pA[26];
        string S,P;
        cin>>S;
        cin>>P;
        for(char c : S)
        {
            sA[c-97]=sA[c-97]+c;
        }
        
        for(char c : P)
        {
            pA[c-97]=pA[c-97]+c;
        }
        
        for (string s : pA)
        {
            if (s != "")
                sA[s[0]-97].erase(0,s.length());
        }
        
        sA[P[0]-97]=sA[P[0]-97]+P;
        
        for (string s :sA)
        {
            cout<<s;
        }
        cout<<endl;
        
     T--;
    }
 
 return 0;
}

