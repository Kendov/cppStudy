#include <string>
#include "aluno.h"

class Vetor{
    private:
        Aluno alunos[100];
        int index = 0;
    
    public:
        void append(Aluno NewAluno){
            alunos[index++] = NewAluno;
            
        }

        Aluno GetName(int index){
            
            return alunos[index];

        }

        bool have(Aluno &other){
            for(int i = 0; i <= index; i++){
                if(other.GetName() == alunos[i].GetName()){
                    return true;
                }
            }
            return false;
        }
        int tamanho(){
            return index;
        }

        std::string toString(){
            std::string output = "[";
            if(index == 0){
                return "[ ]";
            }
            for(int i = 0; i < index; i++){
                output += "\n  " + alunos[i].GetName() + ","; 
            }
            output += "\n]";
            return output;
        }



        //*****************
        void appendInPos(Aluno newAluno, int pos){            
            if(pos > index || pos < 0){
                std::cout<<"posicao invalida"<<std::endl;
                return;
            }
            for (int i = index;i > pos;i--){
                alunos[i] = alunos[i-1];
            }
            alunos[pos] = newAluno;
            index++;
            
        }
        
                
    };