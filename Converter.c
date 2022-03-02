#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h> //для определения длины строки
#include <math.h> //для возведения числа в степень
int main()
{
  int *a;  // указатель на массив
  int i, n; // счётчик и кол-во эл-тов массива
  printf("Введите числа для конвертации: ");
  scanf("%d", &n);
  // Выделение памяти
  a = (int*)malloc(n * sizeof(int));
  // Ввод элементов массива
  for (i = 0; i<n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
  }
  // Переводим каждый элемент А в строку
  for (i = 0; i<n; i++)//
    {
       {
        char с = &a[i] + '0';
        int l = strlen (с);//определяем длину стоки
        // Создаём массив перевода       
        int *b; //Массив для двоек в степени 
        int r; //Счётчик для массива двоек
        b = (int*)malloc(l * sizeof(int));// Память под массив
        for (r = 0; r<l; r++){ // Заполнение массива числа 2
          int h = l-r-1; // Формула степепни числа 2
          if (c[r] == 1){ //Заполнение для единицы
           b[r]  = pow(2, h);
            }
          else if (c[r] == 0){ //Заполнение для нуля
           b[r]  = 0; 
          }
          else { // Защита от дурака
            printf("Невозможно конвертировать");
          }
          //Сложение элементов массива с двойками
          int s = 0;
           for (r = 0; r<l; r++){
           int s = s + b[r];
          }
         }
        }
      }

  // Вывод элементов массива
  for (i = 0; i<n; i++)
    printf("%d ", a[i]);
  free(a);
  getchar();   getchar();
  return 0;
}
