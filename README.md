# Singly-Linked-List
# 📌 Singly Linked List (C++)

## 🇺🇦 Опис проєкту

Цей проєкт реалізує **однозв’язний список (Singly Linked List)** на мові **C++** з використанням **шаблонів (templates)**. Завдяки шаблонам список може працювати з будь-яким типом даних (`int`, `std::string`, власні структури тощо).

Проєкт створений з навчальною метою для кращого розуміння:

* динамічної памʼяті (`new` / `delete`)
* вказівників
* шаблонів у C++
* структури даних «зв’язний список»

---

## 🧠 Теоретична частина (коротко)

**Однозв’язний список** — це структура даних, яка складається з вузлів (**Node**). Кожен вузол містить:

* дані (`data`)
* вказівник на наступний вузол (`next`)

На відміну від масиву:

* елементи не зберігаються в памʼяті послідовно
* легко додавати та видаляти елементи
* немає доступу за індексом за O(1)

---

## 🧩 Структура коду

### 🔹 `Node<T>`

Вузол списку, який зберігає дані та вказівник на наступний елемент.

### 🔹 `List<T>`

Клас-обгортка над списком, який керує:

* додаванням елементів у кінець (`push_back`)
* видаленням першого елемента (`pop_front`)
* очищенням списку (`clear`)
* виведенням елементів (`print`)

### 🔹 Деструктор

Гарантує, що вся динамічно виділена памʼять буде звільнена (без memory leak).

---

## ⚙️ Функціональність

* ✅ `push_back(const T&)` — додає елемент у кінець списку
* ✅ `pop_front()` — видаляє перший елемент
* ✅ `clear()` — очищає весь список
* ✅ `print()` — виводить список у вигляді:

  ```
  10 -> 20 -> 30 -> nullptr
  ```

---

## ▶️ Приклад використання

```cpp
List<int> list;
list.push_back(10);
list.push_back(20);
list.push_back(30);
list.print();

list.pop_front();
list.print();

List<std::string> names;
names.push_back("Petro");
names.push_back("ROB");
names.push_back("NAME");
names.print();
```

---

## 🛠️ Як зібрати та запустити

```bash
g++ main.cpp -o list
./list
```

---

## 👤 Автор

**Петро Демчук**
Студент, C++ Developer (Junior level)
Україна 🇺🇦

---

---

# 🇬🇧 Project Description (English)

This project implements a **Singly Linked List** in **C++** using **templates**, allowing the list to work with any data type such as `int`, `std::string`, or custom objects.

The project is designed for educational purposes to practice:

* dynamic memory management (`new` / `delete`)
* pointers
* C++ templates
* classic data structures

---

## 🧠 Theory Overview

A **singly linked list** is a data structure composed of nodes. Each node contains:

* stored data
* a pointer to the next node

Compared to arrays:

* elements are not stored contiguously
* insertion and deletion are efficient
* no constant-time index access

---

## 🧩 Code Structure

### 🔹 `Node<T>`

Represents a single node containing data and a pointer to the next element.

### 🔹 `List<T>`

Manages the linked list and provides methods to:

* add elements to the end (`push_back`)
* remove the first element (`pop_front`)
* clear the list (`clear`)
* print elements (`print`)

### 🔹 Destructor

Ensures all dynamically allocated memory is properly released.

---

## ⚙️ Features

* ✅ Add element to the end
* ✅ Remove first element
* ✅ Clear entire list
* ✅ Print list contents

---

## ▶️ Usage Example

```cpp
List<int> list;
list.push_back(10);
list.push_back(20);
list.push_back(30);
list.print();
```

---

## 👤 Author

**Petro Demchuk**
C++ Junior Developer
Ukraine 🇺🇦

---

## 📜 License

This project is provided for educational purposes.
