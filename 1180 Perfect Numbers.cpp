#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e9;

#define what_is(x)      cerr<<#x<<" is "<<x<<"\n";
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define mod             1e9+7
#define sz              3000005

bool check(string s){

    ll num, p;
    stringstream ss;
    ss<<s;
    ss>>p;
    num=powl(2,p-1)*(powl(2,p)-1);

    ll sum=1;
    for(ll i=2; i*i<=num; i++){
        if(num%i==0){
            sum+=i;
            if((num/i)!=i){
                sum+=(num/i);
            }
        }
    }
    cout<<num<<endl;
    return sum==num;

}

int main(){
    //Fast;///using Fast I/O
    
    read(x); write(x);
    int n;
    string s;
    cin>>n;
    getchar();
    getline(cin, s);

    for(int i=0; i<s.size(); i++){
        if(s[i]==',')s[i]=' ';
    }

    stringstream ss;
    ss<<s;


    while(ss>>s){
        if(check(s)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }




    return 0;
}

