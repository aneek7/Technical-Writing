# 🎤 Class Demonstration Guide

> **Show the work. Explain the purpose. Demonstrate the command.**

## 1. Introduce the Repository

“This repository organises my Technical Writing coursework into six topics:
LaTeX, Beamer, Doxygen, Google Docs, Git, and GitHub.”

Open the [main page](README.md) and explain the module table.

## 2. Show Practical Outputs

| Open | Explain |
| :--- | :--- |
| [LaTeX source](LaTeX/examples/sample-document.tex) and [PDF](LaTeX/output/sample-document.pdf) | Source commands produce a formatted document; labels support automatic references. |
| [Beamer source](Beamer/examples/presentation.tex) and [PDF](Beamer/output/presentation.pdf) | The Beamer class creates slides; frames organise content and columns arrange it. |
| [Doxygen notes](Doxygen/README.md) | Special comments describe code; a Doxyfile controls documentation generation. |
| [Google Docs notes](Google-Docs/README.md) | Headings structure content; comments and suggestions support review. |

Only describe practical activities as completed if you have performed them.

## 3. Explain Git Before Running It

| Command | Explain before executing |
| :--- | :--- |
| `git status` | Inspects the working directory and staging area. |
| `git diff` | Shows tracked changes not yet staged. |
| `git add README.md` | Stages the current contents of README.md. |
| `git diff --staged` | Shows what is staged relative to the current commit. |
| `git commit -m "Describe the change"` | Records the staged snapshot locally. |
| `git log --oneline` | Displays compact commit history. |
| `git branch` | Lists local branches; the asterisk marks the current one. |
| `git switch BRANCH` | Switches to an existing branch. |
| `git merge BRANCH` | Integrates that branch into the current branch. |
| `git remote -v` | Lists configured remote URLs. |

These are prompts, not a script to paste in sequence. Practise in a separate
repository with suitable files and branches. Review the [full Git notes](Git/README.md)
for the remaining commands from class, including restoration, revert, tags,
stash, rebase, and remote operations.

## 4. Key Distinctions

- **Save vs commit:** saving edits a working file; committing records staged content in Git history.
- **Commit vs push:** a commit is local; push transfers commits to a remote.
- **Git vs GitHub:** Git manages history; GitHub hosts repositories and supports collaboration.
- **Branch vs switch:** creating a branch does not automatically switch to it.
- **Fetch vs pull:** fetch downloads updates; pull also integrates them.

## 5. Before Class

- Open the repository and both PDFs once.
- Keep the local practice folder available.
- Run `git status` before starting; finish or intentionally pause unfinished exercises.
- Practise explaining each command without reading a copied script.
- Check the teacher's slides for the complete required command list.

[⬅️ Back to the portfolio](README.md)
