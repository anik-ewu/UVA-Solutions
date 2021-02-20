#include<bits/stdc++.h>
using namespace std;
#define S 2000002
#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);


bool mark[S+7];
vector < int > v;
void  sieve(){
    memset(mark,0,sizeof(mark));
    for(int i=4; i<=S; i+=2)mark[i]=1;
    for(int i=3; i*i<=S; i+=2){
        if(mark[i]==0){
            for(int j=i*i; j<S; j+=(i*2))
                mark[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3; i<=S; i+=2){
        if(mark[i]==0)
            v.push_back(i);
    }
}

int main(){

    //read(x); write(x);

    sieve();
    int n;
    while(cin>>n){
        if(n==0)break;
        if(!mark[n] || n<2){
            cout<<0<<endl;
        }
        else{
            int pos=upper_bound(v.begin(), v.end(), n)-v.begin();
            cout<<v[pos]-v[pos-1]<<endl;
        }
    }


    return 0;
}

