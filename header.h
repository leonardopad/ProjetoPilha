#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Pilha {
	int topo;
	int capa;
	float *pElem;
};
// funcao principal para criar a pilha
void criarpilha ( struct Pilha *p, int c ) {
	p->topo = -1;
	p->capa = c;
	p->pElem = (float*) malloc (c * sizeof(float));
}
// validacao para impedir de tirar oq nao existe
int estavazia ( struct Pilha *p ){
   if( p-> topo == -1 )
      return 1;   //verdadeiro
   else
      return 0;   // falso
}
// funcao para impedir de criar mais do que a capacidade
int estacheia ( struct Pilha *p ){
	if (p->topo == p->capa - 1)
		return 1;
	else
		return 0;
}
// funcao para adicionar valores a pilha
void empilhar ( struct Pilha *p, float v){

	p->topo++;
	p->pElem [p->topo] = v;

}
// funcao para retirar valores da pilha
float desempilhar ( struct Pilha *p ){

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}
// funcao que pega o elemento adicionado por ultimo a pilha
float retornatopo ( struct Pilha *p ){

   return p->pElem [p->topo];

}
