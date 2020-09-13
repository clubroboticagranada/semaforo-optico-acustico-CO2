# Semáforo óptico-acústico de CO2 y nivel de ruido

La idea del proyecto es la siguiente:

Se trata de un proyecto dirigido a diferentes etapas educativas según el nivel de conocimientos y la dificultad de llevar a cabo las diferentes tareas necesarias para su montaje y puesta en funcionamiento.

La idea es crear mediante elementos electrónicos e impresión 3D un semáforo que nos indique si el nivel de CO2 en el espacio que estamos midiendo supera unos determinados límites para avisarnos de la necesidad de ventilación del local. También incluye sensor de sonido ambiente que será indicado igualmente según el nivel detectado.

Se establece de forma general el siguiente funcionamiento:

* **Apagado** cuando el nivel de CO2 y/o ruido está por debajo de un determinado nivel o resulta inapreciable.

* **Color verde** para un nivel bajo de CO2 o de sonido pero que ya resulta apreciable.

* **Amarillo** para un nivel intermedio y tolerable de CO2 o sonido pero que denota que los niveles están subiendo considerablemente.

* **Rojo** para un nivel insoportable o muy molesto de ruido y muy alto de CO2 que indica que hay que ventilar el espacio.

La iluminación de cada color irá acompañada de una melodía que será agradable para verde, un poco molesta para el amarillo y tipo sirena para el rojo. Estos sonidos se pueden desactivar a voluntad mediante un conmutador dispuesto a tal efecto, y que por tanto, determina el modo de funcionamiento.

Físicamente se constituye por una base donde estarán el Arduino/MCU y el Hub I2C y ahí será donde estará accesible la alimentación del sistema que se hará mediante alimentador externo.

La base se comunica mediante un tubo, destinado a pasar todos los cables, con la caja de sensores que irá justo debajo del cubo que representa el color verde. En esta misma caja de sensores van alojados, en su parte delantera, la pantalla LCD y el conmutador de modo.

Encima del color verde va el amarillo y encima de este el rojo y en cada cubo se aloja un LED de 3W encargado de iluminar cada color cuando corresponda.

Todas las cajas con accesibles por su parte posterior con tan solo extraer la tapa por lo que resultará bastante sencillo de montar.

Opcionalmente la versiones modular y easy plug se dotarán de conexión WiFi. Esta irá conectada directamente a los pines Tx y RX con cruzamiento en el caso de la versión modular. De esta forma no hay que reprogramar la velocidad a 9600 y lo único a tener en cuenta es que para grabar nuestro firmware debemos desconectar los cables Tx y Rx para no entrar en conflictos. Esto facilita bastante las cosas a quien quiera replicarlo y no esté muy avezado en el tema y, como la placa una vez montado el sistema, solamente hay que programarla una vez pues tampoco es un problema muy considerable. No obstante en este sitio se puede [consultar]() como realizar esta tarea.

Con la conexión WiFi podemos subir los datos a la nube, por ejemplo al broker ThingSpeak que nos ofrece canales gratuitos para subir un dato cada 16 segundos.
