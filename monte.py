import os
import numpy as np
import matplotlib.pyplot as plt

os.system("g++ suma.cpp -o suma.x")
os.system("./suma.x > suma.dat")

data = np.loadtxt("suma.dat")

print(data)
