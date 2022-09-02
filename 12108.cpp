#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 20;

int arr[N];
int maxPoint = -1;

void f(int a, int b, int c, int n) {

    int j = 0;
    while(j < N) {

        j++;
        if(j>=c) {
            arr[j]++;
            cout<<j<<' ';
        }
        if(arr[j] == n && maxPoint==-1) {
            maxPoint = j;
        }
        if(j%a == 0) {
            j += b;
        }
    }
    cout<<endl;
}

int main(){

    int a, b, c, t=1, n , m;
    while(cin>>n){

        maxPoint = -1;
        memset(arr, 0, sizeof(arr));

        for(int i=1; i<=n; i++) {
            cin>>a>>b>>c;
            f(a, b, c, n);
        }
        cout<<maxPoint<<endl;
    }

    return 0;
}

