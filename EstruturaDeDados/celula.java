//temp
class object{

};

class celula{

    private celula proxima;
    private celula anterior;

    private object elemento;


    public celula(celula proxima, object elemento){
        this.proxima = new celula(proxima);
        this.elemento = elemento;
    }
    
    public celula(object elemento){
        this.elemento = elemento;
    }

    public void setProxima(celula proxima){
        this.proxima = new celula(proxima);
    }
    // public object getProxima(){
    //     return proxima;
    // }
    public celula getProxima(){
        return proxima;
    }

    public object getElemento(){
        return elemento;
    }
    public celula getAnterior(){
        return anterior;
    }
    public void setAnterior(celula anterior){
        this.anterior = new celula(anterior);
    }


};