#ifndef ALUNO_H
#define ALUNO_H
#include <string>

class Aluno{

    std::string name;

    public:
        Aluno(std::string name){
            this->name = name;
        }
        Aluno() = default;

        std::string GetName(){
            return name;
        }


        void SetName(std::string Nname){
            name = Nname;
        }


    };

#endif