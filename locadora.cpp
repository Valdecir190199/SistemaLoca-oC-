#include <iostream>
#include <list>
#include <string>
#include <stdlib.h>

using namespace std;

struct Acervo{
      int id;
      string nome;
      float preco;
      int qtde;

};

list<Acervo>listaAcervo;


void inserirAcervo (){
      Acervo acervo;

       
      cout << "Cadastro de Acervo: \n";
      cout << "------------------------ \n";
  
      cout << "Cadastre o id do item: \n";
            cin >> acervo.id;

      cout << "Cadastre o nome: \n";
            cin >> acervo.nome;
      
      cout << "Cadastre o preço: \n";
            cin >> acervo.preco;
      
      cout << "Cadastre a quantidade: \n";
            cin >> acervo.qtde;

            listaAcervo.push_back(acervo);

}


void mostrarAcervo(list<Acervo>listaAcervo){
      
      for (list<Acervo>::iterator it=listaAcervo.begin(); it != listaAcervo.end(); ++it){

          
            cout << ".........................: \n" ;
            
            cout << "ID: "   << (*it).id << endl;
            cout << "Nome: "  << (*it).nome << endl;       
            cout << "Preço: "   << (*it).preco << endl;
            cout << "Quantidade: "   << (*it).qtde << endl;
            cout << ".........................: \n" ;
            cout << ".........................: \n" ;
      }




}


void excluirAcervo ()
{

      int idd = 1;

      Acervo acervo;

      list<Acervo>::iterator it1;

      it1 =  listaAcervo.begin();

      it1 = listaAcervo.erase(it1);
      
    

}


struct Cliente{
      int id;
      string nome;
      int idade;
};

list<Cliente>listaCliente;

void inserirCliente (){
      Cliente cliente;

       
      cout << "Cadastro de Cliente: \n";
      cout << "------------------------ \n";
  
      cout << "Cadastre o id do cliente: \n";
            cin >> cliente.id;

      cout << "Cadastre o nome: \n";
            cin >> cliente.nome;
      
      cout << "Cadastre a idade: \n";
            cin >> cliente.idade;
     

            listaCliente.push_back(cliente);

}


void mostrarCliente(list<Cliente>listaCliente){
      
      for (list<Cliente>::iterator it=listaCliente.begin(); it != listaCliente.end(); ++it){

       
            cout << ".........................: \n" ;
            cout << "ID: "   << (*it).id << endl;
            cout << "Nome: "   << (*it).nome << endl;       
            cout << "Idade: "  << (*it).idade << endl;
            cout << ".........................: \n" ;
            cout << ".........................: \n" ;
         
      }




}


void excluirCliente ()
{

      int idd = 1;

      Cliente cliente;

      list<Cliente>::iterator it1;

      it1 =  listaCliente.begin();

      it1 = listaCliente.erase(it1);
      
    

}


struct Locacao{
      int id;
      Acervo acervo;
      Cliente cliente;
      

};

list<Locacao>listaLocacao;


void Locar (Acervo acervo, Cliente cliente){
      Locacao locacao;

       
      cout << "Cadastro de Acervo: \n";
      cout << "------------------------ \n";
  
      cout << "Cadastre o id do item: \n";
            cin >> acervo.id;

      cout << "Cadastre o nome: \n";
            cin >> acervo.nome;
      
      cout << "Cadastre o preço: \n";
            cin >> acervo.preco;
      
      cout << "Cadastre a quantidade: \n";
            cin >> acervo.qtde;

            listaAcervo.push_back(acervo);

}


int main ()
{

int opcao;

do{

    
    
    

    cout << "Cliente: 1 \n";
    cout << "Acervo: 2 \n";
    cout << "Locação: 3 \n";
    cout << ".........................: \n" ;
    cout << ".........................: \n" ;

    cin >> opcao;

    if(opcao == 1){


        
        
        cout << "Cadastrar: 1 \n";
        cout << "Excluir: 2 \n";
        cout << "Modificar: 3 \n";
        cout << "Visualizar: 4 \n";

        int opcao;
        
        cin >> opcao;

        if(opcao == 1){
    
            inserirCliente();

            
        }else if (opcao == 2) {
        
            excluirCliente();
            

        }else if (opcao == 4){

        cout << "Descrição dos Clientes: \n" ;
        mostrarCliente(listaCliente);

        }
    

    }else if (opcao == 2) {

        cout << "Cadastrar: 1 \n";
        cout << "Excluir: 2 \n";
        cout << "Modificar: 3 \n";
        cout << "Visualizar: 4 \n";

        int opcao;

        cin >> opcao;

        if(opcao == 1){
            
            inserirAcervo();

        }else if (opcao == 2){

            excluirAcervo();
            
        }else if (opcao == 3){

            cout << "Comando não criado \n";

        }else if (opcao == 4){
            cout << "Descrição dos Itens: \n" ;
            mostrarAcervo(listaAcervo);
        
        }

    }else if (opcao == 3) {
        
        cout << "Cadastrar: 1 \n";
        cout << "Excluir: 2 \n";
        cout << "Modificar: 3 \n";
        cout << "Visualizar: 4 \n";   

        int opcao;

        cin >> opcao;

    }else{

          cout << "Comando invalido: \n";
    }

}while(opcao !=0);

/*
  
    inserir();
    excluir();
    mostrar(listaAcervo);

*/

return 0;
}







