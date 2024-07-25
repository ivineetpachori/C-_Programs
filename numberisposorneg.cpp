#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the Number you want to check";
    cin >> n;

    if(n>0){
        cout<< "The Number is given by You Is Positive"<< endl;
    }
    else if (n<0){
        cout<< " The Number is given by you is Negative"<<endl;
    }
    else
    {
        cout<<"The Number is Given by You is equal to zero"<<endl;
    }
    return 0;
}