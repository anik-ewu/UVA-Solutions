#include<bits/stdc++.h>
using namespace std;


using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;


int main(){

    int a, n, m, cs=1;
    ordered_multiset ms;
    priority_queue < int > pq;

    while(cin >> n>> m){
        for(int i=0; i<n; i++){
            cin>>a;
            pq.push(a);
        }
        for(int i=0; i<m; i++){
            cin>>a;
            ms.insert(a);
        }

        while(!pq.empty()){
            a=pq.top();
            pq.pop();
            if(ms.size()!=0){
                ms.upperbound()
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
