///Math
///14-02-2021

#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t, m, n;
    cin>>t;
    while(t--){
        cin>>n>>m;
//        long long sum=0;
//        for(int i=1; i<=n; i++){
//            sum+=(m-i);
//        }
        long long a=((m-1)*(m-2))/2;
        long long b=((m-n-1)*(m-n-2))/2;
        cout<<a-b+n<<endl;
    }

    return 0;
}
