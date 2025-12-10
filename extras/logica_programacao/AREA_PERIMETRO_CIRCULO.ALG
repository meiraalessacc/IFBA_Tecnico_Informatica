Algoritmo "area_perimetro_circulo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/07/2025
Var
// Seção de Declarações das variáveis 
         area,perimetro,raio,piv:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
        escreval("informe o raio da circunferencia:")
        leia(raio)
          piv <- 3.14
        area<- (raio^2)* piv
        perimetro<- 2*piv*raio
        
        escreval("a area da circunferencia é:",area," e o perimetro é:", perimetro)

Fimalgoritmo