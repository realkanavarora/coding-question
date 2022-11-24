#include <stdio.h>

void pattern1(){
 printf("----------------  SQUARE  --------------\n");
 for(int i=0;i<=5;i++){
    for(int j=0;j<=5;j++){
        printf("* ");
    }
    printf("\n");
 }
 printf("----------------------------------------\n");
}


void pattern2(){
 printf("--------- RIGHT ANGLE TRIANGLE ---------\n");
 for(int i=0;i<=5;i++){
    for(int j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
 }
 printf("----------------------------------------\n");


}

void pattern3(){
 printf("--- INVERSE RIGHT ANGLE TRIANGLE -------\n");
 for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i+1;j++){
        printf("* ");
    }
    printf("\n");
 }
 printf("----------------------------------------\n");

}

void pattern4(){
 printf("--- (Numbered) RIGHT ANGLE TRIANGLE -------\n");
 for(int i=1;i<=5;i++){
    int k=1;
    for(int j=1;j<=i;j++){
        printf("%d ",k);
        k++;
    }
    printf("\n");
 }
 printf("----------------------------------------\n");

}

void pattern5(){
 printf("--- HALF DIAMOND | VERTICAL Right Face -------\n");
 for(int i=1;i<=2*10;i++){
    if(i<=5){
    for(int j=1;j<=i;j++){
        printf("* ");
    }}
    else{
      for(int k=2*5-i;k>=1;k--){
        printf("* ");
    }  
    }
    printf("\n");
 }
 printf("----------------------------------------\n");

}



int main(){
  pattern5();
  return 0;

}