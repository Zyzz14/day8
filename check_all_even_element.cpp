#include <iostream>
#include <vector>
using namespace std;

vector<int> find_even(vector<int> a){
    vector<int> evenNumbers;

    for(int i = 0; i < a.size(); i++){
        if(a[i] % 2 == 0){
            evenNumbers.push_back(a[i]);
        }
    }

    return evenNumbers;
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

    vector<int> evenNumbers = find_even(a);

    if(evenNumbers.size() > 0){
        cout << "Even numbers found: ";
        for(int num : evenNumbers){
            cout << num << " ";
        }
        cout << endl;
    }
    else{
        cout << "No even numbers found" << endl;
    }

    return 0;
}
