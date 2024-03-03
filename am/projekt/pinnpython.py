# %%
from sympy import *


# %% [markdown]
# 
#     

# %%
#calculated solution
z = symbols("z",real=True)
w,r,O,B = 1,1,1,1
A = 1/(-z**2*O**2 + I*r*z*O + w**2)
Z = A*E**(I*O*z)
solution = factor( re(A)*re(E**(I*O*z)) )

# %%
NeuralNetwork = 0
train_t = 0

# %% [markdown]
# project applied machine learning,VO Applied machine learning (2023W)

# %%

# %% [markdown]
# <div style="    
# display: flex;
#     /* background-color: #1F2937 ;  */
#     display: flex;
#     flex-direction: row;
#     justify-items: center;
#     justify-content: space-evenly;
#     margin: 5%;
#     width: 100%;
#     list-style-type: none;"
#     >
#     <li>12031612<br>
#     </li>
#     <li></li>
#     <li>VO Applied machine learning (2023W)
#     <br>last project</li>
# </div>

# %% [markdown]
# <hr>

# %% [markdown]
# <h2 style="text-align: center;">Project : Physics informed neural networks PINNs </h2>

# %% [markdown]
# <br>
# <h3>Outline:</h3>
# <div style="    
#     display: flex;
#     flex-direction: column;
#     justify-items: center;
#     justify-content: space-evenly;
#     list-style-type: none;
#     margin-left: 50px;"
#     >
#     <li ><a href='#graphs'>a)What is a PINN</a></li>
#     <li><a href='#oscilator'>b)example: harmonic oscilator</a></li>
#     <div style="margin-left: 15px;" >
#     <li><a href='#training'>i)training</a></li>
#     <li> <a href='#CPINN'>ii)CPINN - Competitive PINNS </a></li>
#     </div>
#     <li> <a href='#ref'>references </a></li>
# 
# </div>
# <br>

# %% [markdown]
# <h3>a)What is a PINN?</h3>
# <a id='graphs'></a>

# %% [markdown]
# 
# We are trying to approximate a particular solution of second order inhomegenous ODE 
# 
# $$
# m * \ddot y + c * \dot y + k * y = g(t),
# $$
# 
# 
# 
# <!-- with $m = 1, c = 0.1$ and $k = 1$.  -->
# 
# with a neural network of the form
# 
# $$
# 
# {  L_{i} = \large \sigma_{i} \left({ \begin{bmatrix}
# &  &  \\
# & {\large W_{i}} & \\
# &  &  \\
# 
#  
# \end{bmatrix} * 
# \begin{bmatrix}
#   \\
# {\large x_{i}}   \\
#   \\
# 
#  
# \end{bmatrix} +
# \begin{bmatrix}
#   \\
# {\large b_{i}}   \\
#  \\
# 
#  
# \end{bmatrix} 
# 
# 
#  }\right) }
# 
# 
# 
# 
# $$
# $$
# N(t) =  (L_{1}  \circ L_{2}  \circ L_{3} \circ L_{o}) (t) 
# $$
# <!--  -->
# 
# 
# 
# 

# %% [markdown]
# where $\sigma_{i}$ is an yet undetermed activation function. and $L_o \rightarrow  \mathbb{R}$ is the output neuron of the form.
# $$  L_{o} = {\large \sigma} \left( 
#   \begin{bmatrix}
#  & {\large w} & \\
# 
# 
#  
# \end{bmatrix} * 
# \begin{bmatrix}
#   \\
# {\large x}   \\
#   \\
# 
#  
# \end{bmatrix} +
#  \lambda \right)$$
# 
#  
# 
# Therefore we define a loss function
# 
# $$
# \mathcal{L}(\mathbf{W}) = \frac{1}{M}\sum_{i=1}^M { (m * \ddot {N}(t_i) + c * \dot {N}(t_i) + k * {N}(t_i) - g(t) ) ^  2 }+ \textcolor{blue}{({N}(0) - y_0) ^ 2 + (\dot {N}(0) - \dot y_0) ^ 2}
# $$
# Where sceond and third terms are the initial value losses. To minimize the loss function we choose Stochastic Gradient descent algorithm.
# $$
# --
# $$

# %% [markdown]
# <h3  id='oscilator'>b)example: harmonic oscilator</h3>
# <h4  id='training'>i)training</h4>

# %% [markdown]
# 
# 
# 
# Consider the harmonic oscilator
# 
# $$
# \ddot y + r * \dot y + \omega ^2 * y = B * cos(\Omega * t),
# $$
# for simplicity we set all parameters to 1,
# 
# $$
# \ddot y + \dot y +  y = cos(t),
# $$
# and initialize the  $L_i$ ,
# $$
# {  L_{i} = \large tanh \left({ \begin{bmatrix}
# &  &  \\
# & 32 \times 32 &\\
# &  &  \\
# 
#  
# \end{bmatrix} * 
# \begin{bmatrix}
#   \\
# {\large x_{i}}   \\
#   \\
# 
#  
# \end{bmatrix} +
# \begin{bmatrix}
#   \\
# 32   \\
#  \\
# 
#  
# \end{bmatrix} 
# 
# 
#  }\right) }
# 
#  $$
# with values in [0,1). The calculated solution of the equation is 
# $$
# y_p(t) = sin(t).
# 
# $$
# 
# 
# In Python we can implement the traing loop for example with tensorflow.
# 

# %%
def train(epochs = 300):
    trainable_vars = NeuralNetwork.trainable_variables()
    optimizer = tf.optimizers.SGD(learning_rate=0.01)
    for _ in range(epochs):
        with tf.GradientTape(persistent=True) as tape: 
            loss = loss(train_t,NeuralNetwork,g)
        grad = tape.gradient(loss, trainable_vars)
        optimizer.apply_gradients(grad, trainable_vars)

# %% [markdown]
# That is we calculate the gradient with respect to each variable and shift the variable in the direction of the gradient accordingly,

# %% [markdown]
# plotting the calculated solution and the predicted solution in blue for  values in  [0,2].

# %% [markdown]
# <img src="png/output.png">

# %% [markdown]
# Calculating the error with respect to the $L_2 $ norm,with trapazoid integral yields

# %% [markdown]
# $$ || NeuralNetwork(t) - sin(t) ||_{L_2}  =  0.20278955 .$$
# 

# %% [markdown]
# If we plot the loss, we can see its convergening to $ \approx0.28.$

# %% [markdown]
# <img src="png/loss.png">

# %% [markdown]
# $$
# --
# $$

# %% [markdown]
# <h4 id='CPINN'> ii)CPINN - Competitive PINNS </h4>

# %% [markdown]
# We are trying to tackle this further by adding a discriminator neural network $ T(t) $ ,
# $$ \mathcal{L}(N,T,t) = \frac{1}{M}\sum_{i=1}^M  T(t) * ( \ddot N(t_i) + \dot N(t_i) + N(t_i) )^2$$
# 
#  with the according the optimization problem,
# $$ max_T \phantom,   min_N \phantom,   \mathcal{L}(N,T,t). $$

# %% [markdown]
# we try stochastic gradient descent for T and for N, that is  $  SGD_{learnable variables \phantom,  L }( - \mathcal{L}(N,T,t)) $ and $ SGD_{learnable variables\phantom, NN }( \mathcal{L}(N,T,t))$ for each iteration.

# %% [markdown]
# plotting the loss we see it seems to converge to the 'Nash equilibrium'.    $ (T,NN) \rightarrow (0,y) $  which would be a solution for the equation. 
# This is not expected because trying to apply SGD seperatly just works for specific zero sum optimization problems.

# %% [markdown]
# <img src="png/losscpin.png">

# %% [markdown]
# the resulting loss plot and $L_2$ norm is now

# %% [markdown]
# $$ || NeuralNetwork(t) - sin(t) ||_{L_2}  = 0.18570352  $$

# %% [markdown]
# One has to consider Optimizers for zero sum problems  for example Competitive Gradient Descent or Sympletic Gradient Adjustment.

# %% [markdown]
# <h4 id='references'>references</h4>

# %% [markdown]
# <div style="    
#     display: flex;
#     flex-direction: column;
#     justify-items: center;
#     justify-content: space-evenly;
#     list-style-type: none;
#     margin-left: 50px;"
#     >
# <li> Prof. Seungchul Lee   -  <i>  Physics-informed Neural Networks (PINN) </i><a href'https://i-systems.github.io/tutorial/KSNVE/220525/01_PINN.html#3.2.-Lab-1%3A-Simple-Example'> "https://i-systems.github.io/tutorial/KSNVE/220525/01_PINN.html#3.2.-Lab-1%3A-Simple-Example "</a></li> <br>
# <li> Lukas Exl, Sebastian Schaffer, Norbert J. Mauser   -   <i> Vorlesungsskript Angewandtes Maschinelles  Lernen </i> </li><br>
#  <li>Benoit Liquet, Sarat Moka, and Yoni Nazarathy   -   <i> The Mathematical Engineering of Deep Learning (2021) </i> <a href'https://deeplearningmath.org/general-fully-connected-neural-networks'>https://deeplearningmath.org/general-fully-connected-neural-networks</a> </li><br>
#  <li>Qi Zeng, Yash Kothari, Spencer H. Bryngelson & Florian Schäfer   -   <i> COMPETITIVE PHYSICS INFORMED NETWORKS </i></li> <br>
#  

# %% [markdown]
# changing the loss Function from mean squared error to least squares
# we can change the Optimizer to Gradient Descent and the loss function to least square i.e 

# %% [markdown]
# ansatz of the form $$ e^{NN(t)} $$ 
# Neural Networks for parameter depended equaation
# Changing Loss funcation to least squares $$

# %%
# #https://www.tensorflow.org/guide/core/optimizers_core
# class GradientDescent(tf.Module):

#   def __init__(self, learning_rate=1e-3):
#     # Initialize parameters
#     self.learning_rate = learning_rate
#     self.title = f"Gradient descent optimizer: learning rate={self.learning_rate}"

#   def apply_gradients(self, grads, vars):
#     # Update variables
#     for grad, var in zip(grads, vars):
#       var.assign_sub(self.learning_rate*grad)

# %%
# #https://www.tensorflow.org/guide/core/optimizers_core
# class GradientDescent(tf.Module):

#   def __init__(self, learning_rate=1e-3):
#     # Initialize parameters
#     self.learning_rate = learning_rate
#     self.title = f"Gradient descent optimizer: learning rate={self.learning_rate}"

#   def apply_gradients(self, grads, vars):
#     # Update variables
#     for grad, var in zip(grads, vars):
#       var.assign_sub(self.learning_rate*grad)

# %% [markdown]
# the above algorithm yields with calculated solution 

# %%
solution

# %%
(Derivative(solution,z) + Derivative(Derivative(solution,z)) + solution )

# %% [markdown]
# L2 Error

# %% [markdown]
# 

# %% [markdown]
# 


