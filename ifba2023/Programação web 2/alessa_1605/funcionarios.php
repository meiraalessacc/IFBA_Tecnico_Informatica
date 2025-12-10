<?php 
require "dados.php";
?>
<!DOCTYPE html>
<html>
<head>
	<title>Funcionários</title>
	<link rel="stylesheet" type="text/css" href="funcionarios.css">
</head>
<body>
    <header>
        <br>
        <br>
        <h1>Listagem de Funcionários</h1>
    </header>
	<div class="container">
        <?php 
        foreach($funcionarios  as $i => $func){
        ?>
		<div class="card">
            <a href="funcionario-detalhe.php?i=<?=$i?>">
			    <img src="<?=$func["foto"]?>" alt="<?=["nome"]?>">
            </a>
			<h3><a href="funcionario-detalhe.php?i=<?=$i?>"><?=$func["nome"]?></a></h3>
            
            <?=$func["nome"]?>
		</div>
		<?php
        }
        ?>
		
	</div>
</body>
</html>