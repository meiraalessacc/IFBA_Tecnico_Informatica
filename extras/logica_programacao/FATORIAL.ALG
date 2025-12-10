Algoritmo "fatorial"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
  n,c,f:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

      escreval("digite qual numero quer fatorial")
      leia(n)
      c<-n
      f<-1
      repita
      escreva(c)
      f<-f*c
      c<-c-1

      ate (c<1)
           escreval(" fatorial é ",f)
Fimalgoritmo