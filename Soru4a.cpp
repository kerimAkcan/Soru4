#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 3 
#define SIZE1 5 
int main() {
    int x[SIZE],y[SIZE]; ; 
    int toL[SIZE];
	printf("1. dizinin elemanlarýný girin:\n");
   
   	for (int i = 0; i <SIZE; i++) {
        scanf("%d", &x[i]);
        if(x[i] >10){
        	 printf("Lutfen Rakam Giriniz\n");
   		 exit(1);
		}
        
    }
    char str[SIZE + 1];
    for (int i = 0; i < SIZE; i++) {
        str[i] = x[i] + '0';
    }
    str[SIZE] = '\0';
   	int num = atoi(str);
    printf("2. dizinin elemanlarýný girin:\n");
   
   	for (int i = 0; i <SIZE; i++) {
        scanf("%d", &y[i]);
        if(y[i] >10){
        	 printf("Lutfen Rakam Giriniz\n");
   		 exit(1);
		}
        
    }
    char str1[SIZE + 1];
    for (int i = 0; i < SIZE; i++) {
        str1[i] = y[i] + '0';
    }
    str1[SIZE] = '\0';
    int num1 = atoi(str1);
    

  
    printf("Dizi 1: %s\n", str);
	printf("Dizi2: %s\n", str1);
	
	int total = num + num1;
	
   for (int i = 3; i >= 0; i--) {
        toL[i]= total % 10; 
        total /= 10;
    }
    int size = sizeof(toL) / sizeof(toL[0]); 
    for (int i = 0; i <=size; i++) {
          printf("Sayinin rakamlari: %d\n", toL[i]);
    }
  

}
