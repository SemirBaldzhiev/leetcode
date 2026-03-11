# Read from the file file.txt and output the tenth line to stdout.
#!/usr/bin/env bash
lc=`wc -l < file.txt`
 
if [ $lc -ge 10 ]; then
    head -10 file.txt | tail -1  
fi