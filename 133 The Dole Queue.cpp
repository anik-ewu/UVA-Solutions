#include<bits/stdc++.h>
using namespace std;

int main() {

    int n, m, k;
    while(cin>>n>>k>>m) {
        if(n+m+k == 0)
            break;


        int cnt = n;
        int mark[n+2];
        memset(mark, 0, sizeof(mark));

        int i  = 1;
        int j  = n;
        vector< int > res;

        bool flag = false;

        while(cnt) {
            int x = k;
            while(x > 1) {
                if(mark[i] == 0) {
                    x--;
                }
                i = i+1;
                if(i > n)i = 1;

            }

            int y = m;
            while(y > 1) {
                if(mark[j] == 0)
                    y--;

                j = j-1;
                if(j < 1)j = n;

            }

            while(mark[i]) {
                i++;
                if(i > n)
                    i = 1;
            }
            while(mark[j]) {
                j--;
                if(j < 1)
                    j = n;
            }

            mark[i] = 1;
            mark[j] = 1;

            if(flag)
                cout<<',';

            if(i==j) {
                cout<<setw(3)<<i;
                cnt--;
            }
            else {
                cout<<setw(3)<<i<<setw(3)<<j;
                cnt-=2;
            }


            flag = true;

        }
        cout<<endl;
    }

    return 0;
}
