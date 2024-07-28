#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> numbers = {1,3,5,8,10,13};
    //using find_if with a lambda to find the first even number
    auto it = find_if(numbers.begin(), numbers.end(), [](int n){
        return n%2==0;
    });

    if(it!= numbers.end()){
        cout << "First even number found: " << *it << endl;
    }else{
        cout << "No even number found" << endl;
    }
    return 0;
}