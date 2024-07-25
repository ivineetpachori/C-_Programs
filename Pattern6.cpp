/* WAP to Print the Following Pattern 
1
2 3
4 5 6
7 8 9 10 
Where n = 4  
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter n"<<endl;
    cin>>n;
    int row=1;
    int toPrint=1;
    while(row<=n){
        int col=1;
        while (col<=row){
            cout<< toPrint<<" ";
            toPrint++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
      
}