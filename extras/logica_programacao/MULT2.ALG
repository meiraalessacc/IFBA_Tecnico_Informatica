Algoritmo "mult2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
      n,r,cont:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

     r<-0
     cont<-0
     escreval("quer a tabuada de que número?")
     leia(n)
     repita
     escreval(n," x", cont, "=", r)
     cont<-cont +1
     r<- cont*n
     ate(cont>10)

Fimalgoritmo