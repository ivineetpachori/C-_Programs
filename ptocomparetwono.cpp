#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<" Enter a" << endl;
    cin >> a;
    cout<< "Enter b" << endl;
    cin >> b;
    if (a<b){
        cout << " A is Greater Than B " << endl;
    }
    else if (a>b) {
        cout << " B is Greater Than A " << endl;
    }
    else {
        cout << "Both Number equal" << endl; 
    }
    return 0;

}