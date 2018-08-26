
## **tasks.json** file for c++ Program

```
{
   
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "g++ -g $file.cpp -o $output_Name",
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher":"$gcc"
        }
    ]
}
```
---------------------

## **launch.json** file for c++ Program

``` 
{   "version": "0.2.0",
    "configurations": 
    [
        {
            "name": "(lldb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${workspaceFolder}/$output_Name",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true,
            "MIMode": "lldb"
        }
    ]
}
```
--------------------
