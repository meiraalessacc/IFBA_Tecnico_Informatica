let peso = prompt("Informe o peso do adulto (em kg) ");
peso=parseFloat(peso);

let alt = prompt("Informe a altura do adulto");
alt=parseFloat(alt);
let num1 =(alt*alt);
let imc = (peso/ num1);
document.write("O imc é :"+imc+"\n");
document.write("<hr>");

if (imc < 18.5) {
   document.write("Abaixo do peso");
} else if (imc>= 18.5 && imc < 25 ) {
    document.write("Peso normal");
} else if (imc>= 25 && imc < 30 ) {
   document.write ("Acima do peso");
} else {
    document.write("Obeso");
}

