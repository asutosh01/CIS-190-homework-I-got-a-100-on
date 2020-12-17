#include <stdio.h>
#include <math.h> 
//importing math.h for the math fuctions

//making the fuction prototype for a
void afunc (double *a,int n);
 

//making the fuction prototype for b
void bfunc (double *b,int n);


//making the fuction prototype for c
void cfunc (double *c,int n);


int main(void) {
int input=0;
double a=0.00;
double b=0.00;
double c=0.00;
double y=0.00;
while(input<1){printf("Hi there, please print a positive non-zero number for n: \n"); scanf("%d", &input); } //this ensures that the user-input is atleast 1

 
afunc(&a,input);
bfunc(&b,input);
cfunc(&c,input);
y=a-b*(-c);
printf("a = %.2f \nb = %.2f \nc = %.2f \ny = %.2f\n",a,b,c,y);

  return 0;
}


void afunc (double *a,int n) {
 int in;
 int i;
 int j;

 if(n<3){
 i=1;
 j=1;
 for(in=0;in<=n-1;in++){
 i+=in;
 }

 for(in=1;in<=n;in++){
 j=j*in;
 }
 *a=j+(1.0/i);
 }
else if (n>=3&&n<20){
*a=5;
 for(in=1;in<=n;in++){
 *a+=in*2;
 }
 }
 else{
   *a=sqrt(n);
 }
 }


void bfunc (double *b,int n){

 switch(n){
case 1 ... 4 : //for cases n<5
 *b=sqrt(n); 
 break;
case 5 ... 24 : //for cases >=5 but < 25
 *b=(n-1)*(n+2);
 break;
case 25 ... 44 : //for cases >=25 but <45
 *b=floor(n);
 break;
 default: //for cases >=45
 *b=n;
 }

 }


void cfunc (double *c,int n){


 if(n==1||n==2){
  *c=n + cos(n);
 }
 if (n<=5&&n>=3){
  *c=n-3;
 }
 if (n>5){
  *c=n*2;
 }

}