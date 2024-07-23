import numpy as np
import matplotlib.pyplot as plt


ax = plt.subplot()

ax.spines['left'].set_position(('data',0))
ax.spines['right'].set_color(('none'))
ax.spines['top'].set_color(('none')) 
ax.spines['bottom'].set_position(('data',0))

ax.set_aspect('equal')
ax.set_xticks(np.arange(-5, 5, 100))

plt.ylim([-10, 10])

x = np.linspace(-5, 0, 100) 
y = -(5 / 3) * x - (25/8)
x1= np.linspace(0, 4, 100)
y1= 3 * np.ones_like(x1)
x2= np.linspace(4, 8, 100)
y2= - (3/4) * x + 6
x3= np.linspace(8, 10, 100)
y3= (1/2) * x - 4


plt.plot(x, y, label = "y = -5/3 - 25/8") 
plt.plot(x1, y1, label = "y = 3")
plt.plot(x2, y2, label = "y = -3/4 + 6")
plt.plot(x3, y3, label = "y = 1/2 - 4")
plt.legend()
plt.show() 

