Algoritmo "soma5"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 16/07/2025
Var
   // Seção de Declarações das variáveis
   n:inteiro
   soma:real
   resp:caractere

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...

   soma<- 0
   repita
      escreva("digite um valor")
      leia(n)
      soma <-soma+n
      escreva("você quer continuiar? S/N")
      leia(resp)
   ate (resp = "n")
   escreva(soma)

Fimalgoritmo