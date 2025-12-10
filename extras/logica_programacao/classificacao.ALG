Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/07/2025
Var
   // Seção de Declarações das variáveis
   n1,n2,n3,media:real
   esc:inteiro

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("digite sua primeira nota")
   leia(n1)
   escreva("digite sua segunda nota")
   leia(n2)
   escreva("digite sua terceira nota")
   leia(n3)

   media<- (n1+n2+n3)/3

   se(media<=1000) e (media>=900) entao
      escreva("classificação A")
   senao
      se(media<=890) e (media>=800)entao
         escreva("classificação B")
      senao
         se (media<=790) e (media>=700)entao
            escreva("classificação C")
         senao
            se (media<=690) e (media>=600)entao
               escreva("classificação E")
            senao
               se (media<500)entao
                  escreva("classificação F")
               fimSe
            fimSe
         fimSe
      fimSe
      fimSe

Fimalgoritmo