lut = {"M": 1000, "D": 500, "C":100, "L":50, "X":10, "V":5, "I":1 }
romanString = "MMMCMLXXVII"

sign = 1
result = 0
preCh = romanString[0]
romanString += romanString[-1]
for ch in romanString:
	chValue = lut[ch]
	preChValue = lut[preCh]
	
	if chValue <= lut[preCh]:
		sign = 1
	else:
		sign = -1

	result += sign*preChValue
	preCh = ch

result -= lut[romanString[0]]

print("result: {}".format(result))

class Solution(object):
    def romanToInt(self, s):
		lut = {"M": 1000, "D": 500, "C":100, "L":50, "X":10, "V":5, "I":1 }

		sign = 1
		result = 0
		preCh = s[0]
		for ch in s:
			chValue = lut[ch]
			preChValue = lut[preCh]
			
			if chValue <= lut[preCh]:
				sign = 1
			else:
				sign = -1

			result += sign*preChValue
			preCh = ch

		result -= lut[s[0]]
		return result

c = Solution.romanToInt("MMMCMLXXVII")
print("result: {}".format(c))