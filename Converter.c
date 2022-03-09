#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h> //для определения длины строки
#include <math.h> //для возведения числа в степень
int main()
{
  int *a;  // указатель на массив
  int i, n;
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
  for (i=0; i<n; i++)
    {
    char s[1000]; 
    sprintf(s,"%d",a[i]);
    int str = strlen (s); //переменная длины строки
    // Создание массива с элементами степени 2
    int *b;
    int r;
    b = (int*)malloc(str * sizeof(int));
      for (r=0; r<str; r++){
        int h = str-r-1; // Формула степепни числа 2
        if (s[r] == '1'){ //Заполнение для единицы
          b[r]  = pow(2,h);
          }
        else { //Заполнение для нуля
          b[r]  = 0; 
          }
        //Сложение элементов массива с двойками
        }
      int sum=0;
      for (r=0; r<str; r++){
         sum += b[r];
      }
      if (i==0){
      printf("%d",sum);
        }
      else{
       printf(" %d",sum);  
      }
      }
      printf("\n"); 
  // Вывод элементов массива
  for (i = 0; i<n; i++)
    printf("%d ", a[i]);
  free(a);
  getchar();   getchar();
  return 0;
}
  
