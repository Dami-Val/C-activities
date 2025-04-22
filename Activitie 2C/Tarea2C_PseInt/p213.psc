Algoritmo p213
	
	Definir nombre, status Como Caracter
	Definir cali Como Real
	Escribir "Hola Usuario, ingrese su nombre:"
	Leer nombre
	Escribir "Bienvenido ", nombre, ", ingrese por favor su calificacion:"
	Leer cali
	
	Si cali > 95.00 Entonces
		status = "Excelente"
	SiNo
		Si cali >= 85.00 y cali <= 95.00 Entonces
			status = "Buena"
		FinSi
		
		Si cali >= 75.00 y cali < 85.00 Entonces
			status = "Suficiente"
		FinSi
		
		Si cali < 75.00 Entonces
			status = "Deficiente"
		FinSi
	FinSi
	Escribir nombre, ", basándonos en su calificación, concluimos que su rendimiento es: ",status
		
FinAlgoritmo

