import matplotlib.pyplot as plt
import pandas as pd
slices=[15,14,24,16]
dept_name=['sales','production','hr','finance']
colors=['magenta','cyan','brown','gold']
plt.pie(slices,labels=dept_name,colors=colors,startangle=90,explode=(0,0.1,0.2,0.3))
plt.legend(title="Department wise expenditure")
plt.show()



