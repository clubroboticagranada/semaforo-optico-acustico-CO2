# Semáforo óptico-acústico de CO2 y nivel de ruido

## Idea

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

## Necesidad de vigilar los niveles de CO2

El dióxido de carbono es un gas inodoro e incoloro. Bajo presión puede encontrarse en estado líquido o estado sólido (hielo seco). 

En el enlace podemos encontrar mas [definiciones de términos usuales](https://www.nj.gov/health/eoh/rtkweb/documents/fs/0343sp.pdf) dadas por el Departamento de Salud de New Jersey.

De manera muy resumida diremos que al respirar aire con mucho CO2, aumenta su concentración en sangre, baja el pH de la misma, y esto dispara la sensación de asfixia.

En la página 8 de la [Ficha Técnica de Seguridad número 300000000020](http://www.carburos.com/microsite/es/selector-gases-soldadura/pdf/SDS/CO2.pdf) se indican claramente los efecto perjudiciales del CO2 que relacionamos a continuación.

* **Efectos debido a la inhalación:**
    * Una concentración de CO2 superior o igual al 10% puede causar pérdida de consciencia o muerte.
    * El bióxido de carbono tiene la capacidad de provocar la muerte, incluso si se mantienen los niveles normales de oxígeno (20 a 21%).
    * El bióxido de carbono es fisiológicamente activo, afecta la circulación y la respiración.
    * A concentraciones de 2 a 10%, el bióxido de carbono puede ocasionar náusea, mareo, dolor de cabeza, confusión, aumento de la presión arterial y la frecuencia respiratoria.
    * A elevadas concentraciones puede causar asfixia.
    * Los síntomas pueden incluir la pérdida de la consciencia o de la movilidad.
    * La víctima puede no haberse dado cuenta de la asfixia. La asfixia puede causar la inconsciencia tan inadvertida y rápidamente que la víctima puede ser incapaz de protegerse.

* **Síntomas:**
    * Vértigo.
    * Salivación.
    * Náusea.
    * Vómitos.
    * Pérdida de movilidad/consciencia.
    * Escalofríos.
    * Sudor.
    * Visión borrosa.
    * Dolor de cabeza.
    * Aumento de pulsaciones.
    * Insuficiencia respiratoria.
    * Respiración rápida.

* **Toxicidad aguda por inhalación:** 
    * Un nivel de CO2 del 5% actúa de manera sinérgica e incrementa la toxicidad de otros gases (CO, NO2).
    * El CO2 incrementa la producción de carboxihemoglobina o metahemoglobina ocasionada por estos gases, probablemente debido a los efectos estimulantes del bióxido de carbono en los sistemas respiratorio y circulatorio.

Podemos consultar mas datos sobre el CO2 en la [Ficha de seguridad oficial](http://www.ilo.org/dyn/icsc/showcard.display?p_card_id=21&p_edit=&p_version=2&p_lang=es)

En la entrada Dióxido de carbono del Instituto para la Salud Geoambiental podemos leer:

> **Efectos en la salud:**

>> El principal efecto que produce el CO2 es la asfixia por desplazamiento del oxígeno, pero esto se produce por concentraciones muy altas capaces de desplazar el oxígeno y reducir su concentración por debajo del 20%. En concentraciones altas, cercanas a la 30.000 ppm, puede causar dolores de cabeza, falta de concentración, somnolencia, mareos y problemas respiratorios. En entornos laborales, como oficinas, se comienzan a tener quejas de olores a partir de las 800-1000 ppm.

> **Colegios y CO2**

>> Es importante señalar que las personas con problemas de asma o SQM deben proveerse de un aire con bajas concentraciones de CO2.

>> Un grupo a tener en cuenta especialmente son los niños en los colegios. En España **no hay** normativa que regule el nivel de CO2 en los colegios, como si lo tienen por ejemplo en Francia, y es bien conocida la relación entre el bajo rendimiento escolar y los altos niveles de CO2. Además los niños debido a su metabolismo y actividad producen mucho más CO2 que los adultos.

> **Principales Fuentes:**

>> La principal fuente en ambientes interiores es la respiración humana. Se deben considerar otras posibles fuentes debidas a combustión en casos de altos niveles de concentración.

> **Niveles habituales:**

>> Los niveles habituales que podamos encontrar en un ambiente interior estará relacionado con las diferentes variables que afectan a este factor como son: Niveles en aire exterior, fuentes interiores, niveles de ocupación y tasas de ventilación.

>> En la legislación existente no hay un valor concreto que se dé como bueno. Existen diferentes recomendaciones y valores límite ocupacionales. En el RITE por ejemplo en función del nivel de calidad de aire exigible al local los valores de concentración van desde las 400 ppm hasta más de 1.000 ppm. El valor límite de exposición profesional para exposiciones de 8 horas que vemos en las Guías del INSHT es de 5.000 ppm si bien este valor no se puede aplicar a entornos no industriales. Recordemos que en espacios como oficinas a partir de 800 ppm se producen quejas por olores y se recomienda no superar las 1.000 ppm.

>> Lo ideal es que el cociente entre exterior e interior sea lo más cercano a 1 posible.

En el artículo de la [International Journal of Emergency Medicine](https://intjem.biomedcentral.com/articles/10.1186/s12245-017-0142-y) dado en la webgrafía se pueden consultar mas datos relativos al tema del CO2 y en el de Centro Canadiense de Seguridad y Salud Ocupacional [(CCSSO)](http://www.ccsso.ca/oshanswers/chemicals/chem_profiles/carbon_dioxide/health_cd.html) tenemos respuestas a diversas cuestiones sobre el CO2.

## Riesgos de transmisión de covid-19 en distintas situaciones

En la figura 3 del artículo Editorial de BMJ dado en la webgrafía podemos leer que la gráfica exponer el ***Riesgo de transmisión del SARS-CoV-2 de personas asintomáticas en diferentes entornos y para diferentes tiempos de ocupación, ventilación y niveles de hacinamiento (ignorando la variación en la susceptibilidad y las tasas de diseminación viral). Las calificaciones son indicativas de riesgo relativo cualitativo y no representan una medida cuantitativa. Es posible que también deban tenerse en cuenta otros factores no presentados en estas tablas al considerar el riesgo de transmisión, incluida la carga viral de una persona infectada y la susceptibilidad de las personas a la infección. Toser o estornudar, incluso si se deben a irritación o alergias mientras esté asintomático, agravaría el riesgo de exposición en un espacio interior, independientemente de la ventilación.***

Reproducimos aquí la gráfica en formato original traducida para que nos sirva de guía en los mensajes que van apareciendo en la pantalla LCD relacionados con los colores que va adquiriendo el semáforo.

<center>

| Imagen 1 |
|:-:|
| ![Gráfica de riesgos de transmisión](semaforo-optico-acustico-CO2/docs/img/intro/i1.png) |
| Gráfica de riesgos de transmisión |

</center>

El archivo fuente en formato svg está disponible para descargar [aquí](img/intro/i1.svg) y en formato pdf [aquí](img/intro/i1.pdf)
