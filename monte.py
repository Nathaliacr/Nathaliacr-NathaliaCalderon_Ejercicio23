import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ monte.cpp -o monte.x")
os.system("./monte.x > monte.dat")

data = np.loadtxt("monte.dat")

plt.figure()
plt.hist(data)
plt.savefig("monte.png")