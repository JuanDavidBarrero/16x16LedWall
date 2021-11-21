# Cuadro de 16x16 led

## Para que funcione
1. Se necesita agregar una archivo llamado "credenciales.h" 

```
const char* ssid = "Coloque el nombre de su red"
const char* password = "Coloque la contraseña de la red"
```

2. Instalar la libreia de "adafruit/neopixel"

3. Si se quiere utilizar OTA debe colocar la dirección IP de ESP32 con el que este trabajando o dejar una fija
además debe agregar las siguiente lineas en el **platformio.ini"** 
```
    upload_protocol = espota
    upload_flags =
        --port=3232
    upload_port = 192.168.1.66
```
Si las remueve podra actualizar el esp32 con el cable USB