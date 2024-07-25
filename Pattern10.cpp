/* WAP to Print the Following Pattern 
A 
B C 
D E F
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
       
        while (col<=row){
            cout<< ch<<" ";
            ch++;
            col++;
        }
                row++;
        cout<<endl;
    

    }
    return 0;
      
}