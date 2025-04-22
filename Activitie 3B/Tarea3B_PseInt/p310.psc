Algoritmo p310
	
	Definir i, t, n, m Como Entero
	
	Escribir "Hola usuario, ingresa el número del cual deseas multiplicar :"
	Leer n
	Escribir "Ahora ingresa hasta donde inicia la tabla:"
	Leer i
	Escribir "Ahora ingresa donde termina la tabla:"
	Leer t
	
	Mientras i <= t
		m = n * i;
		Escribir n " x " i " = " m
		i <- i + 1
	FinMientras
	
FinAlgoritmo
