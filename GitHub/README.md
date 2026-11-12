# 🌐 GitHub — Repository Hosting and Collaboration

### Technical Writing Laboratory | MNIT Jaipur

> **Share your work. Review changes. Build together.**

## 📌 Introduction

GitHub is a platform for hosting Git repositories and
collaborating on projects.

It provides tools for browsing code, reviewing changes,
tracking tasks, and maintaining project documentation.

## 🎯 Learning Objectives

- Create and organise a repository.
- Write documentation using Markdown.
- Connect a local repository to GitHub.
- Understand cloning, pushing, fetching, and pulling.
- Collaborate through branches and pull requests.
- Distinguish forks from clones.
- Understand Issues, Projects, tags, and releases.

## ⚖️ Git vs GitHub

| Aspect | Git | GitHub |
| :--- | :--- | :--- |
| Type | Distributed version control system | Hosting and collaboration platform |
| Main role | Tracks changes and manages history | Hosts repositories and supports teamwork |
| Local work | Many operations work offline | Online features require connectivity |
| Examples | Commit, branch, merge | Pull requests, Issues, Projects |

A local Git repository can exist without GitHub.

## 📁 Repositories

A repository contains project files and their version history.

Typical contents include:
- Source code.
- A README.
- Documentation.
- Configuration files.
- Examples and relevant project assets.

### Visibility

| Visibility | Meaning |
| :--- | :--- |
| Public | Anyone can view the repository |
| Private | Access is limited to authorised users |

### Creating a Repository

1. Choose the option to create a new repository.
2. Enter a meaningful name and description.
3. Select the appropriate visibility.
4. Optionally initialise it with a README.
5. Create the repository.

For a project already committed locally, an empty remote
repository simplifies the first push.

For a repository created online with a README, cloning it
is a convenient way to begin local work.

## 📝 README and Markdown

A README introduces the project and explains how to use it.

Useful sections include:
- Project purpose.
- Contents and features.
- Setup and usage.
- Examples.
- References.

### Basic Markdown Syntax

| Syntax | Meaning |
| :--- | :--- |
| `# Title` | Main heading |
| `## Section` | Section heading |
| `**bold**` | Bold text |
| `*italic*` | Italic text |
| `- Item` | Bulleted list |
| `1. Step` | Numbered list |
| `[Label](URL)` | Link |
| `> Note` | Blockquote |

Use fenced code blocks to display commands or source code.

### Relative Links

From the repository's main README:

```markdown
[Git Notes](./Git/README.md)
```

From a module README one directory below the root:

```markdown
[Back to Main Repository](../README.md)
```

Relative links depend on the file's location.
Folder names and letter case should match the actual paths.

## 🗂️ Organisation of This Repository

| Path | Content |
| :--- | :--- |
| `README.md` | Repository introduction and navigation |
| `LaTeX/README.md` | LaTeX documentation |
| `Beamer/README.md` | Presentation documentation |
| `Doxygen/README.md` | Source-code documentation notes |
| `Google-Docs/README.md` | Collaborative writing notes |
| `Git/README.md` | Git concepts and commands |
| `GitHub/README.md` | Hosting and collaboration notes |

## 💻 Working Locally

### Clone an Existing Repository

```bash
git clone REPOSITORY_URL
cd REPOSITORY_FOLDER
```

Replace the placeholders with the actual URL and folder name.

Cloning downloads the repository and its history.
It normally configures a remote named `origin`.

### Inspect the Remote

```bash
git remote -v
```

### Commit and Push Changes

After editing files:

```bash
git status
git add .
git diff --staged
git commit -m "Improve project documentation"
git push
```

Review the staged changes before committing.

The short `git push` command assumes an appropriate
upstream branch is configured.

### Obtain Remote Updates

```bash
git fetch origin
git pull
```

Fetching downloads updates without integrating them into
the current branch.

Pulling fetches and integrates updates according to
the selected options and configuration.

These commands are a reference, not a requirement to
run fetch before every pull.

## 🔗 Connecting an Existing Local Project

For a local repository with commits and an empty remote:

```bash
git remote add origin REPOSITORY_URL
git branch -M main
git push -u origin main
```

`-u` sets the upstream relationship.

Do not add `origin` again if it is already configured.
Inspect it using `git remote -v`.

## 🌿 Branch-Based Collaboration

Branches let contributors develop changes separately.

Example:

```bash
git switch -c docs-improvement
```

Edit and review the relevant files, then run:

```bash
git add README.md
git commit -m "Improve README navigation"
git push -u origin docs-improvement
```

The published branch can then be used to open a pull request.

## 🔀 Pull Requests

A pull request proposes changes from one branch
for review and integration into another.

### Typical Workflow

1. Create a feature branch.
2. Make and commit changes.
3. Push the branch.
4. Open a pull request.
5. Select the base and compare branches.
6. Describe and review the changes.
7. Address feedback.
8. Merge when the changes are ready.

| Term | Meaning |
| :--- | :--- |
| Base branch | Branch that should receive the changes |
| Compare branch | Branch containing the proposed changes |
| Review | Examination and discussion of proposed changes |
| Merge | Integration of the proposed changes |

For a documentation update:
- Base: `main`
- Compare: `docs-improvement`

After the pull request is merged:

```bash
git switch main
git pull origin main
```

### Pull Request vs git pull

| Pull request | `git pull` |
| :--- | :--- |
| Proposes changes for review | Retrieves and integrates remote updates locally |
| A collaboration feature on GitHub | A Git command |
| Supports discussion before integration | Updates the current local branch |

## 🍴 Fork vs Clone

| Aspect | Fork | Clone |
| :--- | :--- | :--- |
| Result | Separate hosted repository linked to an original | Local repository copy |
| Location | GitHub | Local computer |
| Typical purpose | Contribute independently to another project | Work on a repository locally |
| How | GitHub's fork feature | `git clone` |

A common contribution workflow is:

1. Fork a repository.
2. Clone the fork.
3. Create a branch.
4. Commit and push changes to the fork.
5. Open a pull request to the original repository.

## 🐛 Issues

Issues help track:
- Bugs.
- Feature requests.
- Documentation improvements.
- Questions and tasks.

### Example Issue

**Title:** Add a Beamer presentation example

**Description:** Add a short presentation source file
and instructions for compiling it.

**Completion criteria:**
- The source file is included.
- Compilation instructions are documented.
- The output has been checked.

## 📋 Projects

GitHub Projects helps organise and track work.

An example workflow is:

| Status | Example task |
| :--- | :--- |
| Todo | Add example source files |
| In Progress | Prepare Git demonstration |
| In Review | Check documentation links |
| Done | Finish the main README |

Projects can organise work associated with Issues
and pull requests.

## 🏷️ Tags and Releases

A Git tag identifies a particular commit.

A GitHub release presents a version with release notes
and, optionally, downloadable assets.

Example tag commands:

```bash
git tag -a v1.0.0 -m "First documentation version"
git push origin v1.0.0
```

A release can then be created using the published tag.

Creating a tag does not automatically write release notes
or create a GitHub release.

## 🔐 Authentication and Access

Authentication establishes your identity when accessing
remote repositories.

GitHub supports HTTPS and SSH workflows.

Important distinctions:
- Git author configuration does not authenticate a push.
- Push access depends on credentials and repository permissions.
- Access tokens and private SSH keys must remain private.
- Secrets should never be added to repository files.

## 🧪 Practical Work in This Repository

This repository demonstrates:
- Creating a public repository.
- Writing a main README.
- Organising documentation into topic folders.
- Using Markdown headings, tables, and code blocks.
- Recording documentation changes through commits.

Further practice can include:
- Cloning the repository locally.
- Creating and pushing a documentation branch.
- Opening and reviewing a pull request.
- Merging the change and updating the local main branch.

Only describe an activity as completed after performing it.

## ✅ Repository Review Checklist

- All six module folders are at the repository root.
- Each module contains a correctly named `README.md`.
- The main README links to every module.
- Each module links back to the main README.
- Markdown renders correctly.
- Code examples are readable.
- Commit messages describe the changes.
- No credentials or private information are included.
- Practical evidence reflects work actually performed.

## 💡 Key Takeaways

- Git manages version history; GitHub hosts repositories.
- READMEs make projects easier to understand.
- Branches isolate changes.
- Pull requests support review and discussion.
- Issues and Projects help organise work.
- Clear documentation improves collaboration.

## 📚 References

- Git and GitHub lecture slides, MNIT Jaipur.
- GitHub Documentation: https://docs.github.com/
- Git Documentation: https://git-scm.com/doc

---

[⬅️ Back to Main Repository](../README.md)
