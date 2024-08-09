
Triode Number:
--------------
Find out all possble 3-digit Triode Numbers.
Let x be a Triode Number, then x, 2*x and 3*x will have all distinct digits.

As example:
	if x = 219, then 2*x = 438 and 3*x = 657, all these three numbers having all distinct digits
	So x = 219 is a Triode Number.
	
	if x = 192, then 2*x = 384 and 3*x = 576, all these three numbers having all distinct digits
	So x = 192 is a Triode Number.
	
for num = 102 to 987
	intialize a[10] with all 0's
	for times = 1 to 3
		x = times * num
		while (x != 0)
			digit = x % 10
			if (digit in a[10]) then ussuccessful and break
			digit = int(digit / 10)
		end while
		if (unsuccessful) then break
	end for
	if successful then print num
end for

