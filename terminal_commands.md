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
### Removing a folder

You can use the command `rmdir` or `rm -rf` in order to delete the directory. Using `rm -rf` is always recommended. 

```
rm -rf PATH/FOLDER_NAME
rmdir PATH/FOLDER_NAME
rm --recursive --force PATH/FOLDER_NAME
```

### Copying a file
You can copy using the command `cp`.

For copying a file, do:
```
cp SOURCE/FILE.ext DESTINATION/FOLDER
```
And for copying a folder, do:
```
cp -r SOURCE/FOLDER.ext DESTINATION/FOLDER
```

You can do advanced copypasting using the `regex language`. For example,
```
cp -r ./implementation/[a-m]*.cpp ./teaching/ds_algo
```
This command copies all files with name starting letter using anything between `a to m`, then having any character between, and ending with the term `.cpp`, and pastes them into the folder `./teaching/ds_algo`.

### Moving a file

You can copy using the command `mv`.

For copying a file, do:
```
mv SOURCE/FOLDER/FILE.ext/ DESTINATION/FOLDER
```

You can do advanced moving using the `regex language`. For example,
```
mv ./implementation/[a-m]*.cpp ./teaching/ds_algo
```
This command moves all files with name starting letter using anything between `a to m`, then having any character between, and ending with the term `.cpp`, and pastes them into the folder `./teaching/ds_algo`.

### Printing the file contents
You can use the command `cat` in order to print the file contents.
```
cat ~/programming/c_cpp/teaching/terminal_commands.md
```

### Editing in the terminal
You can use the command `nano` in order to edit in the terminal.
```
nano terminal_commands.md
```
**Use**
* **ctrl+s** to save
* **ctrl+x** to exit

If you don't find nano installed on your device, do
```
brew install nano
```

### Clearing the terminal
You can clear the terminal simply using the word "clear"
```bash
clear
```
