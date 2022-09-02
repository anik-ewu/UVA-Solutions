#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
const ll           inf = 1e9;
#define read(x)     freopen("in.txt","r",stdin);
#define write(x)    freopen("out.txt","w",stdout);
#define what_is(x)  cerr<<#x<<" is "<<x<<"\n";
#define Fast        ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int N= 1e5+5;

map< int, int > mp;

int main()
{

    int a, b, t=1, n, m;
    while(cin>>a>>b)
    {

        mp.clear();
        vector<int>v;

        printf("%d/%d = ", a, b);
        printf("%d.", a/b);

        a = a%b;
        mp[a] = 1;

        while(true)
        {

            a = a*10;
            bool found = false;
            while(a && a < b)
            {
                v.push_back(0);
                if(mp[a])
                {
                    found = true;
                    break;
                }
                mp[a] = v.size()+1;
                a = a*10;
            }
            if(found)
                break;
            v.push_back(a/b);
            a = a % b;
            if(mp[a])
            {
                break;
            }
            else
                mp[a] = v.size() + 1;
        }
        for (int i = 0; i < v.size(); ++i)
        {
            if(i == mp[a]-1)
                printf("(");
            printf("%d",v[i]);
            if(i == 49 && v.size() != 50)
            {
                printf("...)\n");
                break;
            }
            else if(i == v.size()-1)
                printf(")\n");
        }
        printf("   %d = number of digits in repeating cycle\n\n", (int) v.size()-mp[a]+1);

    }

    return 0;
}

