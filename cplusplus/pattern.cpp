#include<iostream>
using namespace std;

void printPattern(int r,int c){
for(int i=0;i<r;i++){

for(int j=0;j<c;j++){
cout<<"*";
}
cout<<endl;
}

}

int main(){
int rows,columns;
cout<<"Enter number of rows you want"<<endl;
cin>>rows;
cout<<"Enter number of columns you want"<<endl;
cin>>columns;
printPattern(rows,columns);
return 0;
}
