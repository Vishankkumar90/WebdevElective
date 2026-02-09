// let multiply=function(a,b){
//     return a*b;
// };

// console.log(multiply(10,20));




// function hello(){
//     console.log("Hello World"); 
//     console.log(this);
// }

// hello();

// let person = {
//   name: "Vishank",
//   age: 20,
//   isStudent: true
// };

// person.greet = () => {
//   console.log("Hello, " + person.name);
//   console.log(this);
// }

// person.greet();


// let person={
//   name:"john",
//   age: 30,


// }


// let person2=person;

// console.log(this);

// let person={
//   name:"john",
//   age: 30,
//   greet: function(){
//     console.log("Hello, " + this.name);
//     console.log(this);

//   }
// }



//  class person2{
//   constructor(name ,age){



//   }
//  }

//  let arr=[1,2,3,4,5,5]
 

// const data =[5];
// const[x,y="hello"]=data;
// console.log(x)
// console.log(y)

const person={

   name1:"rohit",
   age:32,
   phone:20903902,
   city:"Ghazibad"

}
 
const{name1, age,city="delhi"}=person;

console.log(name1);
console.log(age);
console.log(city);

