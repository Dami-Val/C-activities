Algoritmo p209
	Definir a, b, c Como Entero
	Escribir "Ingresa un numero"
	Leer a
	Escribir "Ingresa otro"
	Leer b
	Escribir "Ingresa el �ltimo"
	Leer c
	
	Si a > b y a > c Entonces
		Escribir "Este es tu n�mero mayor:", a
	SiNo
		Si b > a y b > c Entonces
			Escribir "Este es tu n�mero mayor:", b
		FinSi
		Si c > a y c > b Entonces
			Escribir "Este es tu n�mero mayor:", c
		FinSi
	FinSi
	
FinAlgoritmo
