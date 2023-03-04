#include <iostream>
#include <locale>
#include <cstdlib>
#define TAM_FILA 10
using namespace std;
typedef string elem;

typedef struct {
	int inicio, fim, total;
	
	elem nome[TAM_FILA];
	int tempo[TAM_FILA], captanque[TAM_FILA], cappessoas[TAM_FILA];
	
} Fila;

void Create(Fila *F);
void Empty(Fila *F);
bool IsEmpty(Fila *F);
bool IsFull(Fila *F);
void Enter(Fila *F, elem *X, int *Y, bool *erro);
elem Out(Fila *F, bool *erro);
void Print(Fila *F);
void Print1(Fila *F);
void MaiorCapacidadePas(Fila *F);
void MaiorCapacidadeTan(Fila *F);

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

void Enter(Fila *F, elem *X, int *Y, int *a, int *b, bool *erro) {
    if(!IsFull(F)){
		*erro=false;
		F->total++;
		F->nome[F->fim] = *X;
		F->tempo[F->fim]= *Y;
		F->captanque[F->fim] = *a;
		F->cappessoas[F->fim] = *b; 
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
		if (F->total == 1){
			F->total=0;
			F->fim=0;
			F->nome[F->fim] = "";
			F->tempo[F->fim] = 0;
			F->captanque[F->fim] = 0;
			F->cappessoas[F->fim] = 0; 
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
			F->captanque[F->fim] = 0;
			F->cappessoas[F->fim] = 0; 
			F->fim--;
			
			return X;
		}	
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
				cout << "==============================" << endl;
				cout << "voo " << i+1 << endl;
				cout << F->nome[i] << endl;
				cout << F->tempo[i] << endl;
				cout << F->captanque[i] << endl;
				cout << F->cappessoas[i] << endl; 
				cout << "==============================" << endl;
				cout << endl << endl;
			}
	}
}

void Print1(Fila *F){
	cout << "==============================" << endl;
	cout << "voo " << 1 << endl;
	cout << F->nome[0] << endl;
	cout << F->tempo[0] << endl;
	cout << F->captanque[0] << endl;
	cout << F->cappessoas[0] << endl; 
	cout << "==============================" << endl;
	cout << endl << endl;
}

void MaiorCapacidadeTan(Fila *F){
	
	int maior=0;
	
	for(int i=0; i<F->total; i++){
		if(F->tempo[i] > maior && F->captanque[i] == 100){
			maior = i;
		}
	}
	
	cout << "==============================" << endl;
	cout << "voo " << maior+1 << endl;
	cout << F->nome[maior] << endl;
	cout << F->tempo[maior] << endl;
	cout << F->captanque[maior] << endl;
	cout << F->cappessoas[maior] << endl; 
	cout << "==============================" << endl;
	cout << endl << endl;
	
}

void MaiorCapacidadePas(Fila *F){
	
	int maior=0;
	
	for(int i=0; i<F->total; i++){
		if(F->cappessoas[i] > maior){
			maior = i;
		}
	}
	
	cout << "==============================" << endl;
	cout << "voo " << maior+1 << endl;
	cout << F->nome[maior] << endl;
	cout << F->tempo[maior] << endl;
	cout << F->captanque[maior] << endl;
	cout << F->cappessoas[maior] << endl; 
	cout << "==============================" << endl;
	cout << endl << endl;
	
}



