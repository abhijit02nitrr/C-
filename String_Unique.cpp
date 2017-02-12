#include<iostream>
#include<string.h>
using namespace std;
bool isUnique1(string s){

    int len = s.length();
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){

            if(s[i]==s[j])
            return false;
        }

    }
    return true;

}
bool isUnique2(string s){

    bool a[256];
    int idx;
    memset(a,false,256);
    for(int i=0;i<s.length();i++){
        idx = (int)s[i];
        if(a[idx]){
            return false;
        }
        a[idx] = true;
    }
    return true;
}

bool isUnique3(string s){

    int check =0,val=0;
    for(int i=0;i<s.length();i++){

        val = s[i]-'a';
        if(check&1<<val){
            return false;
        }
        check |= 1<<val;

    }
    return true;
}
int main(){

    string s1 = "aaaa";
    string s2 = "abhj";

    cout<<isUnique1(s1)<<" "<<isUnique1(s2)<<endl;
    cout<<isUnique2(s1)<<" "<<isUnique2(s2)<<endl;
    cout<<isUnique3(s1)<<" "<<isUnique3(s2)<<endl;

    return 0;
}
