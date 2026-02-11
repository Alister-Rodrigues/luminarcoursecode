def startCountdown(startTime, endtime=0, step=-1):
    [print(i) for i in range(startTime, endtime - 1, step)]


def move_robot(direction, distance):
    # print(f"Robot moving {direction} for {distance} meters")
    print("Robot moving", direction, "for", distance, "meters")


def robot_path(direction, distance, speed):
    time_taken = distance / speed
    print(f"Robot moving {direction} for {distance} meters at {speed} m/s")
    print(f"Time to complete: {time_taken} seconds")
    print("--------------------------")


def sum(a, b):
    print(a + b)


def greaterThan(a, b):
    if a > b:
        print(a, "is greater than", b)
    elif b > a:
        print(b, "is greater than", a)
    else:
        print("They are equal")


# startCountdown(10, 5, -1)

# move_robot("forward", 5)
# move_robot("left", 3)
# move_robot("backward", 2)

# robot_path("forward", 10, 2)
# robot_path("right", 6, 3)

a = int(input())
b = int(input())
# sum(a, b)
greaterThan(a, b)
