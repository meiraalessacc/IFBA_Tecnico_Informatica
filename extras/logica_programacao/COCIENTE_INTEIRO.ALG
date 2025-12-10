Algoritmo "cociente_inteiro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/07/2025
Var
// Seção de Declarações das variáveis 
  n1,n2,r:inteiro
  q:real 9
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
    escreval("informe um numero")
    leia(n1)
    escreval("informe outro número")
    leia(n2)
    
    q<- n1/n2
    r<- n1\n2
    
    escreval(" o quociente é: ", q, " e o resto inteiro é: ", r)

Fimalgoritmo