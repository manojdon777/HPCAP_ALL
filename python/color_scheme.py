import json 


# reading the json file from disk 
with open("colour_scheme.json", "r") as f:
    info = json.load(f)

# converting the key to integer values 
info_duplicate = {}
for key,value in info.items():
    info_duplicate[int(key)] = value

# take input colour_code from the user and print the colour if it is present
# else write the new colour code with its colour to the file
color_code = int(input('Enter color code: '))
if color_code in info_duplicate:
    print(f'Color code is present -> {color_code} : {info_duplicate[color_code]}')
else:
    info_duplicate[color_code] = input('Enter new color: ')
    # writing the modified dictionary back to the disk 
    try:
        with open("colour_scheme.json", "w") as f:
            json.dump(info_duplicate , f)
    except Exception:
        print('Error while writing')
print(info_duplicate)