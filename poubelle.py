def dico_search(liste, nbr):
	start = 0
	end = len(liste)
	while start + 1 != end:
		mid = start + ((end - start) // 2)
		if nbr > liste[mid]:
			start = mid
		else:
			end = mid
	return end

# ---------- START ------------------
x = [8, 9, 3, 5, 7, 4, 2, 1]

paires = [[x[i], x[i+1]] for i in range(0, len(x), 2)]

for pair in paires:
	if pair[0] > pair[1]:
		pair[0], pair[1] = pair[1], pair[0]

print(paires)
print("")

print("-- sort big number in each pair--")

paires.sort(key=lambda e: e[1])
print(paires)

s=[]
p=[]
for pair in paires:
	s.append(pair[1])
	p.append(pair[0])
print("------")

print(s)
print(p)

print("------")

p.pop(0)
print(s)
print(p)

print("recherche dico pour placer partie gauche de paire :")

for rest in p:
	idx = dico_search(s, rest)
	s.insert(idx, rest)

print(s)