Algoritmo p206
	Definir hora, minuto Como Entero
	
	Escribir "Hola usuario, ingresa solo la hora que tienes (en formato de 24hrs)"
	Leer hora
	Escribir "Ahora ¿que minutos tienes?(1-59)"
	Leer minuto
	minuto <- minuto + 1

	Si minuto == 60 Entonces
		minuto = 00
	FinSi
	Si hora == 24 Entonces
		hora = 00
	FinSi
	Escribir "La nueva hora es: ",hora ":",minuto
FinAlgoritmo
