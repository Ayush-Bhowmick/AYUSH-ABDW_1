
# MAC UNIX TERMINAL

# TERMINAL COMMANDS

- View hexadecimal of a file - 	`Xxd -b $file` 
- Turns off system integrity protection(DON’T DO IT - `csrutil disable`
- Disable/enable Gate Keeper - `sudo spctl --master-disable/enable`

- Screenshot format - `defaults write com.apple.screencapture type jpg`
- UPDATES - `defaults write com.apple.SoftwareUpdate Schedule Frequency -int 1` // 1 days or 7 days
- Prevent sleep - `caffeinate -i -t 3600`
- INSTALL PACKAGES
    - `Brew install <package>`
    - `Easy_install <package>`


-------------
## DISKUTIL 

- TO COMPLETELY ERASE A DISK - `diskutil eraseDisk JHFS+ $NEW_NAME $disk_name`
- TO FORMAT A DISK to fat 32 -  `diskutil eraseDisk "MS-DOS FAT 32" FAT $disk_name`

---------------

## TO MAKE APP UNOPENABLE 
- To kill Dashboard -- `defaults write com.apple.dashboard mcx-disabled -boolean TRUE; killall Dock`


-------------

## DOCK 
- Hide dock for sometime - `Killall Dock `
- REDUCE DELAY -- `defaults write com.apple.dock autohide-time-modifier -float 0.6; killall Dock`

- NO DELAY -- `defaults write com.apple.dock autohide-time-modifier -float 0; killall Dock`
---------------
## Make a folder undeletable
1. `chmod -R +a "everyone deny delete,file_inherit,directory_inherit" "$folder"`

    `sudo chflags -R schg "$folder"`
        
2. `Chmod -R +a "everyone deny delete,file_inherit,directory_inherit" "$folder" `

    `sudo chflags -R noschg "$folder"`
     
3. `chmod 554 $Folder `

## ENCRYPT
1. Encrypt (change path): `openssl enc -aes-256-cbc -e -in {path-in} -out {path-out}`
2. Decrypt (change path): `openssl enc -aes-256-cbc -d -in {path-in} -out {path-out}`

- TO ZIP WITH PASSWORD - `zip -e $Name  $source`

# RSYNC
- COMMANDS :
	- `rsync -a  [Source] [Destination]`
	- `rsync -a --progress  [Source] [Destination]`  --  to view progress
	- `rsync -a --exclude [directory] [Source] [Destination] ` -- to exclude certain directory
    - `rsync -a --modify-window=1 [Source] [Destination] ` -- Sync only updated files over time


- `rsync -aE --delete [Source] [Destination]` -- to Sync anything updated and deleted in Destination which are deleted in the source
	
--------------




# TO BE SEEN :
- Otx
- Class-dump
- Gdb debugger
- pandoc

---------------











    





      







