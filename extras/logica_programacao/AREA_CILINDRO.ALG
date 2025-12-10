Algoritmo "area_cilindro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/07/2025
Var
// Seção de Declarações das variáveis 
    piv,r,h,a,v:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
           piv <- 3.14
          escreval("informe o raio da lata:")
          leia(r)
          escreval("informe a altura da lata")
          leia(h)
          
           a<- (2*piv*r^2) + ( 2*piv*r*h )
           v<- piv*r^2*h
           
           
           escreval("a area do cilindro é:", a, " e o volume é:", v)
           
           
           
          

Fimalgoritmo