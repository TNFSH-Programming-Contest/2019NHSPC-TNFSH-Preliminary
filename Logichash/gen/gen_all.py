import random

tasks = [5, 5, 10, 10]
tasks_maxn = [4, 10, 10**6, 1000000007]

for i, (cnt, maxn) in enumerate(zip(tasks, tasks_maxn)):
    for j in range(cnt):
        f = open('testdata/%02d-%02d.in' % (i, j), 'w')
        if j == 0:
            print(1, file=f)
        elif j == 1:
            print(maxn, file=f)
        else:
            print(random.randint(2, maxn-1), file=f)
