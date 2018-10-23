#!/usr/bin/python

import numpy as np
import re
import matplotlib.pyplot as plt
import math

with open("hash_values.txt") as f:
    data = f.read()

data = data.split('\n')

x= []
y= []
for row in data:
	if(row):
		row = row.split(' ')
		a = row[0]
		b = row[1]
		print a,b
		x.append(a)
		y.append(b)


plt.plot(x, y,label="Hash",marker="o",ms=3)
 

with open("btree_values.txt") as f:
    data = f.read()

data = data.split('\n')

x2= []
y2= []
for row in data:
	if(row):
		row = row.split(' ')
		a = row[0]
		b = row[1]
		print a,b
		x2.append(a)
		y2.append(b)

plt.plot(x2, y2,label="BTree",marker="o",ms=3)


plt.legend()
plt.xlabel('M')
plt.ylabel('Time')
plt.title('Hash v/s BTree')
 
plt.show()