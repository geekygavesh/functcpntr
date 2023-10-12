#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "gavesh";
    string t = "gavehs";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t) cout<<true;
    else cout<<false;
}