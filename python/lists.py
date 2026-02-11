# temp_list = [23, 30, 18, 25, 32, 19, 28]

# print(len(temp_list))
# temp_list.append(26)
# print(temp_list)
# temp_list.remove(18)
# print(temp_list)

# count = 0
# for i in range(len(temp_list)):
#     if temp_list[i] > 25:
#         count += 1
# print(count)

# if 30 in temp_list:
#     print("30 is in the temperature list")
# else:
#     print("30 is not in the temperature list")

student_grades = {
    "Physics": 78,
    "Chemistry": 85,
    "Biology": 92,
    "Computer Science": 88,
    "History": 76,
}
print("Total number of subjects:", len(student_grades.keys()))
print("Chemistry marks:", student_grades["Chemistry"])

student_grades["Geography"] = 80
student_grades["Physics"] = 82
print("Updated Student Marks:", student_grades)

count = 0
values = student_grades.values()
for mark in values:
    if mark > 80:
        count += 1
