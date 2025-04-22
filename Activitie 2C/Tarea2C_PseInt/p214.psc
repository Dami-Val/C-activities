Algoritmo p214
	
	Definir status Como Caracter
	Definir examen1, examen2, examen3, promedio Como Real
	Escribir "Hola usuario, ingrese por favor la calificacion de su primer examen:"
	Leer examen1
	Escribir "Ahora ingrese por favor la calificacion de su segundo examen:"
	Leer examen2
	Escribir "Ahora ingrese por favor la calificacion de su tercer examen:"
	Leer examen3
	
	promedio = (examen1 + examen2) /2
	
	Si examen3 > promedio Entonces
		status = "Mejorando"
	SiNo
		Si examen3 <= promedio -5 Entonces
			status = "Empeorando"
		SiNo
			status = "Sin cambios"
		
		FinSi
	FinSi
	Escribir "Basándonos en su calificación, concluimos que su rendimiento es: ",status
		
FinAlgoritmo

