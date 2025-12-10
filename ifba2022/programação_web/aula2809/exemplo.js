//Modo externo de inserir o Javascript na página
//Comando de saída 
//Imprime um conteudo no corpo do documento HTML
//document.write ("<h1> Olá Mundo</h1>");

//Mostrar uma caixa de dialogo do navegador 
//window.alert("Minha mensagem");
//a palavra chave window pode ser suprimida na chamada dos seus métodos 

//Imprime algo no console do navegador, é utilizado para fazer testes e verificações no código
//console.log("Estou imprimindo algo no console do navegador");

//Variavel é um espaço na memoria onde armazenamos valores.Estes espaços na memoria recebem um nome para poder identifica-los.

/*
 O  Javascript tem tres tipos básicos de valores para os variaveis.
 String -> textos que precisam estar entre aspas.
 Number -> Armazena numeros que podem ser de dois tipos (Números de ponto flutuante ou float e Números Inteiros)
 Boolen ->Armazena os valores True para verdadeiro e False para falso (1 verdadeiro 0 é falso
 
 
 Javascript é uma linguagem com tipagem dinamica e fraca ou seja não é necessario informar o TIPO da variavel podem mudar o seu tipo de acordo com o valor que irá receber.
 
 Podemos utilizar a palavra chave const para criar constantes. Constante é um espaço da memoria que não pode ser alterado depois de definido.
*/
//const PI = 3.1415;
//document.write(PI);
//PI=1; Não é permitido mudar o valor de uma constante depois de já definida
//const PI=2.15; Não é permitido criar constantes com mesmo nome
//usa-se .(ponto) para numeors decimais 
//Calcular o valor da area de uma circunferencia que tenha raio de 20cm.

//document.write("<h3>Valor da Área da Circunferencia </h3>");
//document.write(5*5*PI );  

/*Temos duas palavras chaves VAR.*/

//var idade=18;
//document.write("<hr>");//linha
//document.write(idade);

//idade=idade+1;
//document.write("<hr>");
//document.write(idade);

//var idade=20;//A palavra chave var(mais antiga) permide criar variaveis com mesmo nome .Isto é um problema.
//document.write("<hr>");
//document.write(idade);

/*
Uma forma mais rescente de criar variaveis foi desenvolvida pelo javascript 
Esta outra forma é a palavra chave LET
*/

//let altura = 1.75;

//altura=altura +0.5;
//document.write("<hr>");
//document.write(altura);


//let a = 10;
//let b = 2;
//let c = 2;
//let soma=a+b;
//let div= soma/c;

//document.write("o resultado final é:");
//document.write(div);
//document.write("<hr>");

/*let n1=("Boa noite")
let n2=15
let n3=true

document.write(n1)
document.write(n2)
document.write(n3)

document.write(typeof n1)
document.write(typeof n2)
document.write(typeof n3)*/
let person = prompt("Please enter your name", "Harry Potter");