
# MAC_AUTOMATOR


## Script example 1
    
```
tell application "Terminal"  
    activate  
end tell  
  
delay 3 -- seconds  
  
tell application "System Events"  
    keystroke "ssh mac@192.168.0.10"  
    keystroke return  
    delay 3  
    keystroke "password"  
    -- if you went to press return after typing the password  
    keystroke return  
    delay 3  
    keystroke "h" using command down  
end tell  
```

## Script 2
```
(*   
  
https://discussions.apple.com/thread/3033221?tstart=30  
  
Required:  
  
  
Turn on accessability GUI in system preferences.  
  
Optional:  
--------  
Full Key Codes  
http://www.versiontracker.com/dyn/moreinfo/macosx/21215  
  
  
youpi or iKey  
   youpi and iKey are keystroke remapping programs.  
   youpi, the free version, works fairly well for me in Mac OS 10.4 although not officially supported.   
http://www.versiontracker.com/dyn/moreinfo/macosx/11485&vid=75326  
   iKey is the paid version  
http://www.scriptsoftware.com/ikey/  
  
*)  
  
on run  
    -- Write a message into the event log.  
    -- To see, run this applescript in Sript Editor. Click on Event Log tab at bottom of screen.  
    -- Click run.  
    log "  --- Starting on " & ((current date) as string) & " --- "  
  
    set fromApp to "Safari"  
    set toApp to "TextEdit"  
  
    --- We have arrived.  
  
  
    say "we are beginning now."  
  
    -- Start your application  
    tell application fromApp  
        activate  
    end tell  
  
    delay 1  
  
    say "copy data to clipboard"  
  
    tell application "System Events"  
        tell process fromApp  
  
  
            keystroke "c" using command down  
            delay 2  
  
        end tell  
    end tell  
  
  
    -- Start your application  
    tell application toApp  
        activate  
    end tell  
  
    delay 5  
    tell application "System Events"  
        tell process fromApp  
            --  open file menu  
            keystroke return  
            keystroke return  
            keystroke return  
  
            keystroke "v" using command down  
  
        end tell  
    end tell  
  
    say "good news, We are done."  
  
end run
```
## Script 3
```
tell application "Finder"
	if the (count of windows) is not 0 then
		set collapsed of every window to true
	end if
    
end tell
```

## LINKS
- https://discussions.apple.com/thread/5430076
- https://apple.stackexchange.com/questions/222718/passing-arguments-to-run-shell-script-in-automator
- https://stackoverflow.com/questions/2164410/alternatives-to-applescript
- http://veritrope.com/applescript-automator-resources/
- https://computers.tutsplus.com/tutorials/the-ultimate-beginners-guide-to-applescript--mac-3436
- http://www.macscripter.net
- https://dougscripts.com/itunes/index.php
- https://www.amazon.com/gp/product/0321149319/ref=as_li_ss_tl?ie=UTF8&tag=macinstruct-20&linkCode=as2&camp=1789&creative=390957&creativeASIN=0321149319