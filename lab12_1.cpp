#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
        switch(x){
            case 0: 
                return 0;
                break;
            case 1: 
                return 1;
                break;
            default:
                return fibonacci(x-1) + fibonacci(x-2);
                break;
        }
}