Algoritmo "imc"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 10/07/2025
Var
// Seção de Declarações das variáveis 
           massa,altura,imc:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
              escreva("qual o seu peso")
              leia(massa)
              escreva("qual a sua altura")
              leia(altura)
              imc <- massa/(altura^2)

              se (imc < 18.5) entao
              escreva("seu peso está abaixo do ideal")
              senao(imc > 25)entao
              escreva("seu peso está acima da media")
              senao
              escreva("seu peso está ideal")
              fimSe


Fimalgoritmo