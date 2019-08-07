#include <iostream>

using namespace std;
int main(){



    class aluno{
        string name;
        public:
            string GetName(){
                return name;
            }

            void SetName(string Nname){
                name = Nname;
            }


    };

    class vetor{
        string Vname = "";
        
        public:
            void append(string input){
                Vname += input + " ";
                
            }
            string GetName(){
                
                return Vname;

                
            }
    };


    vetor Vetor;
    aluno Aluno;
    Aluno.SetName("aadd");

    cout << Aluno.GetName()<< endl;

    Vetor.append("test1");
    Vetor.append("test2");

    cout << Vetor.GetName() << endl;

    cin.get();



    
    
}