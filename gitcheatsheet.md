#Git Cheat Sheet: Chapter 2

##Setting Up A Git Repository:
Git repositories can be set up locally or remotely using websites such as GitHub and linking them.
**git** Used before every other git related command. Acts as a suffix.
**git init** Initialized a git repository in a directory. Creates a ".git" subdirectory.
**git add [file]** Adds a file to let git know you want to control it.
**git commit** Confirms changes to files and uploads them as a new version.
	_-m "text"_ Adds a comment to the commit.
**git clone [url]** Copies an existing repository ready for editing instead of starting from scratch.
**git config --global** Sets git configuration values on a global or local scale.

##Saving Changes:
Each repository has many "branches" which can be interpreted as folders within the repository.
The current branch is always called "master" branch.
Origin refers to the original repository where everything started being worked on.
**git status** Shows which files were modified, removed or added to the current commit.
	_--short & -s_ Show simpler and thus shorter stats.
**echo "Project Name"** Echo acts as a show text in screen but ">> file name" moves the text inside the file.
**README.md** Acts as a sort of user created log and usage guide for anyone working with the repository in the future.
**file.gitignore** Allows you to ignore files so they are not added automatically or even shown.
**git rm [file]** Deletes files.
**git mv [file]** Moves a file from a directory to another.
**git help [command]** Shows important help information for a specific command.
**git reset <HEAD> file** Resets the HEAD.
**git checkout** Switches working branches or discards changes in working repository.
**git diff** Shows the differences between versions of the current branch and repository.
	_--cached & --staged_ Shows what has been prepared until now.

##Confirmation History:
**git log** Shows a log of everything that has been done and each version.
	_-p_ Shows the differences in each confirmation.
	_-2_ Only shows the last two.
	_--stat_ Shows stats from each confirmation.
	_--pretty_ Gives it a style from the list that can be accessed using "--pretty=format"
	_--after & --before_ Limits the timeframe of the confirmations showned.
	_--author_ Shows only the ones from that author.

##Undo Stuff:
**git commit** Confirms changes to files and uploads them as a new version.
	_--amend_ Does the confirmation again if you forgot to add a file.
**git add * ** Adds every file.
**git reset HEAD <file>** Undoes the preparation.
**git checkout -- [file]** Any changes you made to the file dissapear.

##Working With Remotes:
**git remote** Shows the already configured remote repositories already configured.
	_origin_ Default name git gives to the server of the cloned repository.
	_-v_ Shows the urls that git has associated with the name.
**git remote add [name] [url]** Adds a new remote and gives it a name.
**git fetch [remote-name]** Brings all of the work from that remote name.
**git push [remote-name] [branch-name]** Sends the rmeote to a server so it can be shared.
**git remote show [remote-name]** Inspects a remote.
**git remote rename [current-remote-name] [new-remote-name]** Renames a remote.
**git remote rm [remote-name] Deletes a remote.

##Git Tag Fundamentals:
Tags are like pointers to a specific commit.
**git tag [tag]** Shows available tags. Creates and names a tag.
	_-a_ Creates an annotated tag.
	_-m_ Especifies a message.
**git show** Information related to the commit with that tag.
**git push [location] [tag]** Shares tags.
	_--tags_ Allows for sending multiple tags.
**git checkout [tag]** Gets a tag out.

##Aliases:
**git config [global/local] alias.abvreviation [command]** Creates an alias to a command or action.
Aliales create shorcuts to frequently accessed git commands.
They are used to optimize the speed and efficiency of a project.
