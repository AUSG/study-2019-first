# n=7일 때 (0,1,2,3), (0,1,2,4) ~ (3,4,5,6)

# Nested For 구현


def function(n):
  for i in range(0, n):
    for j in range(i+1, n):
      for k in range(j+1, n):
        for l in range(k+1, n):
          print(i, j, k, l)
          
function(7)
