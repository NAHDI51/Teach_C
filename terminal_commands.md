# Some useful and important terminal commands

### Creating a file
You can create a file with filename and extension using the command **touch**.

```
touch filename.ext
```
You can specify multiple filenames and they will be created individually.

```
touch one.c two.c three.c
```

### Deleting a file
You can delete file (or multiple files) using the command `rm filename.ext`
```
rm filename.ext // delete one file
rm one.c two.c three.c // delete multiple files
```

### Tracking the current location we are in the terminal
You can do it using the command `pwd`
```bash
>pwd
/users/nahadi/programming/c_cpp/teaching
```
### Show the contents of the folder/location
You can do it using the word `ls`.
```bash
ls
README.md instruction.md
basics terminal_commands.md
```

Or you can get all information using 
```
ls -la
```
Actually, `ls` is used to get information of any directory. You can do it using:
```Bash
ls FOLDER_NAME
ls programming/c_cpp/teaching
```

### Changing the current location/directory
You can use the command `cd` in order to change the current directory.

#### Root folder
The root folder is the very top-level directory in your file system. It is simply represented by a single forward slash `/`.

To navigate directly to the root folder from anywhere, type:

```
cd /
```

#### Relative vs. Absolute Paths
When telling cd where to go, you can use two types of paths:

**Absolute Path:** Directions starting from the root folder `/`. No matter where you currently are, an absolute path always takes you to the exact same destination.

Example: 
```
cd /var/www/html
```

**Relative Path:** Directions starting from your current folder.

Example: If you are already in `/var`, typing `cd www` will take you to `/var/www`.
```
cd programming/c_cpp/teaching
```

#### Special characters
If a folder name has spaces, brackets, or some other **special characters**, wrap the path in quotes so the terminal doesn't get confused:
```
cd "My Documents"
cd "C(Coding)"
```

#### Some special directories
These are the symbols that are used for some special directories discussed previously.

| Shortcut | Description | Example Command |
| :--- | :--- | :--- |
| `.` | The current directory (mostly used to reference files right where you are). | `cd .` (keeps you in place) |
| `..` | The parent directory (moves you up one level). | `cd ..` |
| `~` | Your Home directory (your user's personal space). | `cd ~` |
| `-` | The previous directory you were just in (like a "back" button). | `cd -` |

**Tldraw board link: https://www.tldraw.com/f/lwZ1q0657nGbkNaGeo77T?d=v185.-349.1941.1325.page**.

### Making a folder

You can use the `mkdir` command
```
mkdir PATH/FOLDER_NAME
```


### Copying a file
### Moving a file

### Clearing the terminal
You can clear the terminal simply using the word "clear"
```bash
clear
```
