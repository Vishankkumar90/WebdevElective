// const a variable that can't be changed

// means if we reassign a let variable again of that same name then its value ill be changed but const value will not be changed

const PI = 3.14159;
let radius;
let circumference;


radius = window.prompt('Enter the radius of a circle');
radius = Number (radius);
circumference = 2 * PI * radius;

console.log(circumference);

// making with HTML

document.getElementById("mysubmit").onclick=function(){
    radius=document.getElementById("mytext").value; // storing the input radius in radius variable
    radius=Number(radius); //typecasting raduis to a number(integer)
    circumference=2*PI*radius;
    document.getElementById("ans").textContent=circumference;
}