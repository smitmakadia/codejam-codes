/*
** Author   : Smit Makadia
** Roll No. : 18BCE231
*/

#include <bits/stdc++.h>
 
#define ll long long int
#define pb push_back
#define mk make_pair
#define mod 1000000007
#define boom ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
 
using namespace std;
 
int main() {
    
    boom
    int t,z=1;
    cin>>t;
    while(z<=t)
    {
        string s,s1="";
        cin>>s;
        s="("+s+")";
        int c,p;
        for(int i=0;i<9;i++)
        {
            c=0;p=0;
            for(int j=0;j<s.size();j++)
            {
                if(s[j]=='(')
                {
                    c++;
                    p=j;
                }
                else if(s[j]==')')
                {
                    c--;
                    if(s[j-1]>(i+'0') && (j-p)>1)
                    {
                        s1=s.substr(0,p+1)+"("+s.substr(p+1,j-(p+1))+")"+s.substr(j);
                        s=s1;
                        s1="";
                    }
                    p=j;
                }
                else if(s[j]==(i+'0'))
                {
                    if((j-p)>1)
                    {
                        s1=s.substr(0,p+1)+"("+s.substr(p+1,j-(p+1))+")"+s.substr(j);
                        s=s1;
                        s1="";
                    }
                    p=j;
                }
            }
        }
        s1=s.substr(1,s.size()-2);
        cout<<"Case #"<<z<<": "<<s1<<endl;
        z++;
    }
}