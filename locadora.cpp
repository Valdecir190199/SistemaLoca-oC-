#include <iostream>
#include <list>
#include <string>
#include <stdlib.h>

using namespace std;

struct Acervo{
      int codigo ;
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
            cin >> acervo.codigo;

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
            
            cout << "ID: "   << (*it).codigo << endl;
            cout << "Nome: "  << (*it).nome << endl;       
            cout << "Preço: "   << (*it).preco << endl;
            cout << "Quantidade: "   << (*it).qtde << endl;
            cout << ".........................: \n" ;
            cout << ".........................: \n" ;
      }




}


void excluirAcervo (list<Acervo>& listAcervo)
{

     int codigo;
  list<Acervo>::iterator it;

  cout << "Informe o código do item: ";
  cin >> codigo;
  cout << endl;

  for(it = listAcervo.begin(); it != listAcervo.end(); it++){
    if(it->codigo == codigo){
      listAcervo.erase(it);
      break;
    }
  }

cout << "Item removido!" << endl;
      
    

}



void itensNLocados(list<Acervo>listaAcervo)
{


 for (list<Acervo>::iterator it=listaAcervo.begin(); it != listaAcervo.end(); ++it){

          
            cout << ".........................: \n" ;
            
            cout << "ID: "   << (*it).codigo << endl;
            cout << "Nome: "  << (*it).nome << endl;       
            cout << "Preço: "   << (*it).preco << endl;
            cout << "Quantidade: "   << (*it).qtde << endl;
            cout << ".........................: \n" ;
            cout << ".........................: \n" ;
      }

}


struct Cliente{
      int codigo;
      string nome;
      int idade;
};

list<Cliente>listaCliente;

void inserirCliente (){
      Cliente cliente;

       
      cout << "Cadastro de Cliente: \n";
      cout << "------------------------ \n";
  
      cout << "Cadastre o id do cliente: \n";
            cin >> cliente.codigo;

      cout << "Cadastre o nome: \n";
            cin >> cliente.nome;
      
      cout << "Cadastre a idade: \n";
            cin >> cliente.idade;
     

            listaCliente.push_back(cliente);

}


void mostrarCliente(list<Cliente>listaCliente){
      
      for (list<Cliente>::iterator it=listaCliente.begin(); it != listaCliente.end(); ++it){

       
            cout << ".........................: \n" ;
            cout << "ID: "   << (*it).codigo << endl;
            cout << "Nome: "   << (*it).nome << endl;       
            cout << "Idade: "  << (*it).idade << endl;
            cout << ".........................: \n" ;
            cout << ".........................: \n" ;
         
      }

}


void excluirCliente (list<Cliente>& listCliente)
{

 
     int codigo;
  list<Cliente>::iterator it;

  cout << "Informe o código do Cliente: ";
  cin >> codigo;
  cout << endl;

  for(it = listCliente.begin(); it != listCliente.end(); it++){
    if(it->codigo == codigo){
      listCliente.erase(it);
      break;
    }
  }

cout << "Item removido!" << endl;
      
    
    

}


struct Locacao{
      int codigo;
     
      double valorLocacao;
      

};


void locar (){

    Locacao locacao;
    Acervo acervo;
    Cliente cliente;

    list<Cliente> listaCliente;
    list<Acervo>listaAcervo;
    list<Locacao>listaLocacao;

    int codigo;
   
        cout << "Locação\n";       
    
   
        cout << "Digite o codigo do Item\n";

        cin >> acervo.codigo;

        
        
        cout << "Digite o codigo do Cliente\n";

        cin >> cliente.codigo;

      
         cout << acervo.codigo << "\n";
         cout << acervo.nome << "\n";
         cout << acervo.preco << "\n";
         cout << acervo.qtde << "\n";

        
         cout << cliente.codigo << "\n";
         cout << cliente.nome << "\n";
         cout << cliente.idade << "\n";
        

         listaLocacao.push_back(locacao);
    
               

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
        
            excluirCliente(listaCliente);
            

        }else if (opcao == 4){

        cout << "Descrição dos Clientes: \n" ;
        mostrarCliente(listaCliente);

        }
    

    }else if (opcao == 2) {

        cout << "Cadastrar: 1 \n";
        cout << "Excluir: 2 \n";
        cout << "Modificar: 3 \n";
        cout << "Visualizar: 4 \n";
        cout << "Visualizar itens não Locados: 5 \n";

        int opcao;

        cin >> opcao;

        if(opcao == 1){
            
            inserirAcervo();

        }else if (opcao == 2){

            excluirAcervo(listaAcervo);
            
        }else if (opcao == 3){

            cout << "Comando não criado \n";

        }else if (opcao == 4){
            cout << "Descrição dos Itens: \n" ;
            mostrarAcervo(listaAcervo);
        
        }else if (opcao == 5){
            cout << "Descrição dos Itens Não Locados: \n" ;
            itensNLocados(listaAcervo);
        
        }

    }else if (opcao == 3) {
        
        cout << "Cadastrar: 1 \n";
      
        int opcao;

        cin >> opcao;

        if(opcao == 1){

            locar();

        }

    }else{

          cout << "Comando invalido: \n";
    }

}while(opcao !=0);



return 0;
}

