#include<iostream>
using namespace std;
int printSmallest(int a,int b,int c);


int main(){
int a,b,c;
cout<<"Enter 3 Numbers"<<endl;
cin>>a>>b>>c;
cout<<"Smallest of the three is "<<printSmallest(a,b,c)<<endl;
return 0;
}




int printSmallest(int a,int b,int c){
if(a<b && a<c){
return a;
}

else if(b<c)
{
return b;
}
else
{
return c;
}
}
