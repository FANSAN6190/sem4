import matplotlib.pyplot as plt
import pandas as pd
##empData={'emp_ID':[1001,1002,1003,1004,1005,1006],
##         'emp_name':["Amit Kumar","Ravi Sharma","Ravi Kumar","Dileep Kumar","Raj Kapoor","Bhupendra"],
##         'salary':[10000,23000,18000,16500,12000,9999.99],
##         'date_of_joining':['10/10/2000','03/20/2002','03/03/2002','09/10/2000','10/08/2000','09/09/1999']}
##df=pd.DataFrame(empData)
##x=df["emp_ID"]
##y=df["salary"]
##plt.bar(x,y,label='empData',color='red')
##plt.title('IT Employees Data')
##plt.legend()
##plt.xlabel('emp_id')
##plt.ylabel('salary')
def bar_graph_comp():
    #sales_dept,empid,salary
    x1=[1001,1003,1006,1007,1009,1011]
    y1=[8000,23000,18000,16500.5,12000,9999.5]
#production date
    x2=[1002,1004,1010,1008,1014,1015]
    y2=[5000,6000,4500,12000,9000,10000]
    #VERTICAL BAR
    plt.bar(x1,y1,label="sales_dept",color='red')
    plt.bar(x2,y2,label="production_dept",color='green')
    plt.xlabel('emp_codes')
    plt.ylabel('emp_salaries')
    plt.xticks([1001,1002,1003,1004,1005,1006,1007,1008,1009,1010,1011,1012,1013,1014,1015,1016])
    plt.title('comparing 2 dept')
    plt.grid()
    #to put value on top of each bar
    plt.show()
##plt.show()
bar_graph_comp()


