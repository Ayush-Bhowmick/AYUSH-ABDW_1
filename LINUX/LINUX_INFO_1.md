# LINUX INFO 1

## LINKS 
- https://unix.stackexchange.com/questions/222492/what-is-the-alternative-for-ls-command-in-linux // `ALTERNATIVE TO LS COMMAND`
- https://coggle.it/diagram/V7CgV417F98GDm52/t/system-network-administration-linux-linux-boot-process


# XORG SERVER - GRAPHICS SERVER
- Implemetation of X window system
------

# PULSE AUDIO

## LINUX COMMANDS 

- `mkfs.$format $disk` //to format a disk or partition eg. `mkfs.ext4 /dev/sda1`
- `wget $link` // to download from a link

- EXTRACTING TAR FILES
    - `tar xvzf file.tar.gz`- to uncompress a gzip tar file (.tgz or .tar.gz)
    - `tar xvjf file.tar.bz2` - to uncompress a bzip2 tar file (.tbz or .tar.bz2) to extract the contents.
    - `tar xvf file.tar - to `uncompressed tar file (.tar)
    - `tar xvC /var/tmp -f file.tar` - to uncompress tar file (.tar) to another directory
    x = eXtract, this indicated an extraction c = create to create )
    v = verbose (optional) the files with relative locations will be displayed.
    z = gzip-ped; j = bzip2-zipped
    f = from/to file ... (what is next after the f is the archive file)
    C = directory. In c and r mode, this changes the directory before adding the following files. In x mode, changes directoriy after opening the archive but before extracting entries from the archive.

- `sudo dpkg $pkg -i` // to unpackage .deb packages.

- date or cal // to view date or calendar

- `df` // Free Disk Space | `df -h` // human readable format
- `free` // Free Memory | `free --giga` // for display in GB

- `cd ./Documents` or `cd ~/Documents` instead of `/home/ayush-vk/Documents`

- `ls $location_1 $location_2` //lists all the documents in the 2 directories

- `file $file` // to determine file type

- `mkdir` $dirName // to make dir | `rmdir` | `rm $file`
- `mv $file $location` | `cp $file $location`
-  `mv [up]* $location` // Any file name starting with up will copied to location

- `ln  source_file myfile` // to create a hard link or label of a file
- `ln -s source_file myfile` // to create `symbolic link` or alias or shortcut

- `history | less` // to view history by page | `!!` // to redial last cmd

- `type $command` // displays if command is an alias,shell function, shell builtin, disk file, or shell reserved word
- `which $command` //where or if the cmd is installed 
- `apropos $command` //man entry for command
- man // manual | `whatis $command` // short desc of cmd

- cd /usr; ls; cd .. // multiple commands in 1 line. eg. alias foo='cd /usr; ls; cd ..'
- `unalias $command`

- bashrc
    - `nano .bashrc`
    - bash customizations and to save aliases.

- `$command > $outputifle` // to save to file
- `$command >> $outputifle` //to save at the end of file without overwriting

- cat // Concatenate 
- `cat > textfile.txt` // whatever typed will be stored in file
- `cat < $file` // same as cat$file

- 


## REDIRECTING STANDARD TERMINAL ERRORS IN LINUX

- `ls -l /bin/usr 2> ls-error.txt`
- `ls -l /bin/usr 2> ls-error.txt; cat ls-error.txt`
- `ls -l /bin/usr > ls-error.txt 2>&1` // `2>&1` redirects the standard error stream to the standard output stream (stderr = 2, stdout = 1).
- `ls -l /bin/usr &> ls-error.txt`
- `ls -l /bin/usr 2> /dev/null` // >/dev/null redirects the command standard output to the null device, which is a special device which discards the information written to it
