<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8">
	<title>Formulário</title>
	<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
	<link rel="stylesheet" type="text/css" href="estilo.css">
</head>
<body>
	<header>
		<h1>Arrays</h1>
	</header>
	<div class="container">
		<div class="box resposta">
			<h2>Arrays</h2>
            <?php
            /* Arrays
            
            modos do Arrays:
            $cores = array(): -> outra forma de criar um array
            $cores = ["preto","branco","azul","vermelho","amarelo"]; -> forma mais ultilizada pelo docente
            */
            $cores = ["preto","branco","azul","vermelho","amarelo","rosa"];
            $cores [] = "cinza"; // outra forma de adicionar um elemento ao final do array
            $qtd = count($cores); // recupero a quantidade de elementos do array
            echo "<h2> temos {$qtd} cores no array </h2>";
            /* foreach -> para cada elemento do array pegue um elemento de  cada vez e coloque seu valor em uma variavel definida no comando  */
          //  foreach ($cores as $cor){
             //   echo "<p class = 'item'> {$cor} </p>";
          // }
            foreach ($cores as $indice => $cor){
                echo "<p class = 'item'>{$indice} -> {$cor} </p>";
            }
            ?>
			
		</div>
	</div>
</body>
</html>