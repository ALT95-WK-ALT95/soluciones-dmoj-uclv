idiomas/language
español y inglés.
spanish and english.
### ESPAÑOL
---
# Guess the Number – Solución Interactiva

## Descripción:
Este ejercicio consiste en adivinar un número oculto entre 1 y 2·10⁹ mediante interacción con el juez.
El programa debe imprimir conjeturas, leer la respuesta del sistema y ajustar el rango hasta encontrar el número correcto.

## Conoces que:
- El número oculto está en el rango `[1, 2·10⁹]`.
- Tras cada conjetura, el juez responde:
- `<` → tu número es menor que el oculto.
- `>` → tu número es mayor que el oculto.
- `=` → acertaste y el programa debe terminar.
- Se requiere usar entrada/salida estándar y vaciar la salida tras cada impresión.

## Solución:
La solución sería basicamente hacer una búsqueda binaria.

## Procedimiento:
- Inicializar `a=1`(el primer valor del intervalo), `b=2·10⁹`(el mayor valor del intervalo).
- Mientras no sea el numero:
- Calcular `m=(a+b)/2`(la mitad).
- Imprimir m y leer la respuesta.
- Si `<`, mover `a=m+1`.
- Si `>`, mover `b=m-1`.
- Si `=`, terminar.

y así de fácil sería.  
**Science is Magnificent. By _WK_**
---
### ENGLISH
- Note: English is not my first language, but I hope the explanation is clear.

# Guess the Number – Interactive Solution

## Description:
This exercise consists of guessing a hidden number between 1 and 2·10⁹ through interaction with the judge.  
The program must print guesses, read the system's response, and adjust the range until finding the correct number.

## You know that:
- The hidden number is in the range `[1, 2·10⁹]`.
- After each guess, the judge responds:
  - `<` → your number is less than the hidden one.
  - `>` → your number is greater than the hidden one.
  - `=` → you guessed it and the program must end.
- It is required to use standard input/output and flush the output after each print.

## Solution:
The solution would basically be to perform a binary search.

## Procedure:
- Initialize `a=1` (the first value of the interval), `b=2·10⁹` (the largest value of the interval).
- While it is not the number:
  - Calculate `m=(a+b)/2` (the half).
  - Print m and read the response.
  - If `<`, move `a=m+1`.
  - If `>`, move `b=m-1`.
  - If `=`, end.

And that’s how easy it would be.  
**Science is Magnificent. By _WK_**
