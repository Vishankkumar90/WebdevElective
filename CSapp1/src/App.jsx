import './App.css'
import Header from './component/temp.jsx'
import Registration from './component/Registration.jsx'
import Footer from './component/Footer1.jsx'

function App() {

  const y=[2021,2022,2023]
  const c={a:"Home",b:2,c:3}

  return (
    <>
      <Header title="My first react app">
      
      <nav className='nav'></nav>
      </Header>
      <Registration />

      

      <Footer year={y[1]} data={c.a} />




      
    </>
  )
}

export default App
