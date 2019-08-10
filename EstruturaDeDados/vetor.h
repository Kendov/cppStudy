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

        bool have(std::string aluno){
            for(int i = 0; i <= index; i++){
                if(aluno == alunos[i].GetName()){
                    return true;
                }
            }
            return false;
        }
                
    };