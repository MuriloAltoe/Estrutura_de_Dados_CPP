#include <iostream>
#include <locale>
#include <cstdlib>
#define TAM_FILA 10
using namespace std;
typedef string elem;

typedef struct {
	int inicio, fim, total;
	elem nome[TAM_FILA];
	int tempo[TAM_FILA];
} Fila;

void Create(Fila *F);
void Empty(Fila *F);
bool IsEmpty(Fila *F);
bool IsFull(Fila *F);
void Enter(Fila *F, elem *X, string *Y, bool *erro);
elem Out(Fila *F, bool *erro);
elem Out2(Fila *F, int *x , bool *erro);
void Print(Fila *F);

void Create(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
     return;
}

void Empty(Fila *F) {
     F->inicio=0;
     F->fim=0;
     F->total=0;
}

bool IsEmpty(Fila *F) {
    if (F->total==0)
       return true;
    else 
		return false;
}

bool IsFull(Fila *F) {
    if (F->total==TAM_FILA)
       return true;
    else 
		return false;
}

void Enter(Fila *F, elem *X, int *Y, bool *erro) {
    if(!IsFull(F)){
		*erro=false;
		F->total++;
		F->nome[F->fim]=*X;
		F->tempo[F->fim]=*Y;
		F->fim++;
    }
    else {
	
		*erro=true;
		Print(F);
    	
	}
}

elem Out(Fila *F, bool *erro) {
    if (!IsEmpty(F)) {
    	*erro=false;
    	elem X;
		X=F->nome[F->inicio];
		if (F->total == 1){// se tiver somente 1 na fila
			F->total=0;
			F->fim=0;
			F->nome[F->fim] = "";
			F->tempo[F->fim] = 0;
			return X;
		}
		else{ 
			F->total--;			   
			for(int i=0; i< F->total; i++){
				F->nome[i] = F->nome[i+1];// 0 <- 1   1 <- 2    2 <- 3
				F->tempo[i] = F->tempo[i+1];
			}
			F->nome[F->fim] = "";
			F->tempo[F->fim] = 0;
			F->fim--;
			return X;
		}	
    }
    else *erro=true;
}

elem Out2(Fila *F, int *x , bool *erro){
	 if (!IsEmpty(F)) {
	 	
    	*erro=false;
    	
    	elem j;
    	
		j = F->nome[*x];
		
		F->nome[*x] = "";
		F->tempo[*x] = 0;
				
		return j;
		
		} 
		
		else *erro=true;	
    }



void Print(Fila *F){
	if(F->total == 0)
		cout << "Ninguém na fila." << endl;
	else
	{	// imprimi como se fosse vetor comum
		for (int i= F->inicio; i< F->fim; i++) 
			{
				cout << F->nome[i] <<", "<< F->tempo[i] << "\t";
			}
	}
}

