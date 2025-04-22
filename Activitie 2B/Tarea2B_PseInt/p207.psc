Algoritmo p207
	Definir montodv, comision Como Real
	Escribir "Hola usuario, ingresa tu monto de ventas para saber cual es tu comisión"	
	Leer montodv
	Si montodv < 1540.00 Entonces
		comision = montodv * 0.028
	SiNo
		comision = montodv * 0.035
		
	FinSi
	
	Escribir "Esta fue tu comisión: ", comision
	
	
FinAlgoritmo
