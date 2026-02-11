class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def printInfo(self):
        current_year = 2026
        print("Name:", self.name)
        print("Age:", self.age)
        print("Year of birth:", current_year - self.age)


person1 = Person("Alister", 25)
person1.printInfo()

print()

person2 = Person("Samuel", 52)
person2.printInfo()


class Car:
    def __init__(self, brand, model, color, fuel_tank_capacity, mileage):
        self.brand = brand
        self.model = model
        self.color = color
        self.fuel_tank_capacity = fuel_tank_capacity
        self.mileage = mileage

    def print_details(self):
        print("Brand:", self.brand)
        print("Model:", self.model)
        print("Color:", self.color)
        print("Fuel Tank Capacity:", self.fuel_tank_capacity)
        print("Mileage:", self.mileage)

    def print_car_range(self):
        range = self.fuel_tank_capacity * self.mileage
        print("Car range", range)


class Student:
    def __init__(self, name, roll_number, marks1, marks2, marks3):
        self.name = name
        self.roll_number = roll_number
        self.subject1_marks = marks1
        self.subject2_marks = marks2
        self.subject3_marks = marks3

    def print_details(self):
        print("Name:", self.name)
        print("Roll number:", self.roll_number)
        print("Subject 1 Marks:", self.subject1_marks)
        print("Subject 2 Marks:", self.subject2_marks)
        print("Subject 3 Marks:", self.subject3_marks)

    def calculate_average(self):
        average = (self.subject1_marks + self.subject2_marks + self.subject3_marks) / 3
        print("Average Marks:", average)

    def determine_grade(self):
        average = (self.subject1_marks + self.subject2_marks + self.subject3_marks) / 3
        grade = ""

        if average >= 90:
            grade = "A"
        elif average >= 80:
            grade = "B"
        elif average >= 70:
            grade = "C"
        elif average >= 60:
            grade = "D"
        else:
            grade = "F"

        print("Grade:", grade)

    def count_to_roll_number(self):
        i = 1
        while i <= self.roll_number:
            print("Roll number", i)
            i += 1
