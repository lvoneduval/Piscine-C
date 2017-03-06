cat $1 | grep -i "Nicolas Bomber"|  awk -F'\t' '{print $(NF-1)}'
