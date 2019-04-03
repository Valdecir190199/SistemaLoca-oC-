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


void inserir (){
      Acervo acervo;

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


void mostrar(list<Acervo>listaAcervo){
      
      for (list<Acervo>::iterator it=listaAcervo.begin(); it != listaAcervo.end(); ++it){

            cout << ".........................: \n" ;
            cout << "Descrição dos Itens: \n" ;
            cout << "ID: " << endl  << (*it).id << endl;
            cout << "Nome: " << endl  << (*it).nome << endl;       
            cout << "Preço: " << endl  << (*it).id << endl;
            cout << "Quantidade: " << endl  << (*it).qtde << endl;
      }




}


void excluir ()
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



int main ()
{


inserir();
inserir();
excluir();
mostrar(listaAcervo);



return 0;
}







