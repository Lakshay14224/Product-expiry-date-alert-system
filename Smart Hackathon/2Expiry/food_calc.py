#! python3
# A small program to work out the expiry date of a product and print it to console.

import datetime

#Print the current date
today = datetime.date.today()
print(today.strftime('Today\'s date: %d, %b %Y\n'))

# medicine variables and their corresponding values
medicine = dict(
    corocin = 730,
    dolo = 300,
    megacv = 625,
    metrogyl = 1095,
    moonocef = 547,
    losartum = 365,
    aciloc = 840,
    zerodal= 700,
)

# Using medicine dictionary values with time delta method to aquire expiry date.
def expiry_calc(item_name):

    today = datetime.date.today()
    aditionalDay = datetime.timedelta(days=item_name)
    newDay = today + aditionalDay
    print(newDay.strftime('\n--Expiry: %a, %d/%m/%Y--'))

    # Calling the expiry() function with the 'variable' keyword e.g. expiry_calc(brownie) will output correctly.
def user_select():
    keyword_set = {'corocin', 'dolo', 'megacv', 'metrogyl', 'moonocef 200', 'losartum', 'aciloc', 'zerodal-P',}
    print(", ".join(medicine))
    while True:
        user_input = input('\nPlease enter medicine item:\n')
        if user_input == "help":
            print(", ".join(medicine))
        elif user_input not in keyword_set:
            print('\nEntry incorrect')
        else:
            expiry_calc(medicine[user_input])

if __name__ == '__main__':
    user_select()
