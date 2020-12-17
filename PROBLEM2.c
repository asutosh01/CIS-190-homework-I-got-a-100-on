#include <stdio.h>
static int lcounter = 0; //stores the number of occurances of the least integer
static int slcounter = 0; //stores the number of occurances of the second least integer
//function for getting the smallest integer
void compare_small(FILE* fr,int *a);

//function for getting the second smallest integer
void compare_small2(FILE* fr,int *a,int least);

//function for counting the occurrences of the smallest integer and the second smallest integer
void count(FILE* fr,int sl,int l);

//function for printing our findings
void printall(int sl,int l);


int main (){
  
  FILE* fr; //stores the txt file to be read
  int l=0; //stores the smallest integer
  int sl=0; //stores the second smallest integer
 
  compare_small(fr,&l);
  compare_small2(fr,&sl,l);
  count(fr,sl,l);
  printall(sl,l);
}

void compare_small(FILE* fr,int *a){
fr = fopen ("input.txt", "r");
int leastnum = 9999;
int currentnum=0;
int i=0;
//Everytime there's a number that the leastnum is greater than, the leastnum changes to that number. We do this for all 20 numbers.
for(i=0;i<=20;i++){
  fscanf(fr,"%d\n",&currentnum);
  if(leastnum>currentnum){
   leastnum=currentnum;
   }
}
fclose(fr);
*a=leastnum;
}

void compare_small2(FILE* fr,int *a,int least){
fr = fopen ("input.txt", "r");
int leastnum = 9999;
int currentnum=0;
int i=0;
//We do the same thing we did from the above function but this the time we will excude the least number we found from the above function.
for(i=0;i<=20;i++){
  fscanf(fr,"%d\n",&currentnum);
  if(leastnum>currentnum&&(currentnum!=least)){
   leastnum=currentnum;
   }
}
fclose(fr);
*a=leastnum;
}

void count(FILE* fr,int sl,int l){
fr = fopen ("input.txt", "r");
int currentnum=0;
int i=0;
for(i=0;i<=20;i++){
  fscanf(fr,"%d\n",&currentnum);
if(currentnum==sl){
slcounter++;
}
if(currentnum==l){
lcounter++;
}
}

}

void printall(int sl,int l){
printf("The smallest number is %d and it appears %d times.\nThe second smallest number is %d and it appears %d times",l,lcounter,sl,slcounter);
}
