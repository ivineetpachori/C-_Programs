#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter N" << endl;
    cin >> n;
    int sum=0;
    int i=0;
    while (i<=n){
        cout<< i<< endl;
        sum =  sum+i;
        i++;
      
    }
     
        cout << "The Sum of 1 to " << n << "no. is"<< sum ;
    return 0; 
}