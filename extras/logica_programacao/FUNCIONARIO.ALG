Algoritmo "funcionario"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/07/2025
Var
   // Seção de Declarações das variáveis
   nome:caractere
   salario,Nsalario:real
   depen:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("qual o nome do funcionario")
   leia(nome)
   escreva("qual o salario do fucionario")
   leia(salario)
   escreva("qual a quantidade de dependentes")
   Leia(depen)

   escolha(depen)
   caso 0
      Nsalario<- (salario+ ((salario*5)/100) )
   caso 1,2,3
      Nsalario <- (salario+((salario*10)/100))
   caso 4,5,6
      Nsalario<-(salario+(salario*15)/100))
   outroCaso
      Nsalario<- (salario+(salario*18)/100))
   fimEscolha
   escreval("o novo salario de ",nome," será de",Nsalario,"reais")
Fimalgoritmo