from fileinput import close


words = set()

def check(word):
    if words in word:
        return True
    else:
        return False

def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words - line.rstrip()
        words.add(words)
    close(file)
    return True

def size():
    return len(words)

def unload():
    return True