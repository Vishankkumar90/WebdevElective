function greet(name){
    console.log(`hello`+name)
    console.log(`Hello ${name}`)
}

greet(" user")


const factorial=function(n)
{
    if(n==0||n==1)
        return 1;
    else return n*factorial(n-1);
}

console.log(factorial);