Algoritmo "par_com_para"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 22/07/2025
Var
// Seção de Declarações das variáveis 
cont,v:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
     escreval("digite um valor")
     leia(v)
     se (v%2 =1) entao
     v<- v -1
     fimSe
   para cont <- v ate 0 passo -2 faca
   escreva(cont)
   fimpara

Fimalgoritmo