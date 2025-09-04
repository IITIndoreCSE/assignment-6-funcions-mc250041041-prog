#include <iostream>
using namespace std;

bool isPrime(int n) {
    // TODO: complete the function as per instructions
    if(n < 2) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;
    if(n%2 != 0){
		for(int i=3; i < n; i = i+2){
			if ( n%i == 0) return false;
		}
    }return true;

}

bool isPalindrome(int n) {
    // TODO: complete the function as per instructions
    int original=n;int rev_no = 0;
    
    while( n!= 0){

    rev_no = rev_no*10 + n%10;
    n = n/10;
    }
    if ( original == rev_no ) return true;
    else {
    return false;
    }

}

bool primePalindrome(int n) {
    // TODO: complete the function as per instructions
    return isPrime(n) && isPalindrome(n);
    
}

int main() {
    int n; cin >> n;
    cout << (primePalindrome(n) ? 1 : 0) << "\n";
    return 0;
}

