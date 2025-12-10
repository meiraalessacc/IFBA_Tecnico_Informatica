Algoritmo "triangulos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 06/07/2025
Var
// Seção de Declarações das variáveis 
     l1,l2,l3:real
     eq,es,tri:logico

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
            escreva("digite o primero lado")
            leia(l1)
            escreva("digite o segubndo lado")
            leia(l2)
            escreva("digite o terceiro lado ")
            leia(l3)
            tri<- (l1<l2+l3) e (l2< l1+ l3) e (l3< l2+l1)
            eq <-(l1 = l2) e (l2 =l3)
            es<- (l1 <> l2) e (l2 <> l3) e (l1 <> l3)
            
            escreval("o triangulo é equilatero:", eq)
            escreval("o triangulo é escaleno:",es)
            escreval("pode formar um triagulo:", tri)

Fimalgoritmo