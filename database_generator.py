#
# This file generates unreal people
# Write the id, name and phone number to people text file
# This file can be modified for other tests about database
#

import string
import random


def id_generator(size=9, chars=string.digits):  # generate id and phone number
    s = ''.join(random.choice(chars) for _ in range(size))
    while s[0] == '0':  # avoiding the number begins with zero
        s = ''.join(random.choice(chars) for _ in range(size))
    return s


def name_generator(size=6, chars=string.ascii_uppercase):   # generate name
    return ''.join(random.choice(chars) for _ in range(size))

f = open('people', 'w+')
for i in range(0, 100000000):

    found = False
    tmp = id_generator()
    for line in f:      # generate a unique id
        if tmp in line:
            found = True
    if not found:
        f.write(tmp)
        f.write(' ')
        f.write(name_generator())
        f.write(' ')

        pnfound = False
        tmp = id_generator(9)
        for line in f:      # generate a unique phone number
            if tmp in line:
                pnfound = True  # phone number
        if not pnfound:
            f.write(tmp)
        f.write('\n')
f.close()
