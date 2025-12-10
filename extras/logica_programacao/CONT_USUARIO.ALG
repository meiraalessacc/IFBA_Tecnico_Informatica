Algoritmo "cont_usuario"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 14/07/2025
Var
   // Seção de Declarações das variáveis
   cont,escolhaE,result:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("Você quer contar:")
   escreval("1-crescente")
   escreval("2-decrecente")
   leia(escolhaE)

   escolha(escolhaE)
   caso 1
      escreval("digite um numero ")
      leia(cont)
      result <- 0
      Enquanto (result <= cont) faca
         Escreval(result)
         result <- result + 1
      FimEnquanto
caso 2
   escreval("digite um numero ")
   leia(cont)
   result<- cont
   Enquanto (result >= 0) faca
      Escreval(result)
      result <- result - 1
   FimEnquanto
FimEscolha




Fimalgoritmo

