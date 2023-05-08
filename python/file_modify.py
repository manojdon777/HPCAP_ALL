try:
    f_read = open('aa.txt', 'r')
    f_write = open('bb.txt', 'w')
    for line in f_read:
        f_write.write('HPCAP - ' + line)
    f_read.close()
    f_write.close()
except Exception:
    print('File not found')
    