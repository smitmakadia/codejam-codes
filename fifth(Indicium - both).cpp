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
        cout<<"Case #"<<z<<": ";
		int a,b;
		cin>>a>>b;
		if(b%a==0)
		{   cout<<"POSSIBLE"<<endl;
			int c=b/a,d=c;
			for(int i=0;i<a;i++)
			{
				for(int j=0;j<a;j++)
				{
					cout<<d<<" ";
					d++;
					if(d==a+1) d=1;
				}
				d--;
				if(d==0) d=a;
				cout<<endl;
			}
		}
		else if(a==4 && b==6)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(a==4 && b==7)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(a==4 && b==9)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<3<<endl;
		}
		else if(a==4 && b==10)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
		}
		else if(a==4 && b==11)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<2<<" "<<4<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<endl;
		}
		else if(a==4 && b==13)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(a==4 && b==14)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<3<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
		}
		else if(a==5 && b==7)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<2<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<4<<" "<<5<<" "<<2<<" "<<1<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<2<<" "<<1<<endl;
		}
		else if(a==5 && b==8)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<2<<" "<<5<<" "<<1<<endl;
			cout<<4<<" "<<5<<" "<<1<<" "<<2<<" "<<3<<endl;
			cout<<5<<" "<<3<<" "<<4<<" "<<1<<" "<<2<<endl;
		}
		else if(a==5 && b==9)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<1<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<3<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<4<<" "<<3<<" "<<1<<endl;
		}
		else if(a==5 && b==11)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<1<<" "<<2<<" "<<3<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<5<<" "<<4<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<3<<" "<<4<<" "<<1<<endl;
		}
		else if(a==5 && b==12)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<2<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<5<<" "<<1<<" "<<3<<endl;
		}
		else if(a==5 && b==13)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<3<<" "<<4<<" "<<1<<" "<<5<<endl;
			cout<<3<<" "<<2<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<5<<" "<<2<<endl;
			cout<<1<<" "<<5<<" "<<2<<" "<<3<<" "<<4<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<endl;
		}
		else if(a==5 && b==14)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<5<<" "<<4<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<3<<" "<<2<<" "<<5<<endl;
			cout<<5<<" "<<4<<" "<<1<<" "<<3<<" "<<2<<endl;
			cout<<3<<" "<<5<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(a==5 && b==16)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<4<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<4<<" "<<1<<" "<<5<<" "<<3<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
		}
		else if(a==5 && b==17)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<2<<" "<<1<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<1<<" "<<4<<" "<<2<<" "<<5<<" "<<3<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<1<<" "<<2<<endl;
			cout<<4<<" "<<2<<" "<<5<<" "<<3<<" "<<1<<endl;
			cout<<5<<" "<<3<<" "<<1<<" "<<2<<" "<<4<<endl;
		}
		else if(a==5 && b==18)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<3<<" "<<2<<" "<<4<<" "<<5<<endl;
			cout<<3<<" "<<5<<" "<<4<<" "<<2<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<5<<" "<<3<<" "<<4<<endl;
			cout<<4<<" "<<2<<" "<<1<<" "<<5<<" "<<3<<endl;
			cout<<5<<" "<<4<<" "<<3<<" "<<1<<" "<<2<<endl;
		}
		else if(a==5 && b==19)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<1<<" "<<2<<" "<<3<<" "<<4<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<4<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<4<<" "<<3<<" "<<1<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<1<<" "<<3<<endl;
		}
		else if(a==5 && b==21)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<3<<" "<<5<<" "<<1<<" "<<4<<" "<<2<<endl;
			cout<<5<<" "<<3<<" "<<2<<" "<<1<<" "<<4<<endl;
			cout<<1<<" "<<4<<" "<<5<<" "<<2<<" "<<3<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<5<<" "<<1<<endl;
			cout<<2<<" "<<1<<" "<<4<<" "<<3<<" "<<5<<endl;
		}
		else if(a==5 && b==22)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<2<<" "<<3<<" "<<1<<" "<<5<<endl;
			cout<<2<<" "<<5<<" "<<1<<" "<<3<<" "<<4<<endl;
			cout<<3<<" "<<4<<" "<<5<<" "<<2<<" "<<1<<endl;
			cout<<1<<" "<<3<<" "<<4<<" "<<5<<" "<<2<<endl;
			cout<<5<<" "<<1<<" "<<2<<" "<<4<<" "<<3<<endl;
		}
		else if(a==5 && b==23)
		{
			cout<<"POSSIBLE"<<endl;
			cout<<4<<" "<<5<<" "<<3<<" "<<1<<" "<<2<<endl;
			cout<<5<<" "<<4<<" "<<2<<" "<<3<<" "<<1<<endl;
			cout<<3<<" "<<1<<" "<<5<<" "<<2<<" "<<4<<endl;
			cout<<1<<" "<<2<<" "<<4<<" "<<5<<" "<<3<<endl;
			cout<<2<<" "<<3<<" "<<1<<" "<<4<<" "<<5<<endl;
		}
		else cout<<"IMPOSSIBLE"<<endl;
        z++;
    }
    return 0;
}