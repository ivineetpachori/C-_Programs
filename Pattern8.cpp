/* WAP to Print the Following Pattern 
A B C
A B C 
A B C
Where n = 3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n"<<endl;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        char ch='A';
        while (col<=n){
            cout<< ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
      
}