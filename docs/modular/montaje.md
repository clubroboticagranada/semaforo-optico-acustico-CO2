# Montaje y conexionado de la versión modular

## Paso 1: Base inicial

Comenzaremos por la base, sujetando el Arduino UNO y el HUB USB. Los elementos necesarios son:

* La base que vemos en la imagen 1a y las placas de la imagen 1b.

<center>

| Imagen 1a | Imagen 1b |
|:-:|:-:|
| ![Base](../img/modular/montaje/i1.jpeg) | ![Arduino UNO y HUB I2C](../img/modular/montaje/i1b.jpeg) |
| Base | Arduino UNO y HUB I2C |

</center>

* Tornillos M3 x 10mm, tuercas M3 y 4 cables dupont H-H de 10cm de longitud. Estos elementos los vemos en la imagen 2a y 2b.


<center>

| Imagen 2a | Imagen 2b |
|:-:|:-:|
| ![Tornillos y tuercas](../img/modular/montaje/i2a.jpeg) | ![Cables dupont H-H](../img/modular/montaje/i2b.jpeg) |
| Tornillos y tuercas | Cables dupont H-H |

</center>

Sujetamos la placa Arduino con 3 tornillos y el HUB I2C con dos en diagonal. Es importante, aunque puede plantear un poco de dificultad, que el Arduino quede bien sujeto para evitar problemas cuando conectemos el alimentador o el USB. En la imagen 3 podemos ver el aspecto tras sujetar las placas.

<center>

| Imagen 3 |
|:-:|
| ![Placas Arduino y HUB I2C atornilladas a la base](../img/modular/montaje/i3.jpeg) |
| Placas Arduino y HUB I2C atornilladas a la base |

</center>

Para acabar esta etapa vamos a conectar con 4 cables dupont de 10cm de longitud los pines I2C macho del Arduino a uno de los pines acodados del HUB I2C teniendo especial cuidado en que el orden de conexión sea el mismo en ambas placas. En la imagen 4 vemos como queda la base al final de esta etapa.

<center>

| Imagen 4 |
|:-:|
| ![Base finalizada en la etapa inicial](../img/modular/montaje/i4.jpeg) |
| Base finalizada en la etapa inicial |

</center>

Por ahora reservamos la base.

## Paso 2: Caja de sensores inicial

En la caja de sensores van alojados la LCD y el interruptor deslizante.

Vamos a necesitar el siguiente material:

* Caja sensores impresa en 3D como la de la imagen 5.

<center>

| Imagen 5 |
|:-:|
| ![Caja de sensores](../img/modular/montaje/i5.png) |
| Caja de sensores |

</center>

* Interruptor deslizante preparado con tres cables terminados en conector dupont hembra de unos 30 cm de longitud, lo vemos en la imagen 6a, tornillos M3x10 con tuercas M3 y tornillos de rosca chapa de 3x5mm, como vemos en la imagen 6b.

<center>

| Imagen 6a | Imagen 6b |
|:-:|:-:|
| ![Interruptor preparado con tres cables](../img/modular/montaje/i6a.png) |  ![Tornilleria](../img/modular/montaje/i6b.png) |
| Interruptor preparado con tres cables | Tornilleria |

</center>

Colocamos cuatro conectores dupont H-H en los terminales I2C de la LCD y doblamos, con mucho cuidado para no romper nada, los pines unos 45 grados y sujetamos la LCD en su posición con los 4 tornillos M3x10, debiendo quedar un aspecto similar al de la imagen 7. Ofrece cierta dificultad colocar las tuercas en su lugar pero con algo de maña y la ayuda de pinzas o alicates se consigue sin demasiado esfuerzo.

<center>

| Imagen 7 |
|:-:|
| ![LCD colocada en su alojamiento](../img/modular/montaje/i7.png) |
| LCD colocada en su alojamiento |

</center>

En mi caso que aprovechado cables de conexión de motores de imprsoras 3D de 3 hilos para con 1 conector de 3 hilos y un cable de otro constituir el cable de 4 hilos necesario.

Finalmente pasamos los cables del interruptor por el orificio, lo colocamos en su lugar y lo atornillamos, quedando el aspecto final que vemos en la imagen 8.

<center>

| Imagen 8 |
|:-:|
| ![Caja de sensores con LCD e interruptor colocados](../img/modular/montaje/i8.png) |
| Caja de sensores con LCD e interruptor colocados |

</center>

## Paso 3: Pie y soportes inferior y superior

Vamos a realizar el montaje de las tres piezas que vemos en la imagen 9 que servirán para dar altura a los colores desde la base. Estas partes no llevan ningún componente, el pie es un tubo que permite pasar los cables desde la parte superior (sensores y luces) a la base donde está alojada la placa UNO. Solamente necesitamos las tres piezas y cuatro tornillos M3x10 para sujetar el tubo a los soportes. Si queremos también lo podemos pegar, pero se aconseja poner los tornillo para que sirvan de guía y las plataformas de soporte que en la posición correcta.

<center>

| Imagen 9 |
|:-:|
| ![Pie y soportes](../img/modular/montaje/i9.png) |
| Pie y soportes |

</center>

## Paso 4: Paso 3 mas caja de sensores

Pasamos los cables por el tubo y vamos a proceder a etiquetarlos para que al final resulte lo mas sencillo posible conectarlos a las placas de la base. Voy a mostrar como lo hago, pero cada cual tendrá que adaptar esto a sus propios elementos.

<center>

| Sensor | Rojo | Negro | Verde | Verde anudado | Amarillo | Gris | Marrón |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
| LCD | GND | VCC | SDA | SCL | - | - | - |
| Interruptor| - | - | - | - | Posición izquierda | Cursor | Posición derecha |

</center>

Cada grupo de conectores va etiquetado con un trozo de cinta de carrocero mas su identificador.

Una vez estemos en la situación anterior vamos a proceder a pegar la caja de sensores al soporte superior (el más pequeño), para lo que utilizaremos preferentemente un pegamento especial para plásticos rígido o PVC. Debemos asegurarnos que la LCD queda mirando al frente, lo que es fácil de ver dado que la orientación del conjunto queda con los tornillos de sujeción a 90º desde el frente y la parte posterior de la base inferior es la que lleva un solo orificio para atornillar. En la imagen 10 podemos ver el aspecto de lo que llevamos de montaje.

<center>

| Imagen 10 |
|:-:|
| ![Pie con soportes y caja sensores](../img/modular/montaje/i10.png) |
| Pie con soportes y caja sensores |

</center>

## Paso 5: Tapa posterior sensores

En la pieza impresa que vemos en la imagen 11 es donde van alojados la mayoría de los sensores que colocaremos como vamos a explicar seguidamente.

<center>

| Imagen 11 |
|:-:|
| ![Tapa posterior sensores](../img/modular/montaje/i11.png) |
| Tapa posterior sensores |

</center>

Los elementos que vamos a montar son los que vemos en la imagen 12, es decir, el amplificador, el micrófono, el sensor de temperatura y humedad, el barómetro, el sensor de CO2  y la antena WiFi con su shield.

<center>

| Imagen 12 |
|:-:|
| ![Elementos a montar en la tapa posterior de la caja de sensores](../img/modular/montaje/i12.png) |
| Elementos a montar en la tapa posterior de la caja de sensores |

</center>

Antes de colocar el sensor BMP280 en su lugar, y con el fin de pasar un cable mas por el tubo, he recurrido al *ñapometro* para solucionar un pequeño detalle a tener en cuenta con el BMP280, la dirección del bus cambia según el estado lógico del pin SDO, y si se deja desconectado la dirección queda indeterminada, por lo que puede parecer que no funciona correctamente. Las direcciones físicas de este dispositivo I2C son:

<center>

`SDO=GND -> I2C Address (0x76)`

`SDO=3.3V -> I2C Address (0x77)`

</center>

En la librería desarrollada por Adafruit, el bus I2C utiliza por defecto la dirección (0x77) por lo que debemos conectar el pin SDO a Vcc. En la imagen siguiente se puede apreciar un detalle de la ñapa realizada en este caso sobre la propia PCB con un trocito de hilo rígido.

<center>

|Ñapa en el BMP280 |
|:-:|
| ![Detalle de la ñapa realizada](../img/modular/montaje/nhapa.png) |
| Detalle de la ñapa realizada |

</center>

Vamos a necesitar también 3 separadores de 10mm de longitud, 4 tornillos M3x10mm, 3 tornillos M3x20mm y 7 tuercas M3. Sujetamos cada sensor en la posición que se observa en la imagen 13 utilizando los separadores y los tornillos de 20mm para el amplificador, el micrófono y el sensor de CO2 evitando así que queden pegados a las paredes de la caja.

<center>

| Imagen 13 |
|:-:|
| ![Aspecto de la tapa posterior de la caja de sensores montada](../img/modular/montaje/i13.png) |
| Aspecto de la tapa posterior de la caja de sensores montada |

</center>

Pasamos todos los cables hacía la base etiquetando adecuadamente cada conjunto de forma similar a la mostrada anteriormente. Comprobamos visualmente que todos los conectores están colocados en su lugar y probamos que la tapa encaja en la caja, aunque aún no la cerramos del todo pues debemos pasar los cables de los diodos LEDs. En las imágenes 14a y 14b podemos ver su aspecto en el estado actual de montaje.

<center>

| Imagen 14a | Imagen 14b |
|:-:|:-:|
| ![Todos los conectores están en su lugar](../img/modular/montaje/i14a.png) |![La tapa posterior encaja sin problemas](../img/modular/montaje/i14b.png) |
|  |

</center>

El etiquetado de los cables queda, en mi caso, de la siguiente forma:

<center>

| Sensor | Rojo | Negro | Verde | Rojo anudado | Verde anudado |
|:-:|:-:|:-:|:-:|:-:|:-:|
| Amplificador | GND | VCC | Señal | - | - |
| CO2| GND | VCC | SDA | SCL | WAKE |
| Micrófono | GND | VCC | Señal | - | - |
| DHT22 | GND | VCC | Señal | - | - |
| Barómetro| GND | VCC | SDA | SCL | - |
| WiFi | GND | VCC | Tx | - | Rx | 

</center>

Reservamos el conjunto montado hasta el momento.

## Paso 6: Colores y LEDs

Vamos a montar cada uno de los colores del semáforo, para lo que vamos a necesitar los cubos verde, amarillo y rojo, tres LEDs de 3W y tres cables de 3 conectores tipo dupont H-H de 40cm para el verde, 45cm para el amarillo y 50cm para el rojo. En la imagen 15 vemos una captura de los cubos de colorees y en la 16 vemos el aspecto de los cables con el diodo conectado.


<center>

| Imagen 15 |
|:-:|
| ![Colores](../img/modular/montaje/i15.png) |
| Colores |

</center>

<center>

| Imagen 16 |
|:-:|
| ![Diodos LED con cables](../img/modular/montaje/i16.png) |
| Diodos LED con cables |

</center>

Pasamos los cables por el tubo conectado a la caja de sensores para llevarlos a la base. Los cables de los LEDs pasan de un cubo de color a otro aprovechando el hueco en forma semicírculo que tienen las piezas.

Pegamos cada cubo de color en su posición teniendo especial cuidado de que los gestos queden orientados correctamente. El aspecto que tendrá el conjunto será algo similar al que vemos en la imagen 17.

<center>

| Imagen 17 |
|:-:|
| ![Cubos pegados en su posición con su LED](../img/modular/montaje/i17.jpeg) |
| Cubos pegados en su posición con su LED |

</center>

Como todo está conectado ya podemos proceder a colocar todas las tapas de los elementos finalizados hasta el momento. En la imagen 18 vemos el aspecto de la parte posterior del semáforo.

<center>

| Imagen 18 |
|:-:|
| ![Parte posterior del semáforo](../img/modular/montaje/i18.jpeg) |
| Parte posterior del semáforo |

</center>

En el caso de los LEDs la tabla de colores es muy sencilla, pues solamente llevan tres hilos y son todos iguales. En la tabla siguiente se explicita.

<center>

| LED | Rojo | Negro | Amarillo |
|:-:|:-:|:-:|:-:|
| Rojo,Verde y Amarillo | VCC | GND | Señal |

</center>

## Paso 7: Conexión de todos los elementos

El siguiente paso en proceder al conexionado de los cables que vemos en la imagen 19 en sus pines correspondientes.

<center>

| Imagen 19 |
|:-:|
| ![Cables listos para conectar](../img/modular/montaje/i19.jpeg) |
| Cables listos para conectar |

</center>

En la imagen 20 tenemos la guía de conexionado o pinout que también podemos descargar de los siguientes enlace: [formato fuente svg](../modular/pinout/Ks0172-keyestudio-UNO.svg), [formato png](../modular/pinout/Ks0172-keyestudio-UNO.png) y [formato pdf](../modular/pinout/Ks0172-keyestudio-UNO.pdf). El pinout junto con el etiquetado de cables que hemos ido creando nor permitirá realizar todas las conexiones.

<center>

| Imagen 20 |
|:-:|
| ![Pinout](../img/modular/montaje/i20.jpeg) |
| Pinout |

</center>

Recuperamos la base y vamos conectando los conectores en sus respectivas posiciones según la guía de la imagen 20 procurando, si sobra mucho cable que quede dentro del tubo.

En este momento vamos a indicar que el extremo amarillo del interruptor es el que lleva alojada la resistencia de 10k que podemos observar en la imagen 20. Este será el terminal que va conectado a positivo y por tanto corresponderá a nivel alto en el modo de selección y, lógicamente el terminal marrón irá conectado a GND y se corresponderá con el nivel bajo en el modo de selección. En la imagen 21 vemos un detalle de la colocación de la resistencia antes y después de calentar la funda termoretractil.

<center>

| Imagen 21a | Imagen 21b |
|:-:|:-:|
| ![Detalle resistencia de 10k](../img/modular/montaje/i21a.png) | ![Aspecto final del cable con la resistencia](../img/modular/montaje/i21b.png) |
| Detalle resistencia de 10k | Aspecto final del cable con la resistencia |

</center>
