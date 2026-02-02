// {let a=10,b=10;} // {} means it cannot be accseesd anywhere
// console.log(a+b);


// var a=10;
// console.log(a);
// a=20;
// console.log(a);


// console.log(a);
// var a=20; // it is called hoisting(using a function or varible before defining it)

// let i;
// for(i=0;i<10;i++){
//     console.log("a")
    
// }


// let num=10;
// let str='hello';
// let arr=[1,2,3];
// let obj={name:"robin",age:10}; 
// let a;
// let empty=null;
// let isok=true;

// console.log(typeof num);// number is a data type in javascript
// console.log(typeof str);// string is a sequence of characters
// console.log(typeof arr);// array is also an object in javascript
// console.log(typeof obj);// typeof is used to know the data type of variable
// console.log(typeof a);  // undefined means variable is declared but not defined
// console.log(typeof empty); // null means variable is defined but has no value
// console.log(typeof isok);// boolean is used to represent true or false value

// let add=((a,b)=>{
//     console.log(a+b);
// });

// add(10,20);


function add(a,b){
    return a+b;
}

var result=add(10,20);
console.log(result);    
console.log(add(30,40));