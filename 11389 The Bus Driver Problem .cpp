///Greedy
///14.10.2020

#include<bits/stdc++.h>
using namespace std;

int arr[101],brr[101];

int main(){

    int n, d, r;
    while(cin>>n>>d>>r){
        if(n+d+r==0)break;

        for(int i=1; i<=n; i++)cin>>arr[i];
        for(int i=1; i<=n; i++)cin>>brr[i];

        sort(arr+1, arr+n+1);
        sort(brr+1, brr+n+1);

        int tot=0;
        for(int i=1; i<=n; i++)tot+=max(0,(arr[i]+brr[n-i+1])-d);

        tot= tot*r;
        cout<<tot<<endl;

    }

    return 0;
}
