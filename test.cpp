#include <bits/stdc++.h>

using namespace std;

int main()
{

    int maxN=0;

    string N;
    cin>>N;
    for(long long int i=0; i<N.length(); i++)
    {
        int number=N[i]-'0';
        maxN=max(maxN,number);
    }
    for(int i=0; i<N.length(); i++)
    {
        cout<<maxN;
    }


}
