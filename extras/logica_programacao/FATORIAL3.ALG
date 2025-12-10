Algoritmo "fatorial3"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/07/2025
Var
// Seção de Declarações das variáveis 
   n,c,f:inteiro
   r:caractere

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
       repita
       escreval("digite um numero")
       leia (n)
        c<-n
        f<-0
        repita
        escreval(c)
        f<-f*c
        c<- c-1
        ate(c<1)
        escreva(f)
        escreval( "deseja continuar:")
        leia(r)
          limpaTela
        ate(r="n")
        

Fimalgoritmo