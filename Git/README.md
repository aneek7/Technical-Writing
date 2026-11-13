# 🌿 Git — Version Control and Command Reference

### 💻 Practical Exercises

[Follow the step-by-step Git exercises](practical-exercises.md) — commands, expected results, screenshots to capture, and viva answers.

### 🧪 Executed Demonstration

[Open the command transcript and rendered preview](evidence/README.md).

The linked reference example was executed in an isolated Linux environment. Repeat it in Git Bash to practise.

## Technical Writing Laboratory | MNIT Jaipur

> **Track changes. Understand history. Collaborate confidently.**

## 📌 Introduction

Git is a distributed version control system that records
changes to project files over time.

It supports local commits, history inspection, branches,
merging, and collaboration through remote repositories.

Git and GitHub are different:

| Git | GitHub |
| :--- | :--- |
| Version control software | Repository hosting and collaboration platform |
| Runs on a local computer | Provides online services |
| Records commits and manages branches | Hosts repositories and supports pull requests |
| Many operations work offline | Remote operations require connectivity |

## 🎯 Learning Objectives

- Initialise and inspect a repository.
- Stage changes and create commits.
- Compare file versions and examine history.
- Rename, remove, restore, and revert changes.
- Create, switch, rename, merge, and delete branches.
- Resolve merge conflicts.
- Work with remotes, tags, and stashes.
- Explain the commands demonstrated in class.

## 🏗️ The Three Main Areas

| Area | Meaning |
| :--- | :--- |
| Working directory | Files currently being edited |
| Staging area / index | Content selected for the next commit |
| Local repository | Recorded commits and project history |

Typical workflow:

**Edit → Stage → Commit → Push**

A commit records a project snapshot.
Pushing sends local commits to a remote repository.

## ⚙️ Installation and Configuration

Check that Git is installed:

```bash
git --version
```

Configure the identity used for commits.
Replace the example values with your own details:

```bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
git config --global --list
```

`--global` applies settings to the current user's Git configuration.

These settings identify the commit author.
They do not sign you in to GitHub.

## 📁 Creating a Repository

```bash
mkdir git-practice
cd git-practice
git init
```

| Command | Purpose |
| :--- | :--- |
| `mkdir git-practice` | Creates a directory |
| `cd git-practice` | Enters the directory |
| `git init` | Initialises a Git repository |

Git stores repository metadata in the `.git` directory.

`mkdir` and `cd` are shell commands, not Git commands.

## 🔍 Status, Staging, and Commits

```bash
git status
git add main.py
git commit -m "Add initial program"
```

### Staging Variations

```bash
git add main.py
git add file1.py file2.py
git add *.py
git add .
```

Only use filenames and patterns that match your project.

| Command | Purpose |
| :--- | :--- |
| `git status` | Shows working-directory and staging status |
| `git add main.py` | Stages the current contents of one file |
| `git add .` | Stages changes under the current directory |
| `git commit -m "message"` | Records staged content in a commit |

If a file changes after staging, run `git add` again
to include its latest contents.

## 🕒 Viewing History

```bash
git log
git log --oneline
git log --oneline --all --graph
```

| Command | Output |
| :--- | :--- |
| `git log` | Detailed commit history |
| `git log --oneline` | Abbreviated hashes and commit messages |
| `git log --oneline --all --graph` | Graph of history reachable from all references |

If Git opens a pager, press `q` to exit.

### HEAD

`HEAD` normally refers to the currently checked-out branch.
That branch points to its latest commit.

Checking out a particular commit directly can produce
a detached HEAD state.

## 🔎 Comparing Changes

```bash
git diff
git diff --staged
git diff HEAD
git ls-files
```

| Command | Meaning |
| :--- | :--- |
| `git diff` | Compares the working directory with the index |
| `git diff --staged` | Compares the index with HEAD |
| `git diff HEAD` | Compares the working directory with HEAD |
| `git ls-files` | Lists files in the index by default |

Ordinary `git diff` commands do not display the contents
of newly untracked files.

## 🙈 Ignoring Files

A `.gitignore` file specifies patterns for intentionally
untracked files that Git should ignore.

Example:

```gitignore
__pycache__/
*.pyc
.env
*.log
```

Adding an already tracked file to `.gitignore` does not
stop Git from tracking it or remove it from history.

## ✏️ Renaming and Removing Files

For a tracked file named `old.py`:

```bash
git mv old.py new.py
git commit -m "Rename old program"
```

To remove the tracked file:

```bash
git rm new.py
git commit -m "Remove unused program"
```

| Command | Effect |
| :--- | :--- |
| `git mv` | Moves or renames the file and stages the change |
| `git rm` | Removes the file from the working directory and index |

Practise removal commands on disposable example files.

## ↩️ Unstaging, Restoring, and Reverting

### Unstage a File

```bash
git restore --staged main.py
```

With an existing HEAD commit, this restores the file's index
entry from HEAD while preserving working-directory edits.

### Discard Unstaged Edits

```bash
git diff
git restore main.py
```

By default, `git restore main.py` restores the working file
from the index. It discards that file's unstaged edits.

### Reverse a Commit

```bash
git log --oneline
git revert COMMIT_ID
```

Replace `COMMIT_ID` with the intended commit hash.

`git revert` creates a new commit that reverses an earlier
commit's changes. It preserves existing history.

| Command | Main purpose |
| :--- | :--- |
| `git restore --staged file` | Unstage changes |
| `git restore file` | Discard unstaged changes |
| `git revert COMMIT_ID` | Reverse a commit through a new commit |

## 🌿 Branches

A branch is a movable reference to a commit.
It supports a separate line of development.

### List and Create

```bash
git branch
git branch fast
```

Creating a branch with `git branch fast`
does not switch to it.

### Rename

Rename `fast` to `parallel`:

```bash
git branch -m fast parallel
```

### Switch

```bash
git switch parallel
git switch main
```

Older branch-switching syntax:

```bash
git checkout parallel
git checkout main
```

Use your actual branch name.
If it is `master`, substitute `master` for `main`.

### Create and Switch Together

```bash
git switch -c feature-notes
```

### Delete a Merged Branch

```bash
git branch -d feature-notes
```

Switch away from the branch before deleting it.
The `-d` option checks whether the branch is sufficiently merged.

## 🔀 Merging

To merge `parallel` into `main`:

```bash
git switch main
git merge parallel
```

The currently checked-out branch receives the changes.

A merge may fast-forward the branch pointer or create
a merge commit, depending on the history.

## ⚠️ Merge Conflicts

A conflict occurs when Git cannot automatically reconcile changes,
such as competing edits to the same lines.

Example conflict markers:

```text
<<<<<<< HEAD
print("Main version")
=======
print("Parallel version")
>>>>>>> parallel
```

### Resolution Steps

1. Run `git status`.
2. Open each conflicted file.
3. Choose or combine the required content.
4. Remove the conflict markers.
5. Save the file.
6. Stage the resolution.
7. Complete the merge commit.

```bash
git add main.py
git commit -m "Resolve merge conflict"
git status
```

Use the actual conflicted filename.

## 📦 Stashing Work

A stash temporarily saves changes so work can be resumed later.

```bash
git stash
git stash list
git stash pop
git help stash
```

| Command | Purpose |
| :--- | :--- |
| `git stash` | Saves tracked-file changes and cleans them from the working state |
| `git stash list` | Lists saved stashes |
| `git stash pop` | Applies a stash and removes it if application succeeds |
| `git stash apply` | Applies a stash while keeping it |
| `git stash -u` | Also includes untracked files |
| `git help stash` | Opens help for stash |

Applying a stash can produce conflicts.
Untracked files are not included by default.

## 🌐 Remote Repositories

### Connect an Existing Local Repository

```bash
git remote add origin REPOSITORY_URL
git remote -v
```

Replace `REPOSITORY_URL` with the actual remote URL.

`origin` is a conventional remote name.

### Publish the Main Branch

```bash
git branch -M main
git push -u origin main
```

This workflow assumes a suitable remote, commonly an empty
remote repository for the initial push.

`-u` sets the upstream tracking relationship.

If a GitHub repository already contains commits, cloning it
is usually the simplest starting point.

### Clone an Existing Repository

```bash
git clone REPOSITORY_URL
```

Cloning creates a local copy with history and normally
configures `origin` automatically.

Do not run `git remote add origin` again if it already exists.

### Fetch, Pull, and Push

```bash
git fetch origin
git pull
git push
```

| Command | Purpose |
| :--- | :--- |
| `git fetch origin` | Downloads remote updates without integrating them into the current branch |
| `git pull` | Fetches and integrates updates according to options and configuration |
| `git push` | Sends local commits to the configured remote branch |

These short pull/push commands assume appropriate
upstream configuration.

Explicit examples:

```bash
git pull origin main
git push origin main
```

## 🏷️ Tags

Tags identify particular commits, often marking versions.

```bash
git tag
git tag -a v1.0.0 -m "Version 1.0.0"
git show v1.0.0
git push origin v1.0.0
```

| Command | Purpose |
| :--- | :--- |
| `git tag` | Lists tags |
| `git tag -a ...` | Creates an annotated tag |
| `git show v1.0.0` | Inspects the tag and referenced object |
| `git push origin v1.0.0` | Publishes the specified tag |

## 🔁 Merge and Rebase

Both integrate development, but handle history differently.

| Merge | Rebase |
| :--- | :--- |
| Combines histories | Replays commits onto a new base |
| Preserves existing commits | Typically creates replacement commits with new hashes |
| May create a merge commit | Can produce a linear history |

Example rebase:

```bash
git switch feature
git rebase main
```

This assumes an existing `feature` branch.

Practise rebase on a local practice branch.
Avoid rewriting shared history without coordination.

## 🧪 Basic Local Demonstration

The following commands are intended for Git Bash or a
compatible shell, in a new practice directory.

Configure your commit identity beforehand.

```bash
mkdir tw-git-demo
cd tw-git-demo
git init

echo "print(2 + 3)" > main.py

git status
git add main.py
git diff --staged
git commit -m "Add addition example"

git branch -M main
git log --oneline

git switch -c feature-subtraction
echo "print(10 - 4)" >> main.py

git diff
git add main.py
git commit -m "Add subtraction example"

git switch main
git merge feature-subtraction

git log --oneline --all --graph
git status
git branch -d feature-subtraction
```

### Expected Observations

- The new file initially appears as untracked.
- Staging selects its content for the first commit.
- The feature commit is initially on a separate branch.
- Merging brings the subtraction example into `main`.
- The final working tree is clean.

This example normally produces a fast-forward merge.
It does not deliberately create a merge conflict.

## 📸 Branching Assignment Checklist

The branching assignment requires screenshots and brief
explanations of observed outputs.

| Task | Evidence to capture |
| :--- | :--- |
| Inspect history and HEAD | Compact commit log |
| Create a branch | Branch list |
| Rename and switch branches | Branch list and status |
| Commit on both branches | Graph of all branch histories |
| Merge branches | Merge result |
| Produce and resolve a conflict | Conflict markers, resolution, and final status |
| Delete the merged branch | Updated branch list |
| Explore stash | Saved changes and their restoration |

Use screenshots from commands you actually run.

## 🛠️ Common Problems

| Problem | What to check |
| :--- | :--- |
| Nothing to commit | Whether files changed and whether changes are staged |
| Not a Git repository | Whether the terminal is inside the repository |
| Remote origin already exists | Inspect existing remotes with `git remote -v` |
| Push rejected | Fetch and inspect remote changes before integrating |
| Merge conflict | Resolve competing content, stage, and complete the merge |
| Authentication failed | Check your authentication method and repository access |
| Wrong branch | Run `git branch` or `git status` |

## 💡 Key Takeaways

- `add` stages; `commit` records locally; `push` publishes remotely.
- Inspect changes before committing.
- Write meaningful commit messages.
- Switch to the receiving branch before merging.
- Understand whether an operation affects files, staging, or history.
- Practise destructive changes on disposable files.
- Never commit passwords, tokens, or private keys.

## 📚 References

- Git and GitHub lecture slides, MNIT Jaipur.
- Git Branching laboratory assignment.
- Git documentation: https://git-scm.com/doc

---

[⬅️ Back to Main Repository](../README.md)
