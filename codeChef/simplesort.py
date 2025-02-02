def bubblesort(arr):
	n  = len(arr)
	for i in range(n):
		swap = False
		for j in range(0, n-i-1):
			if arr[j] > arr[j+1]:
				arr[j], arr[j+1] = arr[j+1], arr[j]
				swap = True
		if swap == False:
			break
	return arr
n = int(input())
arr = []
for i in range(n):
	num = int(input())
	arr.append(num)
arr  = bubblesort(arr)
for num in arr:
	print(num)