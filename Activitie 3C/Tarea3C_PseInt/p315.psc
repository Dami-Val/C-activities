Algoritmo p315
	
	Definir x, resultado Como Real
	Escribir "|   x	   |  f(x) = 3.5 * x^6 - 9.536 * x^4 + 2.3  |"
	Escribir "__________________________________________________"
	
	Para x <- 0.5 Hasta 10 Con Paso 0.5 Hacer
		resultado <- 3.5 * x^6 - 9.536 * x^3 - x^4 + 3
		Escribir "|   " x, "       f(" x ") = ", resultado 
		
	FinPara
	
FinAlgoritmo
