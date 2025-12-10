<?php
$metodo=($_SERVER["REQUEST_METHOD"]);

$num1= $_POST["num1"] ?? 0;
$num2= $_POST["num2"] ?? 0;
$op= $_POST["operacao"] ?? "1";

switch($op){
    case"1":
        $soma = $num1 + $num2;
        $mensagem = "{$num1} + {$num2} = {$soma}";
break;
    case"2":
    $sub = $num1 - $num2;
    $mensagem = "{$num1} - {$num2} = {$sub}";
break;
    case"3":
    $div = $num1 / $num2;
    $mensagem = "{$num1} ÷ {$num2} = {$div}";
break;
    case"4":
    $mult = $num1 * $num2;
    $mensagem = "{$num1} x {$num2} = {$mult}";
break;
    case"5":
    $expo = $num1 ** $num2;
    $mensagem = "{$num1}<sup>{$num2}</sup> = {$expo}";
break;
    case"6":
    $divisaointeira = intdiv($num1,$num2);
    $resto = $num1 % $num2;
    $mensagem = "{$num1} ÷ {$num2} = {$divisaointeira} com resto{$resto}";
break;
}

?>
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
		<h1>Calculadora em PHP</h1>
	</header>
	<div class="container">
		<div class="box formulario">
			<h2>Calculadora</h2>
			<form action="exemplo3.php" method="post">
				<label>Número 1:
					<input type="number" name="num1" required>
				</label>
				<label>Número 2:
					<input type="number" name="num2" required>
				</label>
				<label>Operação:
				<select name="operacao">
						<option></option>
						<option value="1">Soma</option>
						<option value="2">Subtração</option>
						<option value="3">Divisão</option>
						<option value="4">Multiplicação</option>
						<option value="5">Exponenciação</option>
						<option value="6">Divisão Inteira com Resto</option>						
					</select>
				</label>
				
				<button name="enviar"> Enviar </button>
			</form>
		</div>
		<div class="box resposta">
			<h2>Resultado</h2>

            <?php
            if($metodo == "POST"){
                echo"<p>{$mensagem}</p>";
            }else{
                echo"<p>Aguardando Valores</p>";
            }
            ?>

		</div>
	</div>
</body>
</html>