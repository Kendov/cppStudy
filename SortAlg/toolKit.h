#include <iostream>
#include <chrono>
#include <thread>


struct exeTime
{
    
    std::chrono::high_resolution_clock::time_point start, end;
    std::chrono::duration<float> duration;
    exeTime(){
        start = std::chrono::high_resolution_clock::now();
        //std::chrono::duration<float> duration;
        
    }
    ~exeTime(){
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        std::cout << duration.count() * 1000  << " ms "<< duration.count()<< " sec " << std::endl;
        
    }
};

static int random(int init, int to){
    //srand(time(NULL));
    return rand() % to + init;
}