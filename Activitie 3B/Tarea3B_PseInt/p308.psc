Algoritmo p308
    Definir pu, costo, d, descuento, total Como Real
    Definir promo Como Entero
    Definir simbol Como Caracter
    simbol <- '%'
    promo <- 0
    d <- 0
	
    Escribir "Hola usuario, ingrese el costo del producto para conocer la tabla de promociones y descuentos: "
    Leer pu
	
    Escribir "#  Cantidad  #  PU  #  Costo  #  Promo  #  Descuento  #  Total  #"
    
    Para i <- 1 Hasta 1000 Con Paso 1 Hacer
        costo <- pu * i
		
        Si costo >= 100 Y costo <= 200 Entonces
            d <- 0.05
            promo <- 5
            descuento <- costo * d
        Sino
            Si costo > 200 Y costo <= 500 Entonces
                d <- 0.1
                promo <- 10
                descuento <- costo * d
            Sino
                Si costo > 500 Entonces
                    d <- 0.18
                    promo <- 18
                    descuento <- costo * d
                FinSi
            FinSi
        FinSi
		
        total <- costo - descuento
        Escribir i, "        ", pu, "$  ", costo, "$  ", promo, simbol, "  ", descuento, "$  ", total, "$"
    FinPara
FinAlgoritmo
