import numpy as np
import matplotlib.pyplot as plt
def fp_iter(g,x_0,iterations):
    values = []

    def fp_rec(g,x_0,iterations):
        if iterations <= 0 or g(x_0) == x_0:
            return
        x_k = g(x_0)
        iterations -= 1
        values.append(x_k)
        return fp_rec(g,x_k,iterations)

    fp_rec(g,x_0,iterations)
    
    for index,x_k in enumerate(values):  
        print("Iteration ",index," value ",x_k)

    interval = [np.min([x_0,values[-1]]) - 1,np.max([x_0,values[-1]]) + 1]

    points = np.linspace(interval[0],interval[1],iterations)


    plot = plt.figure()
    plt.title('cobwebbing')
    plt.grid(True)
    plt.plot(np.concatenate(([1/2],values[:-1]),0) ,values,"bo")
    plt.plot(points ,g(points))
    plt.plot(points,points)
    plt.legend(["iteration","function","x = y"])