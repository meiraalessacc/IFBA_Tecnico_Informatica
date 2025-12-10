Algoritmo "juros"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 09/07/2025
Var
// Seção de Declarações das variáveis 
         valor,result:real
         parc:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
            escreva("qual o valor do emprestimo")
            leia(valor)
            escreva("em quantas parcelas quer dividir")
            leia(parc)
            result <- ((valor+((valor*20)/100))/parc)
            escreva("voce pagara parcelas de R$ ",result)
            
            

Fimalgoritmo