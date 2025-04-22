Algoritmo p212
	
Definir ingreso, impuesto, multa, total Como Real
Escribir "Hola usuario, ingresa tu monto de ventas para saber cual es tu impuest"	
Leer ingreso
	Si ingreso <= 544.00 Entonces
		impuesto = ingreso * 0.080
	SiNo
		Si ingreso > 544.00 Entonces
			impuesto = ingreso * 0.047
		FinSi
	
		Si impuesto >= 329.00 Entonces
			multa = ingreso * 0.060
			total = impuesto + multa
		FinSi
			
	FinSi

		
Escribir "Este fue tu impuesto: ", impuesto, ", esta fue su multa: ", multa, " y este es el total a pagar: ", total
		
		
FinAlgoritmo

