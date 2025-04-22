Algoritmo p314
	
Definir x, resultado Como Real
	Escribir "|   x	   |  f(x) = 2x^4 - 3x^3 - x^2 + 3  |"
	Escribir "_________________________________________"

		Para x <- 2 Hasta 10 Con Paso 1 Hacer
			resultado <- 2 * x^4 - 3 * x^3 - x^2 + 3
			Escribir "|   " x, "   |  f(" x ") = ", resultado 
			
		FinPara
	
FinAlgoritmo
