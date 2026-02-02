// operands are values like 1,2,3,7
// operators are are +,-,*,/

let students=31;

students=students+1;
students=students-2;
students=students*3;
students=students/4;
students=students**3; //power 3

let morestudents=students%2; // modulus


//Augmernted assignment operators

students += 3; //increases student value by 3
students -= 3;
students *= 3;
students /= 3;
students **= 3;
students %= 3;



// increment operator

students++; // Increses students value by 1

//decrement operator

students--; // decreses students value by 1



console.log(students);
console.log(morestudents);



//oprator precendence

// it follows the BODMAS rule for caluculations:

let result= (12*3)+8/2;
console.log(result) // it will automatically follow bodmas rule
