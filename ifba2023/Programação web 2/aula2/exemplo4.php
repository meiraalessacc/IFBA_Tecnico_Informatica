<?php

function testeRetorno(){
    echo "Função Sendo Execultada - Antes do return";
    return;// Ao encontar um return a função retorna um valor para o local 
    echo"Depois do return";
}

function parOuImpar($numero){
    if($numero % 2 == 0){
        return "Numero Par";   
     }else{
        return "Numero Impar";
     }
}
echo "<br>";
echo parOuImpar(2);
echo "<br>";
echo parOuImpar(5);
echo "<br>";
echo parOuImpar(4);
echo "<br>";
echo parOuImpar(3);
echo "<br>";
?>