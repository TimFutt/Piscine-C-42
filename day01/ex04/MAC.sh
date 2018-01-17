ifconfig | grep "ether" | tr -d '\t' | sed 's/ether //' | sed 's/ //g'
