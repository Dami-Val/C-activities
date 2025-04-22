Algoritmo p209
	Definir a, b, c Como Entero
	Escribir "Ingresa un numero"
	Leer a
	Escribir "Ingresa otro"
	Leer b
	Escribir "Ingresa el último"
	Leer c
	
	Si a > b y a > c Entonces
		Escribir "Este es tu número mayor:", a
	SiNo
		Si b > a y b > c Entonces
			Escribir "Este es tu número mayor:", b
		FinSi
		Si c > a y c > b Entonces
			Escribir "Este es tu número mayor:", c
		FinSi
	FinSi
	
FinAlgoritmo
