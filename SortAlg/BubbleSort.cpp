#include <iostream>

using namespace std;

template <size_t n> 
void bublesort(int (&vec)[n]){
    bool troca = true;
    int aux;
    cout<< n <<endl;
    while(troca){
        troca = false;
        
        for (int i = 0; i < n; i++)
        {
            if(vec[i] > vec[i+1]){
                aux = vec[i];
                vec[i] = vec[i+1];
                vec[i+1] = aux;
                troca = true;
            }
        }
        
    }
}




int main(int argc, char const *argv[])
{
    int vetor[] = {32,27,64,18,95,14,90,70,1,100,200};


    bublesort(vetor);

    cout<<"array ordenado"<<endl;

    for (int i = 0; i < sizeof(vetor)/sizeof(int) ;i++)
    {
        cout<<vetor[i]<<", ";
    }
    cout<<endl;

    cout << sizeof(vetor)/sizeof(vetor[0])<<endl;


    cin.get();
    return 0;
}

