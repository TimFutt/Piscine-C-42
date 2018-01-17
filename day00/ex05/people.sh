ldapsearch -xLLL cn | grep -i '^cn: z' | sort -r -f | sed 's/cn: //'
