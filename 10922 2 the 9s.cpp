#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define mod             1e9+7
#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define sz              3000005

string s;

void solve(int num, int d){

    if(num<=17){
        if(num==9){
            printf("%s  is a multiple of 9 and has 9-degree %d.\n",s.c_str(),d);
        }
        else{
           printf("%s  is not a multiple of 9.\n",s.c_str());    
        }
        return ;
    }

    int sum=0;
    while(num){
        sum+=num%10;
        num/=10;
    }
    solve(sum, d+1);

}

int main(){
    Fast;///using Fast I/O
    read(x);
    write(x);
    while(cin>>s){
        if(s.size()==1 and s[0]=='0')
            break;
        int sum=0;
        for(int i=0; i<s.size(); i++)sum+=(s[i]-'0');
        solve(sum,1);
    }

    return 0;
}

