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

bool check(int d){

   int num=0;
   for (int i = 0; i <s.size(); i++){
       num=num*10;
       num=num+(s[i]-'0');
       num=num%d;
   }
   return num==0;
}


int main(){
    Fast;///using Fast I/O
    read(x);
    write(x);
    int t, n,a;
    cin>>t;
    while(t--){
        cin>>s>>n;
        bool ok=true;
        set< int > st;
        for(int i=1; i<=n; i++){
            cin>>a;
            st.insert(a);
        }
        for(auto i=st.begin(); i!=st.end(); i++){
            if(!check(*i)){
                ok=false;
                break;
            }
        }

        if(ok){
            printf("%s - Wonderful.\n",s.c_str());
        }
        else{
             printf("%s - Simple.\n",s.c_str());
        }

    }
    return 0;
}

