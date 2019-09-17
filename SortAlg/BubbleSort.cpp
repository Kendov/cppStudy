#include "toolKit.h"


//template <size_t n> 
void bubblesort(long long int vec[], unsigned int n){
    
    exeTime calc;  //printing the execution time

    bool troca = true;
    int aux;
    
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

//template<size_t n>
//long long int (&vec)[n]
void insertionSort(long long int vec[], unsigned int n){

    exeTime time; //printing the execution time

    int temp, x;
    for(int i = 1; i < n; i++){
        temp = vec[i];
        x = i - 1;

        while(x >= 0 && vec[x] > temp){
            vec[x + 1] = vec[x];
            x--;
            
            
        }
        vec[x + 1] = temp;

    }
}
void sortSelection(long long int vec[], unsigned int n){
    exeTime time;

    for(int fixo = 0; fixo < n - 1; fixo++){
        int menor = fixo;
        for(int i = menor +1; i < n ;i++){
            if(vec[i] < vec[menor]){
                menor = i;
            }
            
        }
        if(menor != fixo){
            int f = vec[fixo];
            vec[fixo] = vec[menor];
            vec[menor] = f;
        }
    }
}


int main(int argc, char const *argv[])
{
    srand(time(NULL)); // seed for random function

    std::cout << "... \n\n";

    unsigned int size = 10000;

    //int vetor[] = {32,27,64,18,95,14,90,70,1};   test
    long long int vetor[size];

    //set random values for the array
    for(int i = 0; i < size; i++){

        vetor[i] = random(1, 100);
    }
    //*********

    //make copys of vetor for the others sorts
    long long int vetor1[size];
    long long int vetor2[size];
    for(int i = 0;i<size;i++){
        
        vetor1[i] = vetor[i]; 
        vetor2[i] = vetor[i]; 
    }
    //*********
    

    bubblesort(vetor, size);
    std::cout<<"bubble ordenado \n"<<std::endl;


    insertionSort(vetor1, size);
    std::cout<<"insertion ordenado \n"<<std::endl;


    sortSelection(vetor2, size);
    std::cout<<"selection ordenado \n"<<std::endl;


    //loop for printing the array
    // for (int i = 0; i < sizeof(vetor)/sizeof(vetor[0]) ;i++)
    // {
    //     std::cout<<vetor[i]<<"   "<<vetor1[i]<<"   "<< vetor2[i] <<"\n";
    // }
    std::cout<<std::endl;


    //size of array
    std::cout << "size of array:" <<sizeof(vetor)/sizeof(vetor[0])<<std::endl;


    std::cin.get();
    return 0;
}

















