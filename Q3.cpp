# include<iostream>
using namespace std;


int CountMin(string str){

int strlength=str.size()-1;
int count=0;
int j=0;

for(int i=0;i<strlength/2;i++,j++){

if(str[i]==str[strlength-j]){
          ;
}

else{
count++;
}

}

return count;
}