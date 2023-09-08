#pragma once
#ifndef PESSOA_H_
#define PESSOA_H_

#include <iostream>

using namespace std;

class Pessoa{
    public:
        string nome;
        string email;
        string sexo;
        string dataNascimento;

        Pessoa(string _nome, string _email, string _sexo, string _dataNascimento){
            this->nome = _nome;
            this->email = _email;
            this->sexo = _sexo;
            this->dataNascimento = _dataNascimento;

        }

        bool operator<(Pessoa B){
            
            return this->nome < B.nome;
        }


};

#endif
