import numpy as np
import matplotlib.pyplot as plt


ax = plt.subplot()

ax.spines['left'].set_position(('data',0))
ax.spines['right'].set_color(('none'))
ax.spines['top'].set_color(('none')) 
ax.spines['bottom'].set_position(('data',0))

ax.set_aspect('equal')
ax.set_xticks(np.arange(-20, 20, 100))

plt.ylim([-100, 100])

x = np.linspace(0, 100, 100) 
y = -0.0063 * x ** 2 + 0.55 * x 


plt.plot(x, y, label = "$y = -0.0063x^2 + 0.55$") 
plt.legend()
plt.show() 

