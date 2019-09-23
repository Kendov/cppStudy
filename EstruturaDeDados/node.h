//temp
class object{

};

class celula{
private:
    celula *proxima;
    celula *anterior;

    object elemento;

public:
    celula(celula proxima, object elemento){
        this->proxima = new celula(proxima);
        this->elemento = elemento;
    }
    
    celula(object elemento){
        this->elemento = elemento;
    }

    void setProxima(celula proxima){
        this->proxima = new celula(proxima);
    }
    // object getProxima(){
    //     return proxima;
    // }
    celula* getProxima(){
        return proxima;
    }

    object getElemento(){
        return elemento;
    }
    celula* getAnterior(){
        return anterior;
    }
    void setAnterior(celula anterior){
        this->anterior = new celula(anterior);
    }


};