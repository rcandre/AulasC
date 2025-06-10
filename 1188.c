#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
int bubbleSort(int *v, int n){ 
  int s,c=0;
  do{
    s=0;
    for (int i=1; i<n; i++)
        if (v[i-1] > v[i]){
            swap(&v[i-1], &v[i]);
	    s=1;
	    c++;
	}
    }while(s!=0);
} 

int main(){
    int tam,i,*v;
    scanf("%d",&tam);
    v=(int*)malloc(tam*sizeof(int));
    for(i=0;i<tam;i++)scanf("%d",&v[i]);
    bubbleSort(v,tam);
    for(i=0;i<tam;i++)printf("%d ",v[i]);
    return 0;
}
