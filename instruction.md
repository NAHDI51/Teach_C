# Instructions

## for initializing a repository
1. Make a README.md file, using double click on folder -> new file
2. Run the command
```Bash
git init
```
3. Run the command 
```Bash
git add README.md
```
4. Commit the changes
```bash
git commit -m "Added README.md" 
```
5. Create a repository on github.com
6. Link the remote repository with your local repository
```bash
git remove add origin https://github.com/YOUR_LINK
```
7. Push the changes

**For first time push, do**
```Bash
git push --set-upstream origin main
```
**For any other times, do**
```Bash
git push
```

## For pushing any changes
For almost all general times

0. Check if there is any files changed
```bash
git status
```
1. Add the file
```bash
git add hello.c
```
2. Commit with some comments
```bash
git commit -m "Added my first helloworld code"
```
3. Push the changes
```bash
git push 
```

