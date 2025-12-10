Algoritmo "totn"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
  n,c,totn:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
c<-0
totn<-0
    repita
    escreval("digite um numero")
    leia (n)
    c<- c+1
    se(n<0) entao
    totn<- totn+1
    fimse
                  ate(c>3)
    escreval(totn)

Fimalgoritmo