#include<bits/stdc++.h>
using namespace std;

#define read(x)         freopen("in.txt","r",stdin);
#define write(x)        freopen("out.txt","w",stdout);
#define Fast            ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long int ll;

int main(){

    Fast;
    //read(x); write(x);

	ll n, m,a,b;
	string s,p;
	stringstream ss;
	vector< ll > st;

	while(cin>>s){

		int n=s.size();
		p=s;
		ss.clear();
		ss<<s;
		ss>>a;
		b=a;
		st.clear();
		///next premutation 
		do{
			ss.clear();
			ss<<s;
			ss>>m;

			ss.clear();
			ss<<m;
			ss>>s;

			if(s.size()==n){
				st.push_back(m);
				//cout<<m<<endl;
			}
		
		}while(next_permutation(s.begin(), s.end()));


		///prev permutation
		do{
			ss.clear();
			ss<<p;
			ss>>m;

			ss.clear();
			ss<<m;
			ss>>p;

			if(p.size()==n){
				st.push_back(m);
			}
		
		}while(prev_permutation(p.begin(), p.end()));

		sort(st.begin(), st.end());

		for(int i=0; i<st.size(); i++){
			for(int j=st.size()-1; j>i; j++){
				ll c=st[j]-st[i];
				if(c%9==0){
					a=st[j];
					b=st[i];
					i=st.size();
					break;
				}
			}
		}

		ll mx=0;
		cout<<a<<" - "<<b<<" = "<<a-b<<" = "<<9<<" * "<<(a-b)/9<<endl;

	}


	return 0;
}