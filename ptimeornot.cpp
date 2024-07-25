#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the number You wnat to checK"<< endl;
    cin>>n;
    bool isPrime = 1;
    for (int i=2; i<n; i++){
        // rem=0, Not A Prime
        if(n%i==0){
    
            isPrime=0;
            break;
        }
    }
    if(isPrime==0){
      cout<<"Not A Prime Number"<<endl;
    }
    else{
            cout<<" A Prime Number"<<endl;
    }
    return 0;

}