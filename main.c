#include <stdio.h>

int main(void) {
  printf("1-500 sayı aralığında asal sayılar: ");
  printf("2 3 5 7 11 13 17 19 23 "); //9 tane
        for(int a=12;a<=500;a++)
        {
           int kackere=0;
           if(a%2==0) kackere++;
           if(a%3==0) kackere++; 
           if(a%5==0) kackere++; 
           if(a%7==0) kackere++;
           if(a%11==0) kackere++;
           if(a%13==0) kackere++;
           if(a%17==0) kackere++;
           if(a%19==0) kackere++;
           if(a%23==0) kackere++; 
           else if(kackere==0) {
           printf("%d ",a); //86 tane
           a++;
           }
        }
        //95 tane
}
