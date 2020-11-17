// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void FizzBuzz(int num){
    int i;
        for(i=1; i<=num; i++){
            if(i%3==0 && i%5==0){
                cout<<"FizzBuzz"<<endl;
            }
            else if(i%3==0){
                cout<<"Fizz"<<endl;
            }
            else if(i%5==0){
                cout<<"Buzz"<<endl;
            }
            else{
                cout<<i<<endl;
            }
        }//for
        
}// function

int main() {
    int num;
    cout<<"Input num: ";
    cin>>num;
    FizzBuzz(num);
    return 0;
}