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
    int t,b;
    cin>>t>>b;
    while(t--)
    {
       	char c,ch;
        string s="";
        for(int i=0;i<10;i++)
        {
            s+='0';
        }
        for(int i=1;i<11;i++)
        {
            cout<<i<<endl;
            cout.flush();
            cin>>c;
            s[i-1]=c;
        }
        cout<<s<<endl;
        cout.flush();
        cin>>ch;
        if(ch=='Y')
        {
            continue;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}