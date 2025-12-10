let num1 = prompt("Informe o primeiro numero");
let num2 = prompt("Informe o segundo  numero");
num1= parseInt(num1);
num2= parseInt(num2);

let opcao = prompt("Informe qual operação deseja realizar, digite:\n 1 para Somar\n 2 para Subtrair \n 3 para Multiplicar \n 4 para dividir");
let soma = num1 + num2;
let sub = num1 - num2;
let mult = num1 * num2;
let div = num1 / num2;
switch(opcao){
        case "1":
       document.write("A operação escolhida foi a adição\n");
       document.write("e o resultado de "+num1+"+ "+num2+" é = ");
       document.write(soma)
        break;
        case "2":
       document.write("A operação escolhida foi a subtração\n");
       document.write("e o resultado de "+num1+" - "+num2+" é = ");
       document.write(sub)
        break;
        case "3":
       document.write("A operação escolhida foi a multiplicação\n");
       document.write("e o resultado de "+num1+" * "+num2+" é = ");
       document.write(mult)
        break;
        case "4":
       document.write("A operação escolhida foi a divisão\n");
       document.write("e o resultado de "+num1+" / "+num2+" é = ");
       document.write(div)
        break;
    default:
        document.write("Opcao invalida");
}