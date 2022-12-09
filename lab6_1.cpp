#include<iostream>
using namespace std;

int main(){
    int odd = 0;
    int num = 1;
    int even = 0; 
    while(num != 0){
    cout << "Enter an integer: ";
    cin  >> num;
        if(num%2 == 0){
      odd = odd+1;
}else{
 even = even + 1;
}
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " <<  odd << endl ;
    return 0;
}


