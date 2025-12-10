<?php

#__DIR__ -> Constante que retorna o endereço da pasta do arquivo  atual
$caminho = __DIR__."/dados.csv";

$arquivoAberto = fopen($caminho,"r");

#Um arquivo antes de ser acessado 
$tamanho = filesize($caminho);

$dados = fread($arquivoAberto,$tamanho);
echo $dados;
fclose($arquivoAberto);

?>