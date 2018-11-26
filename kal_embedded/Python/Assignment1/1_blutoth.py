with open('output.csv', 'r') as f:

    liner = f.readlines()
    for i in range(0, len(liner)):
        lineo=liner[i]
        print(lineo)