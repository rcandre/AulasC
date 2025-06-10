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
int main(){
  int n;
  scanf("%d",&n);
  int v[n];
  ler_vetor(v,n);
  selection_sort(v,n);
  escrever_vetor(v,n);
  return 0;
}
