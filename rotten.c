//rotten v0.1, feito por Danilo Fragoso em 11/08/2016
//esse script rotaciona as letras do alfabeto em ROTn ou como na cifra de cesar.

#include<stdio.h>
#include<string.h>

int main() {

  char cphr[255], dphr[255], trb;
  int i, x;
  int rotr = 0;
  scanf("%s", cphr);
  int qcar = strlen(cphr); qcar--;
  strcpy(dphr,cphr);

 for (x = 0; x < 25; x++){rotr++;
   for (i = 0; i <= qcar; i++){
     trb = dphr[i]; trb = trb + rotr;
       if ((trb > 90) && (trb < 97) || (trb > 122)){
         dphr[i] = trb - 26;
      }else{ dphr[i] = trb;}
      printf("%c", dphr[i]);
    }printf("\n"); rotr--;
  }return 0;
}
