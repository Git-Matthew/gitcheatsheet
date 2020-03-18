# Git Cheat Sheet: Chapter 2

## Setting Up A Git Repository:

Git repositories can be set up locally or remotely using websites such as GitHub and linking them.

**git** Used before every other git related command. Acts as a suffix.

**git init** Initialized a git repository in a directory. Creates a ".git" subdirectory.

**git add [file]** Adds a file to let git know you want to control it.

**git commit** Confirms changes to files and uploads them as a new version.

	-m "text" Adds a comment to the commit.

**git clone [url]** Copies an existing repository ready for editing instead of starting from scratch.

**git config --global** Sets git configuration values on a global or local scale.

## Saving Changes:

Each repository has many "branches" which can be interpreted as folders within the repository.

The current branch is always called "master" branch.

Origin refers to the original repository where everything started being worked on.

**git status** Shows which files were modified, removed or added to the current commit.

	--short & -s Show simpler and thus shorter stats.

**echo "Project Name"** Echo acts as a show text in screen but ">> file name" moves the text inside the file.

**README.md** Acts as a sort of user created log and usage guide for anyone working with the repository in the future.

**file.gitignore** Allows you to ignore files so they are not added automatically or even shown.

**git rm [file]** Deletes files.

**git mv [file]** Moves a file from a directory to another.

**git help [command]** Shows important help information for a specific command.

**git reset <HEAD> file** Resets the HEAD.

**git checkout** Switches working branches or discards changes in working repository.

**git diff** Shows the differences between versions of the current branch and repository.

	--cached & --staged Shows what has been prepared until now.

## Confirmation History:

**git log** Shows a log of everything that has been done and each version.

	-p Shows the differences in each confirmation.

	-2 Only shows the last two.

	--stat Shows stats from each confirmation.

	--pretty Gives it a style from the list that can be accessed using "--pretty=format"

	--after & --before Limits the timeframe of the confirmations showned.

	--author Shows only the ones from that author.

## Undo Stuff:

**git commit** Confirms changes to files and uploads them as a new version.

	--amend Does the confirmation again if you forgot to add a file.

**git add** Adds every file.

**git reset HEAD <file>** Undoes the preparation.

**git checkout -- [file]** Any changes you made to the file dissapear.

## Working With Remotes:

**git remote** Shows the already configured remote repositories already configured.

	origin Default name git gives to the server of the cloned repository.

	-v Shows the urls that git has associated with the name.

**git remote add [name] [url]** Adds a new remote and gives it a name.

**git fetch [remote-name]** Brings all of the work from that remote name.

**git push [remote-name] [branch-name]** Sends the rmeote to a server so it can be shared.

**git remote show [remote-name]** Inspects a remote.

**git remote rename [current-remote-name] [new-remote-name]** Renames a remote.

**git remote rm [remote-name]** Deletes a remote.

## Git Tag Fundamentals:

Tags are like pointers to a specific commit.

**git tag [tag]** Shows available tags. Creates and names a tag.

	-a Creates an annotated tag.

	-m Especifies a message.

**git show** Information related to the commit with that tag.

**git push [location] [tag]** Shares tags.

	--tags Allows for sending multiple tags.

**git checkout [tag]** Gets a tag out.

## Aliases:

**git config [global/local] alias.abvreviation [command]** Creates an alias to a command or action.

Aliales create shorcuts to frequently accessed git commands.

They are used to optimize the speed and efficiency of a project.

# Git Cheat Sheet: Chapter 3

## Branches In A Nutshell:

Branching means you move from the main line and continue working without messing with that main line.

Git stores data as "snapshots".

The default branch name in Git is master.

As you start making commits, you’re given a master branch that points to the last commit you made. Every time you commit, the master branch pointer moves forward automatically.

**git branch [name]** Creates a new pointer to the same commit you’re currently on.

Git keeps a special pointer called HEAD that allows it to know in which branch you are.

**git log --decorate** Shows where the branch pointers are pointing.

	Reminder that git log doesn’t show all the branches all the time.

**git checkout [branch-to-switch-to]** Switches to an existing branch.

**git log --oneline --decorate --graph --all** Prints out the history of commits, showing where branch pointers are and how their history has diverged.

**git checkout -b [new-branch-name]** Creaters a new branch and switches to it at the same time.

## Basic Branching and Merging:

To merge branches you have to do is check out the branch you wish to merge into and then run the git merge command.

**git merge [branch]** Merges the branch with the one you checked out.

Note: If you changed the same part of the same file differently in the two branches you’re merging, Git won’t be able to merge them cleanly.

**git status** Shows which files are unmerged at any point after a merge conflict.

**git mergetool** Boots up a graphical tool to resolve issues with merging.

**git commit** To finalize the merge commit.

## Branch Management:

**git branch** If its run with no arguments, you get a simple listing of your current branches.

	-v Shows the last commit on each branch.

	--merged & --no-merged options can filter this list to branches that you have or have not yet merged into the branch you’re currently on.

	-d Used for deleting branches without the * suffix.

## Branching Workflows:

Git uses a simple three-way merge.

You can have several branches that are always open and that you use for different stages of your development cycle; you can merge regularly from some of them into others.

A topic branch is a short-lived branch that you create and use for a single particular feature or related work.

When you’re branching and merging, everything is being done only in your Git repository

## Remote Branches:

Remote references are references (pointers) in your remote repositories, including branches, tags, and so on.

**git ls-remote <remote>** Full list of remote references explicitly.

**git remote show <remote>** Remote branches as well as more information.

Remote-tracking branch names take the form <remote>/<branch>

**git fetch <remote>** To synchronize your work with a given remote.

	Fetch updates your remote-tracking branches.

**git remote add** Add a new remote reference to the project you’re currently working on.

**git push <remote> <branch>** Pushes up the remote branch.

**git config --global credential.helper cache** Set up a “credential cache" to avoid typing passwords everytime a push is made.

**git checkout --track** Tracks branches.

	When you are tracking a branch you can reference its upstream branch using: @{upstream}

**git pull** Is essentially a git fetch immediately followed by a git merge in most cases.

	--delete Is used to delete remote branches.

	Basically all this does is remove the pointer from the server.

## Rebasing Branches:

**git rebase** Takes all the changes that were committed on one branch and replay them on a different branch.

You can also have your rebase replay on something other than the rebase target branch.

	--onto Takes the changes on client that aren’t on server and replay them on your master branch.

**git rebase <basebranch> <topicbranch>** Rebases the server branch onto the master branch without having to check it out first.

Note: Do not rebase commits that exist outside your repository and that people may have based work on.

**git push --force** Overwrite the history on the server.

If you are using git pull and want to make --rebase the default, you can set the pull.rebase config value with something like git config --global pull.rebase true.

In general it's best rebase local changes you’ve made but haven’t shared yet before you push them in order to clean up your story, but never rebase anything you’ve pushed somewhere.
