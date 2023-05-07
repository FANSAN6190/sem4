import matplotlib.pyplot as plt
import pandas as pd
emp_ages=[22,45,30,59,58,56,57,58,41,45,43,43,50,40,34,33,25,19]
bins=[0,10,20,30,40,50,60]
plt.hist(emp_ages,bins,color="blue")
plt.show()
