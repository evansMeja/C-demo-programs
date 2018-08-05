#include<iostream>
using namespace std;
int main(){
int smaller,larger,sum=0;
cout<<"Enter the smaller odd number"<<endl;
cin>>smaller;
cout<<"Enter the larger odd number"<<endl;
cin>>larger;

while(smaller<larger){
smaller=smaller+2;
if(smaller==larger){
break;
}
sum=sum+smaller;
}

cout<<"sum is "<<sum<<endl;
return 0;
}


/*
0.start
1.let sum equal 0
2.input smaller positive odd number smaller
3.input larger positive odd number larger
4.if smaller is greater or equal to larger go to step 9
5.increment smaller by 2
6 if smaller is equal to larger go to step 9
7 add smaller to sum
8.go to step 4
9.print sum
11. stop

*/
