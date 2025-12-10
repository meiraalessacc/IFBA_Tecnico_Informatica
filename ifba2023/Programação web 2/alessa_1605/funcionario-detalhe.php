<?php 
require "dados.php";

 if(!isset($_GET["i"])){
	echo"Erro! Nenhum funcionario foi passado!";
	header("location:funcionarios.php");//header location redireciona para outro arquivo
	die; // para qualquer aplicação neste pónto
 } 

 $indice= $_GET["i"];
 // se o indice passado pelo usuario existir no array funcionarios 
if(isset($funcionarios[$indice])){
	$f = $funcionarios[$indice];
}
 $f = $funcionarios[$indice];
?>
<!DOCTYPE html>
<html>
<head>
	<title>Funcionários</title>
	<link rel="stylesheet" type="text/css" href="funcionarios.css">
</head>
<body>
    <header>
        <h1>Listagem de Funcionários</h1>
    </header>
	<div class="container-detalhe">

		<div class="card">
			<?php 
			if(isset ($f)){
			?>
			<img src="<?=$f["foto"]?>" alt="<?=$f["nome"]?>">
			<h3><?=$f["nome"]?></h3>
			<h4><?=$f["cargo"]?></h4>
			<p>Salário:R$ <?=number_format($f["salario"],2)?></p>
			<p><?=$f["curriculo"]?></p>
			<a href="funcionarios.php"
			 class="link">Voltar</a>
			 <?php
			}else{
				echo "<h3> Funcionario não encontrado </h3>";
			}

			//ifood- array tridimencional, varias informações nos arrays 
			 ?>
		</div>
	</div>
</body>
</html>