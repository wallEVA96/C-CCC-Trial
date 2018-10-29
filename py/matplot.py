#! /usr/bin/python
# -*- coding: utf-8 -*-
# vim:fenc=utf-8
#
# Copyright © 2018 walleva <walleva@ubuntu>
#
# Distributed under terms of the MIT license.

#"""
import matplotlib as mpl
from matplotlib import cm
import matplotlib.pyplot as plt
import numpy as np
from mpl_toolkits.mplot3d import axes3d, Axes3D
from matplotlib.ticker import LinearLocator, FormatStrFormatter

font = {
    'color' : 'b',
    'style' : 'oblique',
    'size' : 20,
    'weight' : 'bold'
 
}
fig = plt.figure()
#ax = Axes3D(fig)
ax =  fig.gca(projection='3d')
x = np.arange(-20,20,0.2)
y = np.arange(-20,20,0.2)
z = -x**2-y**2
x,y = np.meshgrid(x,y)
ax.set_xlabel("X", fontdict=font)
ax.set_ylabel("Y", fontdict=font)
ax.set_zlabel("Z", fontdict=font)

surf = ax.plot_surface(x,y,z, cmap=cm.coolwarm)
fig.colorbar(surf, shrink=0.6, aspect=8)
plt.show()

