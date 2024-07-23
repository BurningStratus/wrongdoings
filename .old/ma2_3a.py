import numpy as np
import matplotlib.pyplot as plt


ax = plt.subplot()

ax.spines['left'].set_position(('data',0))
ax.spines['right'].set_color(('none'))
ax.spines['top'].set_color(('none')) 
ax.spines['bottom'].set_position(('data',0))

ax.set_aspect('equal')
ax.set_xticks(np.arange(-20, 20, 100))

plt.ylim([-10, 10])

x = np.linspace(-10, 10, 100) 
y = (x ** 2) - (4 * x) + 3 
dx= np.linspace(2, 2, 100)
dy= 2 * np.ones_like(dx) 


plt.plot(x, y, label = "y = x ** 2 - 4 * x + 3") 
plt.plot(dx, dy, label="x = 2")
plt.legend()
plt.show() 

