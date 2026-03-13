FindMinElemOfArray. C Tutorials. Embarcadero Rad Studio IDE. Simple Input/Output. Arrays. Algorithms. Console application. 
The console application project is written in C++ using the Microsoft Visual Studio integrated development environment. 
It features simple input/output. It also handles arrays and random numbers. Finding the minimum element in an array is also possible.
The program does the following:
  1. Prompts the user for the number of elements in the array.
  2. Allocates memory and creates an array of integers with the number of elements entered previously.
  3. Fills the created array with random positive integers from 1 to 100.
  4. Displays the received elements on the screen in a space-separated string in a loop with a parameter from 0 to the number of array elements - 1.
  (array numbering starts from 0).
  5. Creates two temporary variables for the index of the maximum element of the array and its value.
  6. The first variable is assigned the value 0, and the second is assigned the value of the element with the number (index) 0 (array numbering starts with 0).
  7. In the second loop with a parameter from 1 to the number of array elements - 1, the search for the minimum array element and its index (number) occurs.
     If the next element is less than the previously found one, then its number (index) and value are remembered.
     After the loop completes, the index and element value variables will contain the minimum of the array.
  8. Displays the index of the minimum element of the array and its value.


FindMaxElemOfArray. Занятия по C. ИС Embarcadero Rad Studio. Простой Ввод-вывод. Массивы. Алгоритмы. Консольное приложение.
Проект консольного приложения написан на языке программирования C в интегрированной среде Microsoft Visual Studio. 
Простой ввод-вывод. Работа с массивами и случайными числами. Поиск минимального элемента массива. 
Программа делает следующее:
  1. Запрашивает у пользователя количество элементов массива.
  2. Выделяет память и создаёт массив целых чисел с количеством элементов введённым ранее.
  3. Заполняет созданный массив случайными целыми положительными числами от 1 до 100.
  4. Выводит на экран полученные элементы в строку через пробел в цикле с параметром от 0 до количества элементов массива - 1.
     (нумерация массива начинается с 0).
  5. Создаёт две временные переменные для индекса минимального элемента массива и его значения.
  6. Первой переменной присваивается значение 0 , а второй - значение элемента с номером (индексом) 0 (нумерация массива начинается с 0).
  7. Во втором цикле с параметром от 1 до количества элементов массива - 1 происходит поиск минималного элемента массива и его индекса (номера).
     Если очередной элемент меньше ранее найденного, то запоминается его номер (индекс) и значение.
     После завершения работы цикла в переменных индекса и значения элемента будет содержаться минимум массива
  8. Выводит на экран индекс минимального элемента массива и его значение.
