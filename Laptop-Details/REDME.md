# Laptop Details Program

## 📌 Project Description

This is a simple **C++ program** that uses a class named `Laptop` to store and display laptop details.

The program stores:

* Laptop Name
* Laptop Price
* Laptop Processor

Two laptop objects are created:

1. Dell XPS 13
2. MacBook Air

## 📁 Folder Structure

```text
Laptop-Details
│
├── main.cpp
├── README.md
└── output.png
```

## 🛠️ Concepts Used

* C++ Class
* Object
* Private Data Members
* Constructor
* Member Function
* `string`
* `double`
* `display()` function
* visual studio / github


## 💻 Program Structure

### Class Name

`Laptop`

### Data Members

```cpp
string name;
double price;
string processor;
```

These data members are **private**, so they can only be accessed inside the class.

### Constructor

```cpp
Laptop(string n, double p, string proc)
```

The constructor is used to assign values to the laptop's name, price, and processor.

### Display Function

```cpp
void display() const
```

This function displays the details of the laptop.

## ▶️ How to Run

### Step 1: Compile

```bash
g++ main.cpp -o main
```

### Step 2: Run

```bash
./main
```

## 📤 Sample Output

```text
--- Laptop 1 Details ---
Laptop Name: Dell XPS 13
Price: 120050
Processor: Intel i7

--- Laptop 2 Details ---
Laptop Name: MacBook Air
Price: 99999
Processor: Apple M2
```

## 🎯 Objective

The main objective of this program is to understand how to create a **class and objects in C++**, use a **constructor**, and display object data using a member function.

## 👨‍💻 Author

**Gaurav Pipavat**
