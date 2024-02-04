def decryptMessage(encryptedMessage, keyPhrase):
    encrypted_words = encryptedMessage.split()
    key_words = keyPhrase.split()

    decrypted_words = []

    for i in range(len(encrypted_words)):
        encrypted_word = encrypted_words[i]
        key_word = key_words[-i - 1] 

        if len(key_word) % 2 == 0:  
            decryption_key = len(key_word)
            decrypted_word = ''
            for char in encrypted_word:
                decrypted_char = chr(((ord(char) - ord('a') - decryption_key) % 26) + ord('a'))
                decrypted_word += decrypted_char
            decrypted_words.append(decrypted_word)
        else:  
            decryption_key = len(key_word)
            decrypted_word = ''
            for char in encrypted_word:
                decrypted_char = chr(((ord(char) - ord('a') + decryption_key) % 26) + ord('a'))
                decrypted_word += decrypted_char
            decrypted_words.append(decrypted_word)

    return ' '.join(decrypted_words[::-1])  



encrypted_input = input()
key_input = input()

decrypted_output = decryptMessage(encrypted_input, key_input)
print(decrypted_output)