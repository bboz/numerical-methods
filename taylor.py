#  x**2+y**2=4
#  e**x+y=1

e=2.718281828459045
def f(x,y):
    return (x**2 + y**2 -4)

def g(x,y):
    return (e**x + y - 1)

def fx(x,y):
    return (-2*x)
def fy(x,y):
    return (-2*y)

def gx(x,y):
    return (-e**x)

def gy(x,y):
    return (-1)


xi,yi=1,-0.5
for i in range (15):
    a=[ [fx(xi,yi),fy(xi,yi),f(xi,yi)] , [gx(xi,yi),gy(xi,yi),g(xi,yi)] ]

    c= ( ( a[0][1] ) * ( (-a[1][0])/(a[0][0]) ) ) + a[1][1]
    b= ( ( a[0][2] ) * ( (-a[1][0])/(a[0][0]) ) ) + a[1][2]
    deltayi=b/c
    deltaxi=( ( a[0][2] ) + ((-a[0][1])*deltayi) ) / a[0][0]
    xi=xi+deltaxi
    yi=yi+deltayi
    print("delta xi = ",deltaxi , " delta yi = " , deltayi)
    print("xi = ",xi , " yi = " , yi)
