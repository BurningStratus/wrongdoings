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

x = np.linspace(-1, 1, 100) 
y = 4 * np.ones_like(x) 
x1= np.linspace(1, 3, 100)
y1= -x + 3


plt.plot(x, y, label = "y = 4") 
plt.plot(x1, y1, label = "y = -x + 3")
plt.legend()
plt.show() 

