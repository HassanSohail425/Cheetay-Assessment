# include<iostream>
using namespace std;

int activityselection(int start[] , int end[] , int N){

int i,j;
j=0;
int countActivities=0;

for(i=1;i<N;i++){
if(start[i]>=end[j]){
    j=i;
    countActivities++;
}

}//End For loop

return countActivities;
}
