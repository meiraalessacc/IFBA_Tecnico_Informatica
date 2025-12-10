let num1= document.getElementById("num1");
let num2= document.getElementById("num2");
let result= document.getElementById("resultado");
let bt1= document.getElementById("bt1");

function soma(){
    
    if(num1.value !="" && num2.value != ""){
    let a=parseInt(num1.value);
    let b=parseInt(num2.value);
        result.value= a + b;
}else{
    result.value= 0 ;
}
}
bt1.addEventListener("click",soma);
