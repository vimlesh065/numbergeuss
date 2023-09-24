#include<iostream>
#include<time.h>
using namespace std;
int main(){
    string name;
    char input;
    int inputuser;

    cout<<"enter your name"<<endl;
    getline(cin,name);
    cout<<endl;
    srand(time(0));
    int a= (rand()%100)+1;
    cout<<"geuss the number between 1 to 100"<<endl;

    do{
         cin>>inputuser;
        if(inputuser<=100&&inputuser>=1){

            
            if(inputuser== a) {
                cout<<"CONGRATULATION"<< name<<",YOU WIN THE GAME "<<endl;
                
            }
                
            if(inputuser<(a-10)&& inputuser>=1){
                cout<<"you are too far less than number,try again"<<endl;
            }
            if(inputuser>(a+10)&& inputuser<=100){
                cout<<"you are too more than number ,try again"<<endl;
            }
            if(inputuser>=(a-10)&&inputuser<a){
                cout<<"you are close but still less ,try again"<<endl;
            }
            if(inputuser>a&&inputuser<=(a+10)){
                cout<<"you are close but still more,try again"<<endl;
            }
        }
        else{
            cout<<"please enter the number in range 1 to 100"<<endl;
        }    
    }while(inputuser!=a);

    return 0;
}