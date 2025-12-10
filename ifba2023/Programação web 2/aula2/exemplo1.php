<?php 

// declaração da função 
// Assinatura
//nome--parametros

function somaNumeros($n1,$n2){
    //corpo da função 
    return $n1 + $n2;
}

// Chamada da função 

//Argumentos -> Valores a serem passados para os parametros 
$retorno = somaNumeros(10,5);
echo "<h3>{$retorno}</h3>";