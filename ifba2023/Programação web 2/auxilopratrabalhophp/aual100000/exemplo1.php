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
		<h1>Formulário de Contato</h1>
	</header>
	<div class="container">
		<div class="box formulario">
			<h2>Entre em contato</h2>
			<form action="exemplo1.php" method="post">
				<label>Nome:
					<input type="text" id="nome" name="nome" required>
				</label>
				<label>E-mail:
					<input type="email" id="email" name="email" required>
				</label>
        
                <label>Data de Nascimento:
					<input type="date" id="data" name="data" required>
				</label>
				<label>Telefone:
					<input type="tel" id="telefone" name="telefone" required>
				</label>
        
        <fieldset>
          <legend>Sexo</legend>
          <input type="radio" name="sexo" id="sexo-masc" value="M">
          <label for="sexo-masc">Masculino</label>
          <input type="radio" name="sexo" id="sexo-fem" value="F">
          <label for="sexo-fem">Feminino</label>
        </fieldset>
        
        
				<button name="enviar"> Enviar </button>
			</form>
		</div>
		<div class="box resposta">
			<h2>Resposta</h2>
            <?php
            foreach($_POST as $campo => $valor ){
                echo "<div> {$campo} -> {$valor} </div>";
            }

            ?>
			
		</div>
	</div>
</body>
</html>