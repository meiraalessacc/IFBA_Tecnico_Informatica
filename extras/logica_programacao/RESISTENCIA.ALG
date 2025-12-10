Algoritmo "resistencia"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/07/2025
Var
   // Seção de Declarações das variáveis
   r1,r2,r3,reqp,reqs:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreval("informe o valor de r1")
   leia(r1)
   escreval("informe o valor de r2")
   leia(r2)
   escreval("informe o valor de r3")
   leia(r3)
   
   
   reqp<- (r1*r2)/ (r1+r2)
   reqs<- reqp+ r3
   
   escreval(" a resistencia equivalente desse circuito é:", reqs)


Fimalgoritmo