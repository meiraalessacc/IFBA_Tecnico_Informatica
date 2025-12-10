Algoritmo "notasR$"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 20/08/2025
Var
// Seção de Declarações das variáveis 
 valor,notas100,notas50,notas20,notas10,notas5:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

   escreval("Digite um valor");
   leia(valor)
   se ( valor % 5 <> 0) entao
   escreval("erro! o valor deve ser multiplo de 5")
   senao
   notas100 <- valor div 100
   valor <- valor mod 100
   notas50<- valor div 50
   valor <- valor mod  50
     notas20<- valor div 20
   valor <- valor mod 20
     notas10<- valor div 10
   valor <- valor mod 10
     notas5<- valor div 5
   valor <- valor mod 5
   
   escreval("notas entregues")
   se(notas100 > 0) entao
   escreval(notas100,"notas de 100")
   fimse
        se ( notas50 >0) entao
        escreval(notas50, "notas de 50")
        
        fimse
        
        se( notas20 >0) entao
        escreva(notas20," notas de 20")
        fimse
        se(notas10>0) entao
        escreval(notas10," notas 10")
        fimse
        se( notas5>0) entao
        escreval(notas5," notas 5 ")
        fimse
        fimse

   
Fimalgoritmo