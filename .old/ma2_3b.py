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
y = (-1.5 * x) ** 2 - 3 * x + 7
dx= np.linspace(2, 2, 100)
dy= -1 * np.ones_like(dx) 


plt.plot(x, y, label = "$y = -1.5x^2 -3x + 7$") 
plt.plot(dx, dy, label="$x = -1$")
plt.legend()
plt.show() 

