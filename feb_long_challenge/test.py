import calendar
def checkYear(year): 
    if (year % 4) == 0: 
        if (year % 100) == 0: 
            if (year % 400) == 0: 
                return True
            else: 
                return False
        else: 
             return True
    else: 
        return False

def last_fridays(year):
    month = 2
    count=0
    last_friday = max(week[calendar.FRIDAY]
        for week in calendar.monthcalendar(year, month))
    if((last_friday-21==6 and not checkYear(year)) or last_friday-21==7):
        print('{:01d}'.format(year))

for i in range(301,401):
    last_fridays(i)