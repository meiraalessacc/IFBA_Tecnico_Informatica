<?php
//Função com retorno 

function dobro($n1){
    $resultado = $n1*2;
    return $resultado;
}

function triplo($n1){
    $resultado = $n1*3;
    return $resultado;
}
//funções que retornem um valor devem ser chamadas e seus retornos armazenando em uma variavel

$numero=5;
$dobro = dobro($numero);
$triplo = triplo($dobro);

echo "O triplo de {$numero} é {$triplo}";