#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);

    // TODO: complete the function as per instructions
    int product = 1;
    for( int i=0 ; i < size ; i++){
    	product = 1;
    	for ( int j=0 ; j < size ; j++){
    		if( i != j) product *= arr[j];
    	}
    	output[i]=product;
    } 
    return output;
    
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}

