<?php 
//Função sem Parametros e Sem retorno
function hr(){
    echo "<hr size='2'>";
}

//Função que recebe parametros e sem retorno 

function imprimeNome($nome){
    echo "<h3>{$nome}</h3>";
}
$nome = "João";
imprimeNome("Thiago");
hr();//Chamada da Função
imprimeNome("Lara");
hr();
imprimeNome("Julia");
hr();
imprimeNome($nome);
