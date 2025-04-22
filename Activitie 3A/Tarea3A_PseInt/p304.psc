Algoritmo Sumatoria
    Definir suma, n, inicio, i Como Entero
    suma <- 0
	
    Escribir "Hola usuario, ingresa en qué número inicia la sumatoria:"
    Leer inicio
    Escribir "Ahora ingrese hasta qué número termina:"
    Leer n
	
    Para i <- inicio Hasta n Con Paso 1 Hacer
		
		
        // Imprimir "+" solo si no es el último número
        Si i < n Entonces
            Escribir i " + " Sin Saltar
        FinSi
		
        suma <- suma + i
    FinPara
	
    Escribir " = ", suma
FinAlgoritmo
