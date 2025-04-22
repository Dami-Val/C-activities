Algoritmo p313
	
    Definir n2, n3, n4 Como Entero
	
    n2 <- 2
    n3 <- 3
    n4 <- 4
	
    Mientras n2 <= 200 o n3 <= 300 o n4 <= 400 Hacer
        Si n2 <= 200 Entonces
            Escribir  n2, " " Sin Saltar
            n2 <- n2 + 2
        Sino
            Escribir  "   " Sin Saltar// Espacio en blanco si no hay más múltiplos de 2
        FinSi
		
        Si n3 <= 300 Entonces
            Escribir n3, " " Sin Saltar
            n3 <- n3 + 3
        Sino
            Escribir "   "  Sin Saltar// Espacio en blanco si no hay más múltiplos de 3
        FinSi
		
        Si n4 <= 400 Entonces
            Escribir n4 Sin Saltar
            n4 <- n4 + 4
        Sino
            Escribir "   " Sin Saltar  // Espacio en blanco si no hay más múltiplos de 4
        FinSi
        
        Escribir ""
    FinMientras
	
FinAlgoritmo

