# include<iostream>
using namespace std;

int** spirallyTraverse(int **Matrix, int R , int C)
{
int i , top ,left ,right , bottom ,count ,m ,n ;
int **temp;

temp=new int*[R];

for(i=0;i<R;i++){
temp[i]=new int[C];
}

top=0;   
left=0;   
right=C-1;  
bottom=R-1;   

m=0;
n=0;

do{

if(left<=right){
    
for(count=top;count<=right;count++){
    temp[m][n]=Matrix[top][count];
    n++;
    if(n==C-1){  // checking the condition to start next row of temp array if n becomes equal to number of columns
    n=0;
    m++;
    }
}
 top++;
}


if(top <=bottom){
for(count=top+1;count<=bottom;count++){
      temp[m][n]=Matrix[count][right];
      n++;
      if(n==C-1){
      n=0;
      m++;
      }
}
right--;
}

if(left<=right){

for(count=right;count>=left;count--){
      temp[m][n]=Matrix[bottom][count];
      if(n==C-1){   
      n=0;
      m++;
      }
}

bottom--;

}

if(top<=bottom){

for(count=bottom;count>=top;count--)
{
      temp[m][n]=Matrix[count][left];
      if(n==C-1){
       n=0;
       m++;
      }
}
left++;

}


if(left>right || top>bottom)
{
   break;

}

}while(1)


return temp;

}// End Function