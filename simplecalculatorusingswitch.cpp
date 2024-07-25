#include <iostream>
using namespace std;
int main (){
    char op;
    int a, b;
    cout << "Enter the Value of a"<< endl;
    cin>>a;
    cout << "Enter the Value of b"<< endl;
    cin>>b;
    cout << " Enter the Operator"<< endl;
    cin>>op;
    switch (op){
        case '+': cout << " Your Answer is "<< (a+b)<< endl;
        break;
        case '-': cout << " Your Answer is "<< (a-b)<< endl;
        break;
        case '*': cout << " Your Answer is "<< (a*b)<< endl;
        break;
        case '/': cout << " Your Answer is "<< (a/b)<< endl;
        break;
        default : cout << "Please Enter Valid Operator"<< endl;
    }
    return 0;
}
