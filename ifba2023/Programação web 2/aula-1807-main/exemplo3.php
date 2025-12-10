<?php

#__DIR__ -> Constante que retorna o endereço da pasta do arquivo  atual
$caminho = __DIR__."/dados.csv";

$arquivoAberto = fopen($caminho,"r");

while($transacao = fgetcsv($arquivoAberto)){
    echo $transacao[0] . " -> ".$transacao[1]."<hr>";
}
fclose($arquivoAberto);

?>