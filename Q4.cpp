# include<iostream>
using namespace std;


int* candyStore(int candies[] , int size , int K){

int *temp=new int[2];    //dynamic memory allocation for storing minimum and maximum money candies

int maxMoney,minMoney;
int i,j;

sort(candies,candies+size); // Make candies array in ascending order

maxMoney=0;   
minMoney=0;    

i=0;
j=size-1;

while(i<=j){
minMoney=minMoney+candies[i];
i++;
j=j-K;   // We can  purchase k number of candies 
}

sort(candies, candies+size, greater<int>());  //Make candies in Descending order

i=0;
j=size-1;

while(i<=j){
maxMoney=maxMoney+candies[i];
i++;
j=j-K;   // We can  purchase k number of candies 
}

temp[0]=minMoney;
temp[1]=maxMoney;

return temp;
}