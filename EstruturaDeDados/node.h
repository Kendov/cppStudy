//temp



class Celula{
private:
    Celula *proxima;
    Celula *anterior;

    void* elemento;

public:
    Celula(Celula proxima, void* elemento){
        this->proxima = new Celula(proxima);
        this->elemento = elemento;
    }
    
    Celula(void* elemento){
        this->elemento = elemento;
    }

    void setProxima(Celula proxima){
        this->proxima = new Celula(proxima);
    }

    Celula* getProxima(){
        return proxima;
    }

    void* getElemento(){
        return elemento;
    }
    Celula* getAnterior(){
        return anterior;
    }
    void setAnterior(Celula anterior){
        this->anterior = new Celula(anterior);
    }


};

class ListaLigada{
    Celula *primeira;
    Celula *ultima;
    int totalDeElementos;
public:

    void adicionaNoComeco(void* elemento){
        Celula *nova = new Celula(this->primeira, elemento);
        this->primeira = nova;
        if(this->totalDeElementos == 0){
            this->ultima = this->primeira;
            }
        this->totalDeElementos++;
    }

    void adiciona(void* elemento){
        if (this->totalDeElementos == 0){
            this->adicionaNoComeco(elemento);
        }
        else{
            Celula *nova = new Celula(elemento);
            //this->ultima.setProxima(nova); //expression must have class type
            this->ultima = nova;
            this->totalDeElementos++;
        }
    }
    void adiciona(int posicao, void* elemento) {

    }
    void* pega(int posicao){
        return nullptr;
    }
    void remove(int posicao){}
    int tamanho() {return 0;}
    bool contem(void* o)
    {
        return false;
    }
};