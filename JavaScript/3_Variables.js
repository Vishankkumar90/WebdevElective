let x; //Declaration
let y;

x=100;
y=10;

// or

let a=100;
let b=10.99;
let thename="john"; // For stings we can either use double/single quotes only
let binary= true; // bolean data type


console.log(typeof a); // printing the type of datatype

console.log(`The value of a ${a}`); //writing with sentences use backticks(``)
console.log(`The value of a ${b}`);
console.log(`name ${thename}`);
console.log(`Boolean is ${binary}`);


//printing on the website
document.getElementById("p1").textContent=`The value of a ${a}`;
document.getElementById("p2").textContent=`name is ${thename}`;
document.getElementById("p3").textContent=`Boolean is${binary}`;
