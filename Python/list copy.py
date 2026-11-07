a = [1,2,3,2,4,2,5,2,6,7,8]
count = a.count(2)
while count > 1:
    a.remove(2)
    count -= 1
print(a)