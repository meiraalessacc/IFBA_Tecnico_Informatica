<?php
include "pokemon.php"; // importa um arquivo php dentro de outro.
        /*
            modo 2
                 $pokemons = [
                     [
                        "nome" => "Charmander", 
                        "tipo" => "fogo", 
                        "peso" => 8.5,
                        "aulura" => 0.6,
                        "forca" => 52
                     ],
                     [
                            "nome" => "pikachu", 
                            "tipo" => "eletrico", 
                            "peso" => 5.5,
                            "aulura" => 0.5,
                            "forca" => 60
                     ],
                     [
                            "nome" => "squirtle", 
                            "tipo" => "agua", 
                            "peso" => 5.5,
                            "aulura" => 0.5,
                            "forca" => 60
                     ]

                 ];
        */
       /* 
            modo 1 

                $pokemon1 = [
                    "nome" => "Charmander", 
                    "tipo" => "fogo", 
                    "peso" => 8.5,
                    "aulura" => 0.6,
                    "forca" => 52
                ];
                $pokemon2 = [
                    "nome" => "pikachu", 
                    "tipo" => "eletrico", 
                    "peso" => 5.5,
                    "aulura" => 0.5,
                    "forca" => 60
                ];
                $pokemon3 = [
                    "nome" => "squirtle", 
                    "tipo" => "agua", 
                    "peso" => 5.5,
                    "aulura" => 0.5,
                    "forca" => 60
                ];
                $pokemons = [$pokemon1,$pokemon2,$pokemon3];
                echo "<pre>";
                var_dump($pokemons);
     */
    foreach ($pokemons as $p) {
        echo "<li> {$p ["nome"]} </li>";
    }

    die; // finaliza a aplicação
?>


<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link href="https://fonts.googleapis.com/css2?family=Press+Start+2P&display=swap" rel="stylesheet" />
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css" integrity="sha512-iecdLmaskl7CVkqkXNQ/ZH/XLlvWZOJyj7Yy7tcenmpD1ypASozpmT/E0iPtmFIB46ZmdtAc9eNBvH0H/ZpiBw==" crossorigin="anonymous" referrerpolicy="no-referrer" />
    
    <title>Pokemon</title>
</head>
<body>
<div id="pokedex">
    <div class="container">
        <div class="tela">
             <div class="pokemon">
                <h1>Charmander</h1>
                <div class="imagem">
                    <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/4.svg">
                </div>
                <h2><span class="tipo">Tipo:</span> Fogo</h2>
                <div class="dados">
                    <p><strong>Peso:</strong> 8.5kg</p>
                    <p><strong>Altura:</strong> 0.6m</p>
                    <p><strong>Força:</strong> 52</p>
                </div>
             </div>
             <div class="pokemon">
                <h1>Charmander 2</h1>
                <div class="imagem">
                    <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/4.svg">
                </div>
                <h2><span class="tipo">Tipo:</span> Fogo</h2>
                <div class="dados">
                    <p><strong>Peso:</strong> 8.5kg</p>
                    <p><strong>Altura:</strong> 0.6m</p>
                    <p><strong>Força:</strong> 52</p>
                </div>
             </div>
             <div class="pokemon">
                <h1>Charmander 3</h1>
                <div class="imagem">
                    <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/4.svg">
                </div>
                <h2><span class="tipo">Tipo:</span> Fogo</h2>
                <div class="dados">
                    <p><strong>Peso:</strong> 8.5kg</p>
                    <p><strong>Altura:</strong> 0.6m</p>
                    <p><strong>Força:</strong> 52</p>
                </div>
             </div>
             <div class="pokemon">
                <h1>Charmander 4</h1>
                <div class="imagem">
                    <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/4.svg">
                </div>
                <h2><span class="tipo">Tipo:</span> Fogo</h2>
                <div class="dados">
                    <p><strong>Peso:</strong> 8.5kg</p>
                    <p><strong>Altura:</strong> 0.6m</p>
                    <p><strong>Força:</strong> 52</p>
                </div>
             </div>
             <div class="pokemon">
                <h1>Charmander 5</h1>
                <div class="imagem">
                    <img src="https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/other/dream-world/4.svg">
                </div>
                <h2><span class="tipo">Tipo:</span> Fogo</h2>
                <div class="dados">
                    <p><strong>Peso:</strong> 8.5kg</p>
                    <p><strong>Altura:</strong> 0.6m</p>
                    <p><strong>Força:</strong> 52</p>
                </div>
             </div>
        </div>
       
    </div>
    <div class="botoes">
        <button id="descer" onclick="descer()"><i class="fa-solid fa-chevron-down"></i></button><button id="subir" onclick="subir()"><i class="fa-solid fa-chevron-up"></i></button>
    </div>
</div>
<script>
    let tela = document.querySelector('.tela');
    let qtd = document.querySelectorAll(".pokemon").length - 1;
    let btdescer = document.querySelector("#descer");
    let btsubir = document.querySelector("#subir");
    btsubir.disabled = true;
    let maximo = qtd * 320;
    let pos = 0;
    function descer() {
        pos += 320;
        if(pos >= maximo){
            pos = maximo;  
            btdescer.disabled = true;
        }else{
            btsubir.disabled = false;         
        }      
       
       tela.scrollTo(0, pos);
    }
    function subir(){
        
        pos -= 320;
        if(pos <= 0){
            pos = 0; 
            btsubir.disabled = true;
        }else{
            btdescer.disabled = false;         
        }
       
       tela.scrollTo(0, pos);
    }        
</script>
    
</body>
</html>