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

map< int, int >mp;

bool solve(string s){

    int num=s[0]-'0';
    for(int i=1; i<s.size(); i++){
        num=num*10;
        num=num+(s[i]-'0');
        num=num%11;
    }
    return num==0;

}

int main(){
    Fast;///using Fast I/O
    //read(x);
    //write(x);
    string s;
    while(cin>>s){
        if(s.size()==1 and s[0]=='0')
            break;
        if(solve(s)){
            printf("%s is a multiple of 11.\n", s.c_str());
        }
        else{
            printf("%s is not a multiple of 11.\n",s.c_str());
        }

    }


    return 0;
}

