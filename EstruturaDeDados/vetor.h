#include <string>
#include "aluno.h"

class Vetor{
    private:
        Aluno alunos[100];
        int quantidadeAlunos = 0;

    private:
        //check if position is valid based on index
        bool isValid(int pos){
            return pos >= 0 && pos <= pos? true:false; 
        }
    
    public:
        void append(Aluno NewAluno){
            alunos[quantidadeAlunos++] = NewAluno;
            
        }

        Aluno GetName(int index){
            
            return alunos[index];

        }

        bool have(Aluno &other){
            for(int i = 0; i <= quantidadeAlunos; i++){
                if(other.GetName() == alunos[i].GetName()){
                    return true;
                }
            }
            return false;
        }
        int tamanho(){
            return quantidadeAlunos;
        }

        std::string toString(){
            std::string output = "[";
            if(quantidadeAlunos == 0){
                return "[ ]";
            }
            for(int i = 0; i < quantidadeAlunos; i++){
                output += "\n  " + alunos[i].GetName() + ","; 
            }
            output += "\n]";
            return output;
        }



        //*****************
        void appendInPos(Aluno newAluno, int pos){            
            if(pos > quantidadeAlunos || pos < 0){
                std::cout<<"posicao invalida"<<std::endl;
                return;
            }
            for (int i = quantidadeAlunos;i > pos;i--){
                alunos[i] = alunos[i-1];
            }
            alunos[pos] = newAluno;
            quantidadeAlunos++;
            
        }
        void deletepos(int pos){
            if(!isValid(pos)){
                std::cout <<"valor invalido"<<std::endl;
                return;
            }
            
            for(int i = pos; i < quantidadeAlunos-1; i++){
                alunos[i] = alunos[i+1];
            }
            alunos[quantidadeAlunos-1] = {};
            quantidadeAlunos--;

        }
        
                
    };