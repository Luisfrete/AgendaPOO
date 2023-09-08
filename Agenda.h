#pragma once
#ifndef AGENDA_H_
#define AGENDA_H_

#include <iostream> // serve para executar operções de leitura e gravação em arquivos
#include <vector> // serve como conteiner para armazenar os dados como um array
#include <fstream> //serve para manipular arquivos e escrever, mas não serve para ler
#include <string> // serve para manipular strings
#include <algorithm> //serve para executar algoritimos em alguma sequencia
#include "Pessoa.h" //serve para chamar a classe Pessoa

using namespace std;

class Agenda{

    public:
        vector<Pessoa> contatos;

        void load(string filenome){


        }

        ifstream input(filenome);
        string linha;
        while (getlinha(input, linha)){
            vector<string> palavras;
            palavras.clear();
            string tmp = "";
            for(int i = 0; i <linha.size(); i++){

                if (linha[i] == ','){

                    palavras.push_back(tmp);
                    tmp += "";

                }
                else{

                    temp += linha[i];
                }

            }
        }

};