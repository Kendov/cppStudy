#include <iostream>
#include "aluno.h"
#include "vetor.h"




using namespace std;
int main(){

    Aluno a1("suco de fruta");
    Aluno a2("corry");
    Aluno a3("dadin");
    Aluno a4("dogo");

    Aluno a5("teste");
    

    Vetor turma;
    turma.append(a1);
    turma.append(a2);
    turma.append(a3);
    turma.append(a4);


    //mostra todos os alunos no vetor
    cout << turma.toString() << endl;
    
    //*
    cout << "\n ************\n\n\n";
    //*

    //verifica se o objecto esta no vetor
    if(turma.have(a2)){
        cout << "Registered" << endl;
    }else{
        cout << "Not registered" << endl;
    }


    
    //tamanho do vetor
    cout<<"tamanho do vetor: " << turma.tamanho()<<endl;


    //novo aluno em uma posicao especifica
    turma.appendInPos(a5, 1);
    cout << turma.toString() << endl;

    //*
    cout << "\n ************\n\n\n";
    //*

    cout<<"tamanho do vetor: " << turma.tamanho()<<endl;

    

    
    system("pause");
    
    
}