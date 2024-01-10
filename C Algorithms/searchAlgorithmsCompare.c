//RUNNING WITH long


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <bits/stdc++.h>
//using namespace std;
//#include "MTgen.h"

void swap(long * a,long *b);
long * createArray(long n);
void fillArray(long *array,long n);
long* initArrASC(long *array,long n);
long* initArrDESC(long *p,long n);
void quickSort(long* p,long left,long right);
long partition(long *p,long left,long right);
void selectionSort(long *p,long n);
void insertionSort(long *p,long n); 
void shellSort(long *p,long n);
void CopyArray(long* startingArray,long* copiedArray,long n);
void PrlongArray(long* array,long n);
void SortTimes(long *array,long *arrayASC,long *arrayDESC,float sortTimes[3][4],long n);

long main(long argc, char *argv[]) {
long n,i;
long *array,*arrayASC,*arrayDESC;
float sortTimes[4][3];
clock_t t0,t1,c0,c1;
printf("Give me the size of Array\n");
scanf("%ld",&n);
array=createArray(n);
fillArray(array,n);
printf("Array filled!");
c0=clock();
arrayASC=initArrASC(array,n);
c1=clock();
printf("ArrayASC:\n");
//PrlongArray(arrayASC,n);
sortTimes[0][0]=(float)(c1-c0)/CLOCKS_PER_SEC;
printf("arrayAsc time= %f seconds\n",sortTimes[0][0]);
//c0=clock();
arrayDESC=initArrDESC(arrayASC,n);
//c1=clock();
//sortTimes[0][0]=(float)(c1-c0)/CLOCKS_PER_SEC;
printf("arrayDesc time= %f seconds\n",sortTimes[0][0]);
printf("arrayDESC:\n");
//PrlongArray(arrayDESC,n);

//SortTimes(array,arrayASC,arrayDESC,sortTimes[3][4],n);
//times
printf("SELECTION--------\n");
t0=clock();
selectionSort(array,n);
t1=clock();
sortTimes[0][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[0][0]);

t0=clock();
selectionSort(arrayASC,n);
t1=clock();
sortTimes[0][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[0][1]);

t0=clock();
selectionSort(arrayDESC,n);
t1=clock();
sortTimes[0][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[0][2]);

printf("INSERTION-------------\n");
t0=clock();
insertionSort(array,n);
t1=clock();
sortTimes[1][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[1][0]);

t0=clock();
insertionSort(arrayASC,n);
t1=clock();
sortTimes[1][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[1][1]);

t0=clock();
insertionSort(arrayDESC,n);
t1=clock();
sortTimes[1][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[1][2]);

printf("SHELL-------------\n");
t0=clock();
shellSort(array,n);
t1=clock();
sortTimes[2][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[2][0]);

t0=clock();
shellSort(arrayASC,n);
t1=clock();
sortTimes[2][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[2][1]);

t0=clock();
shellSort(arrayDESC,n);
t1=clock();
sortTimes[2][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[2][2]);

printf("QUICK-------------\n");
printf("OK1/n");
t0=clock();
printf("before Quick for arr");
quickSort(array,0,n-1);
printf("done Quick for arr");
t1=clock();
sortTimes[3][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[3][0]);
printf("OK2\n");
t0=clock();
printf("before Quick for asc");
quickSort(arrayASC,0,n-1);
printf("done Quick for asc");
PrlongArray(arrayASC,n);
t1=clock();
sortTimes[3][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[3][1]);

printf("Before Quick for desc");
t0=clock();
quickSort(arrayDESC,0,n-1);
printf("done Quick for desc");
t1=clock();
sortTimes[3][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[3][2]);
return 0;
}


long* createArray(long n){
long *array;
long l=(long)n;
array=(long*)malloc(l * sizeof(long));
return array;
}

void fillArray(long *array,long n){
long i;
printf("ARRAY-----\n");
for (i=0;i<n;i++){
array[i]=rand()%100+1;
//printf("%u\n",array[i]);
//printf("%d \n",i);
}
}


void CopyArray(long* startingArray,long* copiedArray,long n)
{
long i;
for (i=0;i<n;i++)
{
copiedArray[i]=startingArray[i];
}
}

void PrlongArray(long* array,long n){
long i;
for(i=0;i<n;i++)
{
//printf("%u\n",array[i]);
}
}

long* initArrASC(long *array,long n){
long *arrayASC;
arrayASC=createArray(n);
long i;
CopyArray(array,arrayASC,n);
printf("Copy done");
quickSort(arrayASC,0,n-1);
printf("sort done");
return arrayASC;
}

long* initArrDESC(long *arrayASC ,long n){
long *arrayDESC;
arrayDESC=createArray(n);
long temp;
CopyArray(arrayASC,arrayDESC,n);
long i=0;
for(i=0;i<n/2;i++)
{
temp=arrayDESC[i];
arrayDESC[i]=arrayDESC[n-1-i];
arrayDESC[n-1-i]=temp;
}
return arrayDESC;
}


// function to find the partition position
void swap(long* a, long* b) {  
    long t = *a;  
    *a = *b;  
    *b = t;  
}  
long partition(long arr[], long low, long high) {  
    long pivot = arr[high];  
    long i = (low - 1);  
  	long j;
    for (j = low; j <= high - 1; j++) {  
        if (arr[j] < pivot) {  
            i++;  
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[high]);  
    return (i + 1);  
}  
void quickSort(long arr[], long low, long high) {  
    if (low < high) {  
        long pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);  
        quickSort(arr, pi + 1, high);  
    }  
}  



void selectionSort(long *p,long N){
long i, j, minPos, min; 
for (i=0; i<N-1; i++) {
//	printf("%ld\n",i);
  minPos = i;
  min = p[minPos];
for (j = i+1; j<N; j++) {
if (p[j] < min) {
  minPos = j;
min = p[minPos];
}
}
  p[minPos] = p[i] ;
  p[i] = min;
  }
}

void insertionSort(long *p,long N){
long i, j, x;
  for(i=1; i<N; i++){
  x = p[i];
j = i -1;
  while(j>=0 && p[j]>x){
  p[j+1] = p[j];
  j = j-1;
  }
  p[j+1] = x;
  } 
}
void shellSort(long *p,long N){
long initlonger, longer, i, j, x;
  initlonger = N/2; 
  for(longer=initlonger; longer>0; longer=longer/2){ // for all array lists simultaneously
  for(i=longer; i<N; i++){ 
x = p[i]; 
j = i - longer;
while(j>=0 && x<p[j]){
  p[j+longer] = p[j];
j = j - longer;
  }
  p[j+longer] = x;
  }
  } // get next longerval
}

void SortTimes(long *array,long *arrayASC,long *arrayDESC,float sortTimes[3][4],long n){

clock_t t0,t1,c0,c1;
printf("SELECTION--------\n");
t0=clock();
selectionSort(array,n);
t1=clock();
sortTimes[0][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[0][0]);

t0=clock();
selectionSort(arrayASC,n);
t1=clock();
sortTimes[0][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[0][1]);

t0=clock();
selectionSort(arrayDESC,n);
t1=clock();
sortTimes[0][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[0][2]);

printf("INSERTION-------------\n");
t0=clock();
insertionSort(array,n);
t1=clock();
sortTimes[1][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[1][0]);

t0=clock();
insertionSort(arrayASC,n);
t1=clock();
sortTimes[1][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[1][1]);

t0=clock();
insertionSort(arrayDESC,n);
t1=clock();
sortTimes[1][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[1][2]);

printf("SHELL-------------\n");
t0=clock();
shellSort(array,n);
t1=clock();
sortTimes[2][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[2][0]);

t0=clock();
shellSort(arrayASC,n);
t1=clock();
sortTimes[2][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[2][1]);

t0=clock();
shellSort(arrayDESC,n);
t1=clock();
sortTimes[2][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[2][2]);

printf("QUICK-------------\n");
printf("Im here");
printf("aaaaOK1/n");
t0=clock();
printf("before Quick for arr");
quickSort(array,0,n-1);
printf("done Quick for arr");
t1=clock();
sortTimes[3][0]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for array= %f seconds\n",sortTimes[3][0]);
printf("OK2\n");
t0=clock();
printf("before Quick for asc");
quickSort(arrayASC,0,n-1);
printf("done Quick for asc");
t1=clock();
sortTimes[3][1]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayASC= %f seconds\n",sortTimes[3][1]);

printf("Before Quick for desc");
t0=clock();
quickSort(arrayDESC,0,n-1);
printf("done Quick for desc");
t1=clock();
sortTimes[3][2]=(float)(t1-t0)/CLOCKS_PER_SEC;
printf("sort time for arrayDESC= %f seconds\n",sortTimes[3][2]);
		
}

