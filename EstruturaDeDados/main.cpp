#include <iostream>
#include "aluno.h"
#include "vetor.h"




using namespace std;
int main(){

    Aluno suquinho("suco de fruta");
    Aluno corry("corry");
    Aluno dadin("dadin");
    Aluno dogo("dogo");

    Vetor turma;
    turma.append(suquinho);
    turma.append(corry);
    turma.append(dadin);
    turma.append(dogo);

    for(int i = 0; i <= 3; i++){
        cout << turma.GetName(i).GetName()<< endl;

    }

    cout << "\n ************\n\n\n";

    if(turma.have("corry")){
        cout << "Registered" << endl;
    }else{
        cout << "Not registered" << endl;
    }
        
    system("pause");
    
    
}