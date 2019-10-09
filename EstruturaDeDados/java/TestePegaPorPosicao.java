
package aulajava.flavio;


public class TestePegaPorPosicao {
    public static void main(String[] args){
        ListaLigada lista = new ListaLigada();
        
        lista.adiciona("Rafael");
        lista.adiciona("paulo");
        lista.adiciona("Ana");
        
        System.out.println(lista.pega(2));
    }
}
