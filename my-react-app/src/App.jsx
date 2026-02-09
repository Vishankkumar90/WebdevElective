import "./App.css";
import { Wrapper } from "./components/Wrapper";
function App() {
  const user = [{
    name: "Virat Kohli",
    age: 35,
    country:"India"
  },
    {
    name: "dhoni",
    age: 40,
    country:"India"
    
}];   

  return (
    <div>
      <h1>User Dashboard</h1>

      <h2>My first react app</h2>
      <Wrapper title="Welcome to the user dashboard" > 
        {user.map((user,index)=>{return <usercard data={user}/>})}
      </Wrapper>

      <p>Name: {user.name}</p>
      <p>Age: {user.age}</p>
    </div>
  );
}

export default App;