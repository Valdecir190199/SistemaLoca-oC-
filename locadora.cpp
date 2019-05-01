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
   
    Acervo *acervo;
    Cliente *cliente;
    int qtde;
    float valorLocacao; 
   
};
list<Locacao>listaLocacao;

void locar (){
    

    Cliente *c;    
    Acervo *a;
    Locacao locacao;

    int codigo, codigos;

    cout << "Informe o código do Cliente: ";
    cin >> codigo;
    cout << endl;

     cout << "Informe o código do Acervo: ";
    cin >> codigos;
    cout << endl;

    cout << "Informe a qtde: ";
    cin >> locacao.qtde;
    cout << endl;

    c = NULL;
    a = NULL;

    
    list<Cliente>::iterator it;

    list<Acervo>::iterator its;
    
  for(it = listaCliente.begin(); it != listaCliente.end(); it++){
    if(it->codigo == codigo){
      
        
        c  = &(*it);
         locacao.cliente = c;
           

      break;
    }
  }

for(its = listaAcervo.begin(); its != listaAcervo.end(); its++){
    if(its->codigo == codigos){
       
        a = &(*its);
       locacao.acervo = a;
       locacao.valorLocacao = (locacao.qtde * a -> preco);
       a -> qtde =  ( a-> qtde ) - (locacao.qtde);
      break;
    }

  }
        
    
                   cout << "Cliente cadastrado com sucesso \n";
  
                    cout << " id do cliente: \n" << c -> codigo << endl  ;
                   

                    cout << " nome: \n" << c -> nome << endl  ;
                   
      
                    cout << " idade: \n" << c -> idade  << endl ;
                  
                    cout << ".........................: \n" ;

          

                 

       
                  cout << "Acervo cadastrado com sucesso \n";
                    
                  cout << "id do item: \n"  << a -> codigo << endl  ;          
                  

                  cout << " nome: \n"  << a -> nome << endl ;
                   
      
                  cout << " preço: \n" << a -> preco  << endl ;
                  
      
                  cout << " quantidade: \n" << a -> qtde << endl  ;
                    

                  cout << ".........................: \n" ; 
                
            
                 
        

            
         listaLocacao.push_back(locacao);

}

void listarLocacoes(list<Locacao>& listaLocacao)
{
  list<Locacao>::iterator it;

  cout << "--------------- Locações realizadas ---------------" << endl;

  for(list<Locacao>::iterator it = listaLocacao.begin(); it != listaLocacao.end(); it++){
    cout  << " - "
    << it->cliente->nome << " - "
    << it->acervo->nome << " - "
    << endl;

         cout << ".........................: \n" ;
            cout << "Quantidade : "   << (*it).qtde << endl;
            cout << "Valor Total: "   << (*it).valorLocacao << endl;       
            cout << ".........................: \n" ;
         

     

    }


}


int main ()
{

int opcao;

do{
    cout << "Bem Vindo a Locadora Matrix \n" ;       
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
        cout << "Listar Locações 2 \n";
      
        int opcao;

        cin >> opcao;

        if(opcao == 1){

            locar();

        }else if (opcao == 2){

            listarLocacoes(listaLocacao);
            
        }
        

    }else{

          cout << "Comando invalido: \n";
    }

}while(opcao !=0);



return 0;
}

