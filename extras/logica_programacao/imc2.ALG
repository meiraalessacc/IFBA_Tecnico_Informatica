Algoritmo "imc2"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 11/07/2025
Var
   // Seção de Declarações das variáveis
   peso,altura,imc:real

Inicio
   // Seção de Comandos, procedimento, funções, operadores, etc...
   escreva("digitre seu peso")
   leia(peso)
   escreva("digite sua altura")
   leia(altura)

   imc <- peso/(altura^2)

   se(imc <17)entao
      escreva("muito abaixo do peso")
   senao
      se(imc >=17) e (imc<18.5)entao
         escreva("abaixo do peso")
      senao
         se (imc>=18) e (imc<25)entao
            escreva("peso ideal")
         senao
            se (imc>=25) e (imc<30)  entao
               escreva("sobrepeso")
            senao
               se (imc>=30) e (imc<35) entao
                  escreva("obesidade")
               senao
                  se (imc>=35) e (imc<40)entao
                     escreva("obesidade severa")
                  senao
                     escreva("obesidade mórbida")
                  fimSe
               fimSe
            fimSe
         fimSe
      fimSe
   fimSe

Fimalgoritmo