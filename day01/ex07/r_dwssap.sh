cat /etc/passwd | grep -v "^#" | cut -f 1 -d : | sed -n 'n;p' | rev | sort -r | sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' ', ' | sed "s/,/, /g" | rev | sed "s/,/./" | rev | sed 's/\n//g'
