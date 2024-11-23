class Solution:
    def canBeTypedWords(self, text, brokenLetters):
        # Split the text into words
        words = text.split()
        # Convert brokenLetters to a set
        broken_set = set(brokenLetters)
        # Initialize a counter for typable words
        count = 0
        
        # Check each word
        for word in words:
            # If none of the characters in the word are broken, increment the count
            if all(char not in broken_set for char in word):
                count += 1
        
        return count
