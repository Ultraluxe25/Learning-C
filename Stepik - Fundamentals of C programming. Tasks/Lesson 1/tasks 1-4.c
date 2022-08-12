// https://stepik.org/lesson/13977/step/1?unit=30906
// Первая программа на Си

/* Task 1.
Напишите программу, которая выводит на экран следующие строки:

Hello, World!
The world is yours!
*/

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("The world is yours!");
    return 0;
}


/* Task 2.
Вы смотрели фильм «Матрица»? Если нет, то советую посмотреть.
А задание будет следующим: переписать программу «Hello, world!» так, чтобы на экране появился следующий текст:

Wake up, Neo...

The Matrix has you...

Follow the white rabbit...

Подсказка: Вы можете использовать сколько угодно символов "\n". Строки с текстом разделены пустой строкой.
*/

#include <stdio.h>

int main() {
  printf("Wake up, Neo...\n\n");
  printf("The Matrix has you...\n\n");
  printf("Follow the white rabbit...\n");    
  return 0;
}


/* Task 3.
Напишите программу, которая выводит на экран следующие строки:

NICKNAME: Neo
CITY: St-Petersburg
AGE: 35
HEIGHT: 180
WEIGHT: 75
*/

#include <stdio.h>

int main() {
  printf("NICKNAME: Neo\n");
  printf("CITY: St-Petersburg\n");
  printf("AGE: 35\n");
  printf("HEIGHT: 180\n");
  printf("WEIGHT: 75");

  return 0;
}


/* Task 4.
В 1912 году Американский флаг "Былая слава" имел 48 звёзд (по одной на каждый штат) и 13 полос (по одной на колонию).
Напишите программу, которая будет выводить на экран приближённую картинку этого флага.

_________________________________________________
********_________________________________________
********_________________________________________
********_________________________________________
********_________________________________________
********_________________________________________
********_________________________________________
_________________________________________________
_________________________________________________
_________________________________________________
_________________________________________________
_________________________________________________
_________________________________________________
подсказка: строки содержат 49 символов. Используются символы нижнее подчёркивание и звёздочка.

Источник: Д. Алкок "Язык Паскаль в иллюстрациях".
*/

#include <stdio.h>

int main() {
    printf("_________________________________________________\n");
    printf("********_________________________________________\n");
    printf("********_________________________________________\n");
    printf("********_________________________________________\n");
    printf("********_________________________________________\n");
    printf("********_________________________________________\n");
    printf("********_________________________________________\n");
    printf("_________________________________________________\n");
    printf("_________________________________________________\n");
    printf("_________________________________________________\n");
    printf("_________________________________________________\n");
    printf("_________________________________________________\n");
    printf("_________________________________________________\n");
    
    return 0;
}
