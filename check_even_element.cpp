#include <iostream>
#include <vector>
using namespace std;

int check_even(vector<int> a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0){
            return a[i];
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int found = check_even(a);
    if(found != -1){
        cout << "First even element: " << found << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}
