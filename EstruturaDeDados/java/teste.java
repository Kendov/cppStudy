
package aulajava.flavio;

public class teste {
    public static void main(String[] args){
        ListaLigada lista = new ListaLigada();
        
        lista.adiciona("Rafael");
        lista.adiciona("Paulo");
        lista.adiciona("Paulo333");
        lista.adiciona("Paulo4444");
        
        //lista.removeDoComeco();
        //lista.removeDoFim();
        lista.remove(2);
        System.out.println(lista);
        System.out.println(lista.tamanho());
    }
}
