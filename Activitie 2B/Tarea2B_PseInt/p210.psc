Algoritmo p208
	Definir a, b, c, mayor_n, mediano_n, menor_n Como Entero
	Escribir 'Ingresa un numero'
	Leer a
	Escribir 'Ingresa otro'
	Leer b
	Escribir 'Ingresa el último'
	Leer c
	Si a<b Y a<c Entonces
		menor_n <- a
	SiNo
		Si b<a Y b<c Entonces
			menor_n <- b
		FinSi
		Si c<a Y c<b Entonces
			menor_n <- c
		FinSi
	FinSi
	Si a>b Y a>c Entonces
		mayor_n <- a
	SiNo
		Si b>a Y b>c Entonces
			mayor_n <- b
		FinSi
		Si c>a Y c>b Entonces
			mayor_n <- c
		FinSi
	FinSi
	Si a>menor_n Y a<mayor_n Entonces
		mediano_n <- a
	SiNo
		Si b>menor_n Y a<mayor_n Entonces
			mediano_n <- b
		FinSi
		Si c>menor_n Y a<mayor_n Entonces
			mediano_n <- a
		FinSi
	FinSi
	Escribir 'Aqui tienes ordenados tus numeros de manera Ascendete: ', menor_n, ', ', mediano_n, ', ', mayor_n
FinAlgoritmo
