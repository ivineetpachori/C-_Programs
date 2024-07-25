/* WAP to Print the Following Pattern 
A B C
D E F
G H I
Where n = 3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n"<<endl;
    cin>>n;
    int row=1;
     char ch='A';
    while(row<=n){
        int col=1;
       
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