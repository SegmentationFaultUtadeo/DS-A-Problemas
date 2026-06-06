from datetime import *

days = {
    "Mon": 1,
    "Tue": 2,
    "Wed": 3,
    "Thu": 4,
    "Fri": 5,
    "Sat": 6,
    "Sun": 7
}

def string_to_date(date: str) -> timedelta:
    day, time = date.split()
    minute, hour = map(int, time.split(":"))
    return timedelta(days=days[day], minutes = minute, hours = hour)

def time_to_string(time: str) -> (str, str):
    hours = ""
    minutes = ""
    if ((time.seconds // 3600) == 1):
        hours += f"{time.seconds // 3600} hour"
    elif ((time.seconds // 3600) > 1):
        hours += f"{time.seconds // 3600} hours"
    if (((time.seconds % 3600) // 60)  == 1):
        minutes += f"{(time.seconds % 3600) // 60} minute"
    elif (((time.seconds % 3600) // 60) > 1):
        minutes += f"{(time.seconds % 3600) // 60} minutes"
    return (hours, minutes)
            
t1 = string_to_date(input())
t2 = string_to_date(input())

delta = t2 - t1

if (delta.total_seconds() < 0):
    delta += timedelta(days=7)

if (len(str(delta).split()) == 1):
    hours, minutes = time_to_string(delta)
    if ((delta.seconds % 3600) // 60 == 0):
        print(hours)
    elif (delta.seconds // 3600 == 0):
        print(minutes)
    else:
        print(hours, " and ", minutes)
