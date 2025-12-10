Algoritmo "idade2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/07/2025
Var
// Seção de Declarações das variáveis 
    atual,nasci,result:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
             escreva("em que ano você nasceu?")
             leia(nasci)
             escreva("em que ano estamos?")
             leia(atual)
             
             result <- atual-nasci
             Se(result  >= 18)entao
             escreva ("você já é maior de idade")
             senao
             escreval("você ainda é menor de idade")
             fimSe
             escreva("voceê tem",result,"anos de idade")
Fimalgoritmo