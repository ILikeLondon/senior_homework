#include<iostream>
using namespace std;

int main(){

	cout<<"Enter the number of integers to be processed followed by the integers:"<<endl;
    char data[50];
    cin.getline(data,50);
    int first=data[2];
    for(int i=2;data[i]!='\0';i=i+1){
    	if(i%2==1){
    		continue;
    	}
    	int temp=data[i];
    	if(temp<first){
          first=temp;
    	}
    }
    cout<<first-48;
}

