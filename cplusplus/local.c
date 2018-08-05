#include<stdio.h>

int add_numbers(void);
int sub_numbers(void);
void mult_numbers(void);

int value1,value2;

int add_numbers(void){
int rslt;
rslt=value1+value2;
return rslt;
}

int sub_numbers(void){
int jibu;
if(value1<value2){
jibu=value1-value2;
return jibu;
}else{
jibu=value2-value1;
return jibu;
}
}

void mult_numbers(void){
int product;
product=value1*value2;
printf("The product of %d and %d is %d\n",value1,value2,product);
}


int main(){
int add_result,sub_result;
value1=10;
value2=20;
add_result = add_numbers();
sub_result = sub_numbers();

mult_numbers();

printf("The sum and subtraction of %d and %d is %d and %d\n",value1,value2,add_result,sub_result);


return 0;
}
