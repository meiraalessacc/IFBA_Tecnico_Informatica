let opcao = prompt("Informe qual converção deseja realizar, digite:\n1 - Celsius para Fahrenheit, 2- Fahrenheit para Celcius. ");

switch(opcao){
        case "1":
       let cel= prompt("Digite a temperatura a ser convertida ");
       cel = parseFloat(cel);
        let fahconver=((cel/ 5) * 9) + 32;
        document.write(""+cel+" em fahrenheit é igual a "+fahconver+"");
        break;
        case "2":
      let fah = prompt("Digite a temperatura a ser convertida ");
      fah= parseFloat(fah);
        celconvert = (5*(fah - 32))/9
        document.write(""+fah+" em Celsius é igual a "+celconvert+" ");
        break;  
    default:
        document.write("Opcao invalida");
}

