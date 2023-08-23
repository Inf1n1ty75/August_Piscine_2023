cat /etc/passwd | tr ':' ' '| grep ' ' | awk '{print $1}'| sed -n '1~2p' | sort -dr | tr '\n' ', '
