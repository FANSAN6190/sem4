import matplotlib.pyplot as plt
import pandas as pd
x=[2015,2016,2017,2018,2019,2020,2021,2022]
y=[9,10,8.5,8.9,12,7.51,12,8]
plt.plot(x,y,color="green",label="Profit")
plt.title="Company sales"
plt.xlabel="years"
plt.ylabel="Profit"
plt.legend("A")
plt.show()
