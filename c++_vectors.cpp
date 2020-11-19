#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main(){
    vector<int> my_vec(5); // initailizing vector of asize  5
    for(unsigned int i=0;i<5;i++){
        my_vec[i] = i+50;
    
    }
    
    my_vec.push_back(10);my_vec.push_back(8);
    my_vec[0] = 30;
    for(unsigned int i=0;i<my_vec.size();i++){
        //cout<<my_vec[i]<<" "<<endl;
        
    }
    cout<<endl;
int x = my_vec.back(); // gets back value
x += my_vec[0];
//cout<< x << endl;
my_vec.pop_back();

my_vec.erase(my_vec.begin()+2);
my_vec.insert(my_vec.begin()+1,43);

for(unsigned int i=0;i<my_vec.size();i++){
    cout<< my_vec[i] <<""<<endl;
}

    return 0;
}
