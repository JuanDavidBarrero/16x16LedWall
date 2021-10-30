const imgforEsp = document.getElementById("imgforEsp");
const enviar = document.getElementById("enviar");

const sendData = async() => {
    const resp = await fetch(`http://192.168.1.66/change?img=${imgforEsp.value}`)
    const data = await resp.json();
    console.log(data);
}


enviar.addEventListener("click",sendData);






