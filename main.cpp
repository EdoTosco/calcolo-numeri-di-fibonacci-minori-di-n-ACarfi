#include <iostream>
using namespace std;


int main() {
    bool flag = true;
    int n=0;
    int fibonacci_p= 1, fibonacci=1;

    cin >> n;

    while(fibonacci <= n){
        if(flag){
            flag = false;
            cout << fibonacci_p <<endl;
        }else {
            cout << fibonacci << endl;
            int temp = fibonacci;
            fibonacci += fibonacci_p;
            fibonacci_p = temp;
        }
    }
    return 0;
}
