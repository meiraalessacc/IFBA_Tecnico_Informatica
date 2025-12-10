<!DOCTYPE html>
 <html lang="en">
 <head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>ConectWork-Inicio</title>
    <link href="estilo.css" rel="stylesheet">
    <link rel="stylesheet" href="<?=css('estilo')?>">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:wght@500&display=swap" rel="stylesheet">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
    <link href="https://fonts.googleapis.com/css2?family=Mohave:wght@300&display=swap" rel="stylesheet">
    <link rel="preconnect" href="https://fonts.googleapis.com">
    <link rel="preconnect" href="https://fonts.gstatic.com" crossorigin>
<link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:wght@300&display=swap" rel="stylesheet">
 </head>
 <body>
  <header><!--header-representa um grupo de suporte introdutório ou navegacional-->
 <div class="center">
  <img src="<?=imagem('logo.png')?>" alt="Image" height="50" width="50" />
 <div class="topnav">
  <a class="active" href="<?=linkrota('')?>">Inicio</a>
  <a href="<?=linkrota('prestador')?>">Prestador</a>
  <a href="<?=linkrota('contratante')?>">Contratante</a>
  <a href="<?=linkrota('login')?>">Login</a>
  <a href="<?=linkrota('servicos')?>">Serviços</a>
  <a href="<?=linkrota('duvidas')?>">Duvidas</a>
 


</div>
</div>
</header>