<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php 
    $cachorro=["Nome"=>"Rex",
    "Idade"=>2,
    "Raca"=>"Caramelo",
    "Peso"=>8.5,
    "Vacinado" =>true];?>

    <h1>Olá <?=$cachorro["Nome"]?></h1>
    <h2>você tem <?=$cachorro["Idade"]?> anos</h2>
    <h3>sua raça é <?=$cachorro["Raca"]?></h3>
    <h3>seu peso é <?=$cachorro["Peso"]?>kg</h3>
</body>
</html>
