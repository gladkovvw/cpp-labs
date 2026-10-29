
# Гладков Даниил Лабораторная работа №1

Все задачи вызываются через интерактивное меню в main.cpp.
Ввод защищён проверкой диапазона (io_utils.h).

# Задание 1. Методы
## Задача 1.1. Дробная часть
### Текст задачи
Дана сигнатура функции double fraction(double x).
Необходимо реализовать функцию так, чтобы она возвращала
только дробную часть числа x.

Пример: x=5.25 → результат 0.25.

### Алгоритм решения
Берём модуль числа (для отрицательных). Приводим к int через
static_cast<int>  отбрасываем дробную часть. Вычитаем целую
часть из исходного числа.

### Тестирование
<img width="161" height="46" alt="test_task1 1" src="https://github.com/user-attachments/assets/abe0ba4c-353b-4f49-858c-156455ac9c31" />

<img width="167" height="42" alt="test2_task1 1" src="https://github.com/user-attachments/assets/8578ea99-76ba-4bed-af3c-06371ad6bf94" />



## Задача 1.3. Букву в число
### Текст задачи
Дана сигнатура функции int charToNum(char x).
Функция принимает символ-цифру '0'..'9' и возвращает
соответствующее число.

Пример: x='3' → результат 3.

### Алгоритм решения
Используем ASCII-коды: символ '0' имеет код 48, '1' — 49 и т.д.
Вычитаем '0' из символа, получаем числовое значение.

### Тестирование
<img width="284" height="37" alt="test2_task1 3" src="https://github.com/user-attachments/assets/0f942ce6-4117-4834-83ea-4f1de330946e" />
<img width="147" height="43" alt="test_task1 3" src="https://github.com/user-attachments/assets/485bad42-c159-477d-8233-e9e44d602027" />


## Задача 1.5. Двузначное
### Текст задачи
Дана сигнатура функции bool is2Digits(int x).
Функция возвращает true, если число двузначное.

Пример: x=32 → true, x=516 → false.

### Алгоритм решения
Берём модуль числа. Проверяем, что оно в диапазоне от 10 до 99.

### Тестирование

<img width="168" height="48" alt="test3_task1 5" src="https://github.com/user-attachments/assets/87b6bcee-9f82-41e2-9601-741a3bc77349" />
<img width="179" height="47" alt="test2_task1 5" src="https://github.com/user-attachments/assets/1f212222-d514-43f0-8e53-92eefcac14e8" />
<img width="193" height="40" alt="test_task1 5" src="https://github.com/user-attachments/assets/1bacc880-b589-4f16-bae6-c960c3f6a0e9" />

## Задача 1.7. Диапазон
### Текст задачи
Дана сигнатура функции bool isInRange(int a, int b, int num).
Функция возвращает true, если num входит в диапазон между
a и b (включая границы). Отношение a и b заранее неизвестно.

Пример: a=5, b=1, num=3 → true.

### Алгоритм решения
Если a > b, меняем их местами. Проверяем, что num >= a и num <= b.

### Тестирование
<img width="171" height="77" alt="test2_task1 7" src="https://github.com/user-attachments/assets/94d6f12a-17a7-463a-a5fb-f9057087dcb4" />
<img width="172" height="98" alt="test_task1 7" src="https://github.com/user-attachments/assets/acdd3100-df4c-41ea-bada-5935a2c8db03" />


## Задача 1.9. Равенство
### Текст задачи
Дана сигнатура функции bool isEqual(int a, int b, int c).
Функция возвращает true, если все три числа равны.

Пример: a=3, b=3, c=3 → true.

### Алгоритм решения
Проверяем a == b && b == c.

### Тестирование
<img width="154" height="88" alt="test_task1 9" src="https://github.com/user-attachments/assets/43b03873-431c-4406-9ccd-1f9612a91998" />
<img width="173" height="75" alt="test2_task1 9" src="https://github.com/user-attachments/assets/c6885b53-83c0-4f83-8ca9-0939ef2a1112" />


# Задание 2. Условия
## Задача 2.1. Модуль числа
### Текст задачи
Дана сигнатура функции int abs(int x).
Функция возвращает модуль числа x.

Пример: x=-3 → 3.

### Алгоритм решения
Если x < 0, возвращаем -x. Иначе возвращаем x.

Тестирование
<img width="150" height="44" alt="test2_task2 1" src="https://github.com/user-attachments/assets/fbc191a0-9e23-4d16-99d1-ec903d1e5a19" />
<img width="138" height="43" alt="test_task2 1" src="https://github.com/user-attachments/assets/bbc17c63-f1f0-4c53-8cd4-0951ecc6145e" />


## Задача 2.3. Тридцать пять
### Текст задачи
Дана сигнатура функции bool is35(int x).
Функция возвращает true, если число делится на 3 или на 5,
но не на оба одновременно.

Пример: x=5 → true, x=15 → false.

### Алгоритм решения
Считаем div3 = (x % 3 == 0) и div5 = (x % 5 == 0).
Возвращаем div3 != div5 (истинно, если ровно одно из двух).

### Тестирование
<img width="167" height="41" alt="test2_task2 3" src="https://github.com/user-attachments/assets/3db8bc42-1667-456f-8ff1-34f0710f68a6" />
<img width="173" height="39" alt="test_task2 3" src="https://github.com/user-attachments/assets/365aa861-5ec3-452f-bdf0-73dd2aeb3aec" />


## Задача 2.5. Тройной максимум
### Текст задачи
Дана сигнатура функции int max3(int x, int y, int z).
Функция возвращает максимум из трёх чисел. Идеальное решение
две инструкции if, без вложенности.

Пример: x=5, y=7, z=7 → 7.

### Алгоритм решения
Берём x за текущий максимум. Если y больше обновляем.
Если z больше обновляем. Ровно два if.

### Тестирование
<img width="169" height="79" alt="test2_task2 5" src="https://github.com/user-attachments/assets/f150b168-c12d-4e49-b3ff-1a291a0e0326" />
<img width="125" height="79" alt="test_task2 5" src="https://github.com/user-attachments/assets/92690b53-9194-4e51-8233-6f9d7100e87f" />


## Задача 2.7. Двойная сумма
### Текст задачи
Дана сигнатура функции int sum2(int x, int y).
Функция возвращает сумму x и y. Если сумма в диапазоне
от 10 до 19, возвращается 20.

Пример: x=5, y=7 → 20.

### Алгоритм решения
Считаем s = x + y. Если s >= 10 && s <= 19, возвращаем 20.
Иначе возвращаем s.

### Тестирование
<img width="134" height="53" alt="test2_task2 7" src="https://github.com/user-attachments/assets/1715e2a4-d14b-49aa-ac5f-6943b235f450" />
<img width="146" height="59" alt="test_task2 7" src="https://github.com/user-attachments/assets/e2500f6c-489d-42bf-a520-86b762c67cec" />



## Задача 2.9. День недели
### Текст задачи
Дана сигнатура функции String day(int x).
Функция возвращает название дня недели (1 понедельник,
7 воскресенье). Если число не от 1 до 7, вернуть
«это не день недели». Использовать switch.

### Алгоритм решения
Используем switch по x. Каждый case возвращает строку.
default для чисел вне диапазона.

### Тестирование
<img width="279" height="36" alt="test2_task2 9" src="https://github.com/user-attachments/assets/e1d8f943-3961-4b38-9e73-90716ec23880" />
<img width="276" height="37" alt="test_task2 9" src="https://github.com/user-attachments/assets/960b8ec5-4a03-4178-b6d6-ab97e384e110" />


# Задание 3. Циклы
## Задача 3.1. Числа подряд
### Текст задачи
Дана сигнатура функции String listNums(int x).
Функция возвращает строку со всеми числами от 0 до x включительно.

Пример: x=5 → "0 1 2 3 4 5".

### Алгоритм решения
Цикл for от 0 до x. Каждое число добавляем к строке через
std::to_string. Пробел добавляем только если число не последнее.

### Тестирование
<img width="222" height="39" alt="test_task3 1" src="https://github.com/user-attachments/assets/6bb6ee03-423d-420f-a8e3-c09239be86e5" />


## Задача 3.3. Чётные числа
### Текст задачи
Дана сигнатура функции String chet(int x).
Функция возвращает строку со всеми чётными числами от 0 до x.
Использовать if в цикле не следует.

### Алгоритм решения
Цикл for от 0 до x с шагом i += 2 сразу идём по чётным.
Пробел между числами добавляем, только если есть следующее.

### Тестирование
<img width="205" height="48" alt="test_task3 3" src="https://github.com/user-attachments/assets/ef313e9a-c666-455e-ad39-193064887658" />


## Задача 3.5. Длина числа
### Текст задачи
Дана сигнатура функции int numLen(long x).
Функция возвращает количество знаков в числе x.

Пример: x=12567 → 5.

### Алгоритм решения
Обрабатываем x=0 отдельно (1 цифра). Для остальных: в цикле
while делим число на 10 и считаем итерации, пока x > 0.

### Тестирование
<img width="166" height="43" alt="test2_task3 5" src="https://github.com/user-attachments/assets/b9f46d74-f83a-43a1-8d42-f8086ce798b8" />
<img width="182" height="35" alt="test_task3 5" src="https://github.com/user-attachments/assets/fc37735c-fdbe-4405-bc5a-e444ef24b265" />


## Задача 3.7. Квадрат
# Текст задачи
Дана сигнатура функции void square(int x).
Функция выводит квадрат из символов * размером x на x.

### Алгоритм решения
Два вложенных цикла for. Внешний по строкам, внутренний
по символам в строке.

### Тестирование
<img width="169" height="57" alt="test_task3 7" src="https://github.com/user-attachments/assets/407a93c1-d317-463d-9d15-e84ad5a7fa5e" />


## Задача 3.9. Правый треугольник
### Текст задачи
Дана сигнатура функции void rightTriangle(int x).
Функция выводит треугольник из * высотой x, выровненный
по правому краю.

### Алгоритм решения
Для строки i (от 1 до x): сначала выводим x - i пробелов,
потом i звёздочек. Затем перевод строки.

### Тестирование
<img width="174" height="71" alt="test_task3 9" src="https://github.com/user-attachments/assets/9c598377-dbce-4a09-a87f-15e730c82e12" />


# Задание 4. Массивы
## Задача 4.1. Поиск первого значения
### Текст задачи
Дана сигнатура функции int findFirst(int arr[], int x).
Функция возвращает индекс первого вхождения x в массив.
Если числа нет возвращает -1.

Пример: arr=[1,2,3,4,2], x=2 → 1.

### Алгоритм решения
Цикл for по массиву. Как только встретили arr[i] == x
возвращаем i. Если цикл закончился возвращаем -1.

### Тестирование
<img width="320" height="150" alt="test_task4 1" src="https://github.com/user-attachments/assets/0941db06-d769-4cdb-bf8a-092e3ff4dc1c" />
<img width="139" height="135" alt="test2_task4 1" src="https://github.com/user-attachments/assets/f9805a83-bcfd-4644-9267-c26ed98e95db" />


## Задача 4.3. Максимум по модулю
### Текст задачи
Дана сигнатура функции int maxAbs(int arr[]).
Функция возвращает элемент массива с максимальным модулем
(само число, не модуль).

Пример: arr=[1,-2,-7,4,2] → -7.

### Алгоритм решения
Храним два значения: best (само число) и best_abs (его модуль).
Проходим по массиву, сравниваем модули, при большем — обновляем оба.

### Тестирование
<img width="162" height="138" alt="test2_task4 3" src="https://github.com/user-attachments/assets/bcbfdee9-d9ca-424b-a71a-31c6797756f0" />
<img width="355" height="145" alt="test_task4 3" src="https://github.com/user-attachments/assets/45151370-f468-45c0-a499-113142c86a93" />


## Задача 4.5. Добавление массива в массив
### Текст задачи
Дана сигнатура функции int* add(int arr[], int ins[], int pos).
Функция возвращает новый массив, в котором в позицию pos
вставлены элементы массива ins.

Пример: arr=[1,2,3,4,5], ins=[7,8,9,10,11], pos=3 →
[1,2,3,7,8,9,10,11,4,5].

### Алгоритм решения
Используем статический буфер static int result[10]. Сначала
копируем arr[0..pos-1], потом весь ins, потом arr[pos..end].

### Тестирование
<img width="438" height="254" alt="test_task4 5" src="https://github.com/user-attachments/assets/80189999-e66d-40cd-93a5-43843495ae5c" />


## Задача 4.7. Возвратный реверс
### Текст задачи
Дана сигнатура функции int* reverseBack(int arr[]).
Функция возвращает новый массив — исходный, записанный
в обратном порядке.

Пример: arr=[1,2,3,4,5] → [5,4,3,2,1].

### Алгоритм решения
Используем статический буфер. result[i] = arr[size - 1 - i].

### Тестирование
<img width="353" height="139" alt="test_task4 7" src="https://github.com/user-attachments/assets/949ea77d-44cf-47e1-95db-1e2d3e66b1df" />


## Задача 4.9. Все вхождения
### Текст задачи
Дана сигнатура функции int* findAll(int arr[], int x).
Функция возвращает массив индексов всех вхождений x.

Пример: arr=[1,2,3,8,2], x=2 → [1,4].

### Алгоритм решения
Заполняем буфер -1. Проходим по массиву, при совпадении
записываем индекс в буфер. В main считаем количество
до первой -1.

### Тестирование
<img width="338" height="159" alt="test2_task4 9" src="https://github.com/user-attachments/assets/1af0b1e9-dc24-4fd3-8340-2b8f734f7d6f" />
<img width="314" height="144" alt="test_task4 9" src="https://github.com/user-attachments/assets/2c3c2010-0bf7-4d90-bea6-f525a134ae6e" />

