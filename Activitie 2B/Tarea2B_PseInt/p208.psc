Algoritmo p208
	Definir a, b, c Como Entero
	Escribir "Ingresa un numero"
	Leer a
	Escribir "Ingresa otro"
	Leer b
	Escribir "Ingresa el último"
	Leer c
	
	Si a < b y a < c Entonces
		Escribir "Este es tu número menor:", a
	SiNo
		Si b < a y b < c Entonces
			Escribir "Este es tu número menor:", b
		FinSi
		Si c < a y c < b Entonces
			Escribir "Este es tu número menor:", c
		FinSi
	FinSi
	
FinAlgoritmo
