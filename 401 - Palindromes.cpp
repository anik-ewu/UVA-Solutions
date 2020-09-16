///Date: 17-9-2020
///Ad-hoc

#include<bits/stdc++.h>
using namespace std;

string s,p;
map< char, char>mp;


void f(){
    ///saving reverse character
    mp['A']='A';mp['H']='H';mp['I']='I';mp['M']='M';mp['O']='O';
    mp['T']='T';mp['U']='U';mp['V']='V';mp['W']='W';mp['X']='X';
    mp['Y']='Y';mp['1']='1';mp['8']='8';mp['E']='3';mp['3']='E';
    mp['J']='L';mp['L']='J';mp['S']='2';mp['2']='S';mp['Z']='5';mp['5']='Z';
}

bool check_p(){
    string p;
    p=s;
    reverse(p.begin(),p.end());
    return p==s;
}
bool check_m(){
    string p;
    p=s;
    for(int i=0; i<p.size(); i++){
        if(mp[p[i]]){
            p[i]=mp[p[i]];
        }
        else return false;
    }
    reverse(p.begin(), p.end());
    return p==s;
}

int main(){

    ///freopen("in.txt","r", stdin);
    ///freopen("out.txt","w", stdout);

    f();

    while(cin>>s){

        bool palindrome=check_p();
        bool mirror=check_m();

        if(!palindrome && !mirror){
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        else if(!mirror && palindrome){
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if(mirror && !palindrome){
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        else{
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
