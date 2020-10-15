///Simple array mapping
///15.10.2020


#include<bits/stdc++.h>
using namespace std;

int arr[65];

int main(){

    int a, n, m, cs=1;
    while(cin >> n>> m){

        if(n+m==0)break;

        priority_queue < int > pq;
        for(int i=0; i<n; i++){
            cin>>a;
            pq.push(a);
        }

        memset(arr, 0, sizeof(arr));
        for(int i=0; i<m; i++){
            cin>>a;
            arr[a]++;
        }

        while(!pq.empty()){
            a=pq.top();
            pq.pop();

            int x=0,y=0;
            for(int i=a; i<=60; i++){
                if(arr[i]){
                    x=i; break;
                }
            }

            for(int i=a; i>0; i--){
                if(arr[i]){
                    y=i; break;
                }
            }
            if(x+y==0){
                pq.push(a);
                break;
            }
            else if(x==0){
                arr[y]--;
            }
            else if(y==0){
                arr[x]--;
            }
            else{
                if(a-y<=x-a){
                    arr[y]--;
                }
                else{
                    arr[x]--;
                }
            }
        }
        int len=pq.size();
        int age;
        while(!pq.empty()){
            age=pq.top();
            pq.pop();
        }
        cout<<"Case "<<cs++<<": "<<len;
        if(len)cout<<' '<<age;
        cout<<endl;
    }
    return 0;
}
