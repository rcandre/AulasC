#include <stdio.h>
void ler_vetor(int num[], int tam)
  {
    int x;
    for(x=0;x<tam;x++){
      scanf("%d",&num[x]);
    }
  }
void escrever_vetor(int num[], int tam){
  int i;
  for(i=0;i<tam;i++){
    if(i!=0) printf(" ");
    printf("%d",num[i]);
  }
  printf("\n");
  }
void troca(int *a, int *b){
  int aux;
  aux=*a;
  *a=*b;
  *b=aux;
}
void selection_sort(int num[], int tam) {
  int i, j, min, aux;
  for (i = 0; i < (tam-1); i++)
  {
     min = i;
     for (j = (i+1); j < tam; j++) {
       if(num[j] < num[min])
         min = j;
     }  
     troca(&num[i],&num[min]);     
  }
}
int bubbleSort(int *v, int n){
  int s,c=0;
  do{
    s=0;
    for (int i=1; i<n; i++)
        if (v[i-1] > v[i]){
            troca(&v[i-1], &v[i]);
	    s=1;
	    c++;
	}
    }while(s!=0);
    return c;
}
void saida(int t){
  if(t%2) printf("Marcelo\n");
  else printf("Carlos\n");
}
int main(){
  int n;
  do{
  scanf("%d",&n);
  if(n==0) break;
  int v[n];
  ler_vetor(v,n);
  int t=bubbleSort(v,n);
  saida(t);
  }while(1);
  return 0;
}
