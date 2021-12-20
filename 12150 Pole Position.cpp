#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin>>n){
        if(n==0)
            break;

        int a, b;
        bool flag=true;
        int mark[n+5];
        memset(mark, 0, sizeof(mark));
        for(int i=1; i<=n; i++){
            cin>>a>>b;
            if(i+b<1 || i+b>n || mark[i+b]!=0){
                flag=false;
            }
            else
                mark[i+b]=a;
        }
        if(flag){
           for(int i=1; i<=n; i++){
            if(i>1)cout<<' ';
            cout<<mark[i];
           }
           cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}




