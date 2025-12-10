Algoritmo "primo2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
   contdiv,n,c:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreval("digite um numero")
   leia (n)
   
   c<- 1
   contdiv<-0
   
   repita

     se (n % c  = 0) entao
     contdiv<- contdiv+1
     fimse
       c<-c+1
   ate(c>n)
   se ( contdiv=2) entao
   escreva("primo")
   senao
    escreva("não")
    fimSe

Fimalgoritmo