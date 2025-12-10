<?php

#__DIR__ -> Constante que retorna o endereço da pasta do arquivo  atual
$caminho = __DIR__."/dados.csv";

$arquivoAberto = fopen($caminho,"r");

while ( $dados = fgets($arquivoAberto)){
    $transacao = explode(",",$dados);
    print_r($transacao);
    echo "<hr>";
}

fclose($arquivoAberto);

?>