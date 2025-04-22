Algoritmo p211
	
	Definir ingreso, impuesto Como Real
	Escribir "Hola usuario, ingresa tu monto de ventas para saber cual es tu impuesto"	
	Leer ingreso
	Si ingreso <= 9500 Entonces
		impuesto = ingreso * 0.031
	SiNo
		Si ingreso > 9500 y ingreso < 15000 Entonces
			impuesto = ingreso * 0.045
		FinSi
		
		Si ingreso >= 15000 Entonces
			impuesto = ingreso * 0.050
		FinSi
		
	FinSi
	
	
	Escribir "Este fue tu impuesto: ", impuesto
	
	
FinAlgoritmo
