num_chef, num_country = [int (_) for _ in input().split(' ')]
#print (num_chef, num_country)

chef = {}

for i in range(num_chef):
    t1 = [_ for _ in input().split(' ')]
    chef[t1[0]] = t1[1]

voteperson = {}
votecountry = {}

for _ in range(num_country):
    t1 = input()
    if t1 not in voteperson:
        voteperson[t1] = 1
    else:
        voteperson[t1]+=1

    if chef[t1] not in votecountry:
        votecountry[chef[t1]]=1
    else:
        votecountry[chef[t1]]+=1

x = max(voteperson.values())

winner_person = []
for key, value in voteperson.items():
    if value == x:
        winner_person.append(key)

y = max(votecountry.values())

winner_country = []
for key, value in votecountry.items():
    if value == y:
        winner_country.append(key)

winner_person.sort()
winner_country.sort()

print(winner_country[0])
print(winner_person[0])
