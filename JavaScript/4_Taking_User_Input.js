// // Tow ways to take user inpur

// //Easy way (window prompt):

// let username;

// username=window.prompt("enter username");
// // this will prompt a dailog box to enter the input

// console.log(username);


//Professional way

// First we have to create a html textbox in html file

let username;




document.getElementById("mysubmit").onclick =function(){ //making function
  username=document.getElementById("myText").value;
  document.getElementById("myh1").textContent=`Hello ${username}`;
}