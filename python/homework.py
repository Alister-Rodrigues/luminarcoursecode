# 16/1/2026

# 1
class Book:
    def __init__(self, title, author, pages, price, publication_year) -> None:
        self.title = title
        self.author = author
        self.pages = pages
        self.price = price
        self.publication_year = publication_year

    def print_details(self):
        print("Title:", self.title)
        print("Author:", self.author)
        print("Pages:", self.pages)
        print("Price:", self.price)
        print("Publication Year:", self.publication_year)

    def calculate_age(self):
        current_year = 2026
        return current_year - self.publication_year

    def apply_discount(self, discount_percent):
        return self.price * (discount_percent / 100)


# 2
class BankAccount:
    def __init__(self, account_holder, account_number, balance, account_type):
        self.account_holder = account_holder
        self.account_number = account_number
        self.balance = balance
        self.account_type = account_type

    def print_details(self):
        print("Account Holder:", self.account_holder)
        print("Account Number:", self.account_number)
        print("Balance:", self.balance)
        print("Account Type:", self.account_type)

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount

    def print_interest_table(self, years):
        interest_year = 1
        while interest_year <= years:
            print("Year", interest_year, "balance:", self.balance * (5 / 100))
            interest_year += 1


# 3
class Employee:
    def __init__(self, name, employee_id, department, basic_salary, years_of_service):
        self.name = name
        self.employee_id = employee_id
        self.department = department
        self.basic_salary = basic_salary
        self.years_of_service = years_of_service

    def print_details(self):
        print("Employee Name:", self.name)
        print("Employee ID:", self.employee_id)
        print("Department:", self.department)
        print("Basic Salary:", self.basic_salary)
        print("Years of Service:", self.years_of_service)

    def calculate_total_salary(self):
        total_salary = self.basic_salary + ((10 / 100) + self.years_of_service)
        return total_salary

    def determine_seniority(self):
        if self.years_of_service < 2:
            return "Junior"
        elif self.years_of_service < 5:
            return "Mid"
        elif self.years_of_service < 10:
            return "Senior"
        else:
            return "Lead"

    def print_payslip_months(self, months):
        month = 1
        while month <= months:
            print("Salary:", self.calculate_total_salary() / 12)


# 4
class Product:
    def __init__(self, product_name, product_id, quantity, price_per_unit, category):
        self.product_name = product_name
        self.product_id = product_id
        self.quantity = quantity
        self.price_per_unit = price_per_unit
        self.category = category

    def print_details(self):
        print("Product name:", self.product_name)
        print("Product ID:", self.product_id)
        print("Quantity:", self.quantity)
        print("Price per Unit:", self.price_per_unit)
        print("Category:", self.category)

    def calculate_total_value(self):
        return self.quantity * self.price_per_unit

    def check_stock_status(self):
        if self.quantity == 0:
            return "Out of Stock"
        elif self.quantity <= 10:
            return "Low"
        elif self.quantity <= 50:
            return "Medium"
        else:
            return "High"

    def sell_units(self, units):
        if units > self.quantity:
            print("Not enough quantity")
        else:
            self.quantity -= units
            print("Updated Quantity:", self.quantity)


# 5
class Restaurant:
    def __init__(
        self, restaurant_name, cuisine_type, rating, number_of_tables, price_range
    ):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.rating = rating
        self.number_of_tables = number_of_tables
        self.price_range = price_range

    def print_details(self):
        print("Restaurant name:", self.restaurant_name)
        print("Cuisine Type:", self.cuisine_type)
        print("Rating:", self.rating)
        print("Number of Tables:", self.number_of_tables)
        print("Price Range:", self.price_range)

    def calculate_capacity(self):
        return self.number_of_tables / 4

    def determine_category(self):
        if self.price_range <= 2:
            return "Budget"
        elif self.price_range <= 3:
            return "Mid-range"
        else:
            return "Fine Dining"

    def reserve_tables(self, requested_tables):
        if requested_tables <= self.number_of_tables:
            self.number_of_tables -= requested_tables
        else:
            print("Not enough Tables")

        print("Remaining Tables:", self.number_of_tables)

    def simulate_full_booking(self):
        reserve_table = 1
        while self.number_of_tables == 0:
            self.reserve_tables(reserve_table)


# end 16/1/2026

# 14/1/2026

# # 1
# def calculate_speed(distance, time):
#     speed = distance / time
#     print(f"Robot speed is {speed} m/s")


# calculate_speed(100, 20)
# calculate_speed(50, 10)
# calculate_speed(15, 5)


# # 2
# def turn_robot(angle):
#     if angle == 90:
#         print("Robot turning right")
#     elif angle == -90:
#         print("Robot turning left")
#     elif angle == 180:
#         print("Robot turning around")
#     else:
#         print(f"Robot rotating {angle} degrees")


# turn_robot(90)
# turn_robot(-90)
# turn_robot(180)
# turn_robot(45)


# # 3
# def detect_obstacles(start_distance, min_distance):
#     while start_distance > min_distance:
#         print("Current distance:", start_distance, "meters")
#         start_distance -= 2

#     print("WARNING: Obstacle too close")


# detect_obstacles(20, 5)
# detect_obstacles(15, 3)


# # 4
# def number_pattern_generator():
#     i = 1
#     count = 0
#     while i <= 15:
#         if i % 2 == 0 and i % 3 == 0:
#             print(i, "is divisible by 6")
#             count += 1
#         elif i % 2 == 0:
#             print(i, "is even")
#         elif i % 3 == 0:
#             print(i, "is divisible by 3")

#         if i == 13:
#             break
#         i += 1

#     print("Total amount of numbers divisible by 6:", count)


# number_pattern_generator()


# # 5
# def manage_energy(energy_level, task_cost, tasks):
#     i = 1
#     while i <= tasks:
#         if energy_level >= task_cost:
#             energy_level -= task_cost
#             print(f"Task {i} completed. Energy remaining: {energy_level}")
#         else:
#             print(f"Insufficient energy. Tasks completed: {i - 1}")
#             break

#         i += 1

#     print("Total tasks completed:", i - 1)
#     print("Remaining Energy:", energy_level)
#     return tasks - (i - 1)


# rem_one = manage_energy(100, 15, 8)
# print("Remaining tasks:", rem_one)
# rem_two = manage_energy(50, 10, 7)
# print("Remaining tasks:", rem_two)
# end 14/1/2026
