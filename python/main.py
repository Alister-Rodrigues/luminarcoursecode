if __name__ == "__main__":
    # # 1
    # arm_motors_num = 4
    # sensor_dist = 5.5
    # nav_mode = "autonomous"
    # emergency_stop_flag = False

    # # 2
    # print(f"Arm Motors = {arm_motors_num} : {type(arm_motors_num)}")
    # print(f"Sensor Distance = {sensor_dist} : {type(sensor_dist)}")
    # print(f"Navigation Mode = {nav_mode} : {type(nav_mode)}")
    # print(f"Emergency Stop Flag = {emergency_stop_flag} : {type(emergency_stop_flag)}")
    # print()
    # print()

    # # 3
    # arm_motors_num += 2
    # sensor_dist *= 100
    # nav_mode += " mode enabled"
    # emergency_stop_flag = not emergency_stop_flag

    # print(f"Arm Motors = {arm_motors_num} : {type(arm_motors_num)}")
    # print(f"Sensor Distance = {sensor_dist} : {type(sensor_dist)}")
    # print(f"Navigation Mode = {nav_mode} : {type(nav_mode)}")
    # print(f"Emergency Stop Flag = {emergency_stop_flag} : {type(emergency_stop_flag)}")

    # sensor_reading = 3
    # threshold = 2

    # if sensor_reading > threshold:
    #     print("Above threshold")
    # elif sensor_reading < threshold:
    #     print("Below threshold")
    # else:
    #     print("Equal to threshold")

    # battery_level = 11
    # robot_temp = 99

    # if battery_level < 20:
    #     print("Low battery")
    # if robot_temp > 75:
    #     print("Overheating")
    # if battery_level < 20 and robot_temp > 75:
    #     print("Critical condition")

    # speed = 2
    # load_weight = 51

    # if speed > 10:
    #     if load_weight > 50:
    #         print("Overloaded and Over Speeding")
    #     else:
    #         print("Over Speeding")
    # else:
    #     if load_weight > 50:
    #         print("Overloaded")
    #     else:
    #         print("Normal Operation")

    # for i in range(20, 51):
    #     print(i)

    # i = 1
    # while i <= 10:
    #     if i % 5 == 0:
    #         i += 1
    #         continue

    #     if i % 2 == 0:
    #         print(i, "is even")
    #     else:
    #         print(i, "is odd")
    #     i += 1

    # oddSum = 0
    # evenSum = 0
    # i = 1
    # while i <= 30:
    #     if i % 3 == 0 and i % 5 == 0:
    #         print(i, "is a multiple of 15")

    #     if i % 2 == 0:
    #         if i % 4 != 0:
    #             print(i, "is even but not divisible by 4")
    #         evenSum += i
    #     else:
    #         oddSum += i

    #     if oddSum > 80:
    #         break

    #     i += 1

    # print("Sum of all odd numbers:", oddSum)
    # print("Sum of all even numbers:", evenSum)
    # print("Difference between oddSum and evenSum:", oddSum - evenSum)

    for i in range(10, -1, -1):
        print(i)
