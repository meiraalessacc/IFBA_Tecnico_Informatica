Algoritmo "primo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
   n,c,contdiv:inteiro
   

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   c<-1
   contdiv<-0
   escreval("digite um numero")
   leia(N)
   repita
   se( n%c =0 ) entao
   contdiv<- contdiv+1
       fimSe
    c<- c+1
   ate(c>n)
     se(contdiv =2) entao
       escreval("numero primo")
       senao
       escreval("numero não primo")
       fimSe
   escreval(contdiv)

Fimalgoritmo