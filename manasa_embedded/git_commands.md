# Git Commands
## git config
``` 
* git config –global user.name “[name]”
* git config –global user.email “[email address]”
```
This command sets the author name and email address respectively to be used with your commits.
## git init
```
* git init [repository name]
* This command is used to start a new repository.
```
## git clone
``` 
git clone [url]
```
This command is used to obtain a repository from an existing URL.
## git add
``` 
git add [file]
```
This command adds a file to the staging area.
``` 
git add *
```
This command adds one or more to the staging area.
## git commit
```
git commit -m “[ Type in the commit message]”
```
This command records or snapshots the file permanently in the version history.

```
git commit -a
```
This command commits any files you’ve added with the git add command and also commits any files you’ve changed since then.
## git diff
```
git diff
```
This command shows the file differences which are not yet staged.
```
git diff –staged
```
This command shows the differences between the files in the staging area and the latest version present.
``` 
git diff [first branch] [second branch]
```
This command shows the differences between the two branches mentioned.
## git status 
```
git status
```
This command lists all the files that have to be committed.
## git rm 
```
git rm [file]
```
This command deletes the file from your working directory and stages the deletion.
## git log
```
git log
```
This command is used to list the version history for the current branch.
```
git log –follow[file]
```
This command lists version history for a file, including the renaming of files also.

## git show
```
git show [commit]
```
This command shows the metadata and content changes of the specified commit.

## git tag
```
git tag [commitID]
```
This command is used to give tags to the specified commit.

## git branch
```
git branch
```
This command lists all the local branches in the current repository.
```
git branch [branch name]
```
This command creates a new branch.
```
git branch -d [branch name]
```
This command deletes the feature branch.

## git checkout
```
git checkout [branch name]
```
This command is used to switch from one branch to another.
```
git checkout -b [branch name]
```
This command creates a new branch and also switches to it.

## git merge
```
git merge [branch name]
```
This command merges the specified branch’s history into the current branch.

## git remote
```
git remote add [variable name] [Remote Server Link]
```
This command is used to connect your local repository to the remote server.

## git push
```
git push [variable name] master
```
This command sends the committed changes of master branch to your remote repository.
```
git push [variable name] [branch]
```
This command sends the branch commits to your remote repository.
```
git push –all [variable name]
```
This command pushes all branches to your remote repository.
```
git push [variable name] :[branch name]
```
This command deletes a branch on your remote repository.

## git pull
```
git pull [Repository Link]
```
This command fetches and merges changes on the remote server to your working directory.

## git stash
```
git stash save
```
This command temporarily stores all the modified tracked files.
```
git stash pop
```
This command restores the most recently stashed files.
```
git stash list
```
This command lists all stashed changesets.
```
 git stash drop
```
This command discards the most recently stashed changeset
```
git stash apply
```
And when you want to re-apply the changes you “stash”ed ,use the command above.

## git revert
```
git rebasing master
```
* This is also a way of combining the work between different branches. Rebasing takes a set of commits, copies them and stores them outside your repository.
* the commit log or history of the repository stays clean if rebasing is done.

## git revert
```
* git log --oneline (to get id of last coomit)
* git revert id of last commit
* git revert HEAD    (to make it normal)
```
*  'undo' type command
* it helps u to roll back to the previous version of the file

## ssh key generation:

->open Git Bash that you just installed (Start->All Programs->Git->Git Bash)

->Type in the following: ssh-keygen -t rsa (when prompted, enter password, key name can stay the same)

->Open file your_home_directory/.ssh/id_rsa.pub with your favorite text editor, and copy contents to your Git repository’s keys field (GitHub, beanstalk, or any other repository provider), under your account.

->Be sure that you don’t copy any whitespace while copying public key’s content (id_rsa.pub)