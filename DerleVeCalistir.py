# Kullanımı. C ve Cpp için argümanları aşağıdaki yorum satırlarında belirttim.
# Derlenecek ve çalıstırılacak dosya ile aynı konumda bulundurunuz. Aşağıdaki size uygun olan kod parçasını kullanınız.

# python3 DerleVeCalistir.py --C_file dosya_adi.c
# python3 DerleVeCalistir.py --Cpp_file dosya_adi.cpp

import os
import argparse

ap = argparse.ArgumentParser()

ap.add_argument("-s", "--C_file", required=False,help="Enter the C programming language file location")

ap.add_argument("-a", "--Cpp_file", required=False,help="Enter the C++ programming language file location")

args = vars(ap.parse_args())

c = args['C_file']
cpp = args['Cpp_file']

if c!=None:

	os.system("rm ./a.out")
	os.system("g++ {}".format(c))
	os.system("./a.out")

elif cpp!=None:

	os.system("rm ./a.out")
	os.system("gcc {}".format(cpp))
	os.system("./a.out")