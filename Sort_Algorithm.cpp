#include<algorithm>
#include<iostream>
using namespace std;
int main(){

    string s = "dabc";
    int a[5] = {1,2,3,4,8};
    std::sort(s.begin(),s.end());
    std::sort(s.begin(),s.end(),greater<char>());

    std::sort(a,a+5,greater<int>());
    cout<<s<<endl;
    for(int i=0 ; i<5;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
