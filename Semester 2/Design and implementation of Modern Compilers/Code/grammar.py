def get_transitions(rules):
    my_dict = {}
    ld = ''
    res=dict()
    r=''
    for i in rules:
        try:
            my_dict[i[0]]= [i[1][1],i[1][0]]
        except IndexError:
            continue
        print(my_dict)
    for sub in my_dict:
        if isinstance(my_dict[sub],list):
            res[sub]=ld.join([str(ele) for ele in my_dict[sub]])#join list of my_dict
    print ("the left lineear grammar")
    for item in res:#displaying the output
        r+=item+"-"+str(res[item])+"\n"
    print(str(r))

rule_count = int(input("enter number of ruleeeeees>\t"))
rules = []

for i in range(rule_count):
    rules.append(input("enter right linear grammar {i+1}>\t"))
rules = [i.split("-") for i in rules]
get_transitions(rules)
#i/p:noofrules:4 S-aS S-b A-bB A-a
