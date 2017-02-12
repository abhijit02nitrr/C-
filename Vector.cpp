//To implement hash table in c++
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec;
    int i;

    cout<<"vector size"<<vec.size()<<endl;

    for(i=0;i<5;i++){
        vec.push_back(i);
    }

    cout<<"extended vector size"<<vec.size()<<endl;

    for(i=0;i<5;i++){
        cout<<"Vec["<<i<<"] ="<<vec[i]<<endl;
    }


    vector<int>::iterator v = vec.begin();
    while(v != vec.end()){
        cout<<"Value of v"<<*v<<endl;
        v++;
    }

    return 0;
}
