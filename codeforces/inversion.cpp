
#include<bits/stdc++.h>
using namespace std;

int main(){
    int minv=0,maxg;
    int valores[] = {7,1,5,3,6,4};
    
    for(int i=0;i<sizeof(valores)/sizeof(int);i++){
    	if(valores[minv]>valores[i])
    		minv=i;
    }
    maxg=minv;
    for(int i=minv;i<(sizeof(valores)/sizeof(int));i++){
    	if(valores[maxg]<valores[i])
    		maxg=i;
    }
    cout<<"Ganancia: "<<valores[maxg]-valores[minv];
}