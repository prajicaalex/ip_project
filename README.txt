Convertor

1. Lungime
2. Arie
3. Volum
4. Timp
5. Viteza (km /h in mph in m/s)
6. Temperatură
7. Masa
8. Energie
9. Presiune (bar to psi)
10. Densitate
11. Consum combustibil (din l/100km in mile la galon si km la litru)

-----------------------------

    The app will provide a contextual menu like the one above plus an option to "exit". An option may be selected by it's
number or it's name. (ex: 1 for number or Lungime (lungime, LUNGIME, or other case) for name).
    After the user selects the wanted option (ex: 1. Lungime) the app will show another menu from which the user
selects the unit to convert from, then the unit to convert to and finally the amount of units
(ex for 1. Lungime: m (meters - unit to convert from), km (kilometers - unit to convert to) and 1000 (amount)).
In the end the app will provide the answer. At every step in the app, it will be provided options to return to the first
menu (at which the user may select the wanted unit), an option to go back to the previous steps.

-------------------------------

App logic

Structures for every convert unit
Functions for convertions, will take as a parameter the amount (ex. toMeters(amount) return amount*factor
fromMeters(amount) return amount/factor).