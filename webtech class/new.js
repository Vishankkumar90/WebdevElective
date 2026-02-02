let myket=10;
console.log(mylet);
let mylet=20;

{
    let x=50;
    console.log(x);
}


{
    let x=50;
    console.log(x);
}



{
    let x=50;
    console.log(x);
    {
        let x=200;
        console.log(x);
    }
}

{

let x=50;
console.log(x);
{
    let x=100; //uncaught reference error identifier x has already been declared
    let y=200; // y is only accessible in this block
    console.log(y); //200
    console.log(x);// 100
}
}


// demo 1.4 redeclaration of let variable in different block

{
    let x=50;
    console.log(x);//output: 50
    if(true){
        let x=300;//this is allwed because it is in different block
        console.log(x); //300
    }
    console.log(x); //50
}