#include <iostream>
using namespace std;

int main(){

    
    long long int a;
    int b;
    float c;

    cout << "size of int is: " <<sizeof(b) << " the size of long long int is: " << sizeof(a) << endl;
    
    cout << "size of int is: " <<sizeof(int) << endl;
    cout << "size of float is: " <<sizeof(float) << endl;
    cout << "size of double is: " <<sizeof(double) << endl;
    cout << "size of char is: " <<sizeof(char) << endl;

    cout << "the address of a is: "<< &a << endl;

    cout << "the address of b is: "<< &b << endl;

    cout << "the address of c is: "<< &c << endl;

    return 0;
}
