#include<iostream>
using namespace std;

int getlength(char name[]){
    int count =0;
    for(int i=0;name[i] !='\0'; i++) {
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    name[3] = '\n';
    cout<<"your name is ";
    cout << name << endl;
    cout<<"lenth :"<< getlength(name) <<endl;
    return 0;
}
