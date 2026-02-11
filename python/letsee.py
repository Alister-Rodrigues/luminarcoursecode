# class Robot:
#     def __init__(self, name, battery_level, tasks, components):
#         self.name = name
#         self.battery_level = battery_level
#         self.tasks = tasks
#         self.components = components

#     def add_task(
#         self,
#         task_name,
#         priority,
#         battery_cost,
#         required_component=None,
#         component_amount=1,
#     ):
#         if battery_cost < 0:
#             print("Battery cost is not positive")
#             return

#         task_dictionary = {
#             "name": task_name,
#             "priority": priority,
#             "battery_cost": battery_cost,
#             "required_component": required_component,
#             "component_amount": component_amount,
#         }
#         self.tasks.append(task_dictionary)

#     def perform_task(self, task_name):
#         task_performed_flag = False
#         for task in self.tasks:
#             if task["name"] != task_name:
#                 continue
#             todo_task = task
#             print(todo_task)
#             if task["battery_cost"] > self.battery_level:
#                 print("Not enough battery to accomplish the task: ", task_name)
#                 break

#             available_component_amount = self.components.get(task["required_component"])
#             if available_component_amount is None:
#                 print("Component does not exist")
#                 break
#             elif task["component_amount"] > available_component_amount:
#                 print("Insufficient component amount")
#                 break

#             task_performed_flag = True
#             break

#         if task_performed_flag:
#             print("Task completed")
#         else:
#             print("Task could not be fulfilled")


# robot_a = Robot("Roborta", 100, [], {"head": 1, "arms": 2, "legs": 2})

# robot_a.add_task("Jump", "High", 1, "legs", 2)
# robot_a.perform_task("Jump")

number_tuple = (10, 20, 30, 40, 50, 20, 10)

print("Tuple:", number_tuple)

count = 0
index_of_thirty = -1
for i in range(len(number_tuple)):
    if number_tuple[i] == 20:
        count += 1
    if number_tuple[i] == 30:
        index_of_thirty = i


print("Number of times 20 has appeared:", count, "time(s)")
print("Index of the number 30:", index_of_thirty)

number_set = set(number_tuple)
print("Set:", number_set)

new_number_set = set([5, 10, 15, 20, 25])
another_number_set = set([10, 20, 30, 40])
union_set = new_number_set.union(another_number_set)
print("Union of the two sets:", union_set)

intersection_set = new_number_set.intersection(another_number_set)
print("Intersectino of the two sets:", intersection_set)

difference_sets = new_number_set.difference(another_number_set)
print("Difference:", difference_sets)
