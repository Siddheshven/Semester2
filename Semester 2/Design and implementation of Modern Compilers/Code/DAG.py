from cgitb import reset


def func_1(x):
    main=[]
    for i in range(0,x):
        main.append(input("> "))
    print("Label\tOperator\tLeft\tRight")
    for i in range(x):
        q=main[i]
        if q[0] not in res:
            res.append(q[0])

        if len(q)>3:
            print(str(q[0])+ "\t" + str(q[3])+ "\t\t" +str(q[2]) + "\t\t" +str(q[4]))
        else:
            print(str(q[0])+ "\t" + str(q[1])+ "\t\t" +str(q[2]) + "\t\t" + "-")
        
    print(main)
    print(res)

x=int(input("Enter number of 3 address code: "))
res=[]
func_1(x)
