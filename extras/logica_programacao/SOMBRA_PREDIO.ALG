Algoritmo "sombra_predio"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/07/2025
Var
// Seção de Declarações das variáveis 
         sp,so,ao,ap:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
        escreval("informe o comprimento da sombra do predio")
        leia(sp)
        escreval("informe o comprimento da sombra do objeto")
        leia(so)
        escreval("informe o comprimento do objeto")
        leia(ao)
        
        
        ap<- (ao*sp)/so
        
        escreval("o comprimento do predio é de:",ap)
        
Fimalgoritmo