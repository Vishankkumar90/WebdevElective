import "./temp.css"

export default function Header({title,color,year}){
    return(
        <>
        <h1>{title}</h1>
        <h2>{color}</h2>
        <h2>{year}</h2>
        

        <nav>
            <a href="#"> Home</a>
            <a href="#"> Contact</a>
            <a href="#"> Webpage</a>
        </nav>
        </>
    )

}


