//To implement hash table in c++
#include<iostream>
//#include <bits/stdc++.h>
#include<unordered_map>
#include<string.h>

using namespace std;

int main(){

    unordered_map<string, int> hash;

    //Insert values to hash
    hash.insert({"apple",1});
    hash.emplace("banana",2);
    hash.insert(make_pair("chikoo",3));
    hash["dryfruit"] = 4;

    //Searching for a key
    string key = "ddddd";
    if(hash.find(key) == hash.end())
        cout<<key<<" "<<" not found";
    else
        cout<<key<<" "<<"found";
        cout<<endl;
     //Looping through elements
    for(auto itr:hash){
        cout<<itr.first<<" : " << itr.second;
        cout<<endl;
    }

    return 0;
}
