ldapsearch -Q -t sn="*bon*"| grep sn: | cut -c5- | wc -l | cut -c7-
