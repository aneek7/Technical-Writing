# 📝 LaTeX — Technical Document Preparation

### Technical Writing Laboratory | MNIT Jaipur

> **Structure the content. Typeset with precision.**

## 📌 Introduction

LaTeX is a document preparation system built on TeX.
It uses commands to describe document structure and formatting.

It is particularly useful for research papers, mathematical content,
reports, books, and other structured technical documents.

A LaTeX source file uses the `.tex` extension. Compiling it with
a suitable engine, such as pdfLaTeX, produces a PDF.

## 🎯 Topics Covered

- Document structure, classes, and packages.
- Titles, sections, and text formatting.
- Mathematical expressions, equations, matrices, and cases.
- Lists and tables.
- Colours, figures, and the picture environment.
- Page layout, headers, and footers.
- Cross-references, contents, and bibliographies.

## 🏗️ Basic Document Structure

```latex
\documentclass[12pt,a4paper]{article}
\usepackage[margin=1in]{geometry}

\title{Introduction to LaTeX}
\author{Student Name}
\date{\today}

\begin{document}

\maketitle

\section{Introduction}
This is my first LaTeX document.

\end{document}
```

| Command | Purpose |
| :--- | :--- |
| `\documentclass{article}` | Selects the document class |
| `\usepackage{geometry}` | Loads a package |
| `\title{...}` | Defines the title |
| `\author{...}` | Defines the author |
| `\date{\today}` | Uses the current compilation date |
| `\begin{document}` | Starts the document body |
| `\maketitle` | Displays the title information |
| `\end{document}` | Ends the document |

The **preamble** is the area between `\documentclass` and
`\begin{document}`. Packages and document settings normally go here.

### Common Document Classes

| Class | Typical use |
| :--- | :--- |
| `article` | Short documents and articles |
| `report` | Reports with chapters |
| `book` | Books with chapters and front matter |
| `letter` | Letters |
| `beamer` | Presentations |

## ✍️ Text Formatting and Sections

```latex
\section{Main Section}
\subsection{Subsection}
\subsubsection{Smaller Subsection}

\textbf{Bold text}

\textit{Italic text}

\underline{Underlined text}

{\Large Larger text}

Special characters: \% \& \_ \# \$
```

- A blank line starts a new paragraph.
- `%` starts a comment; use `\%` to print a percentage sign.
- Braces limit the scope of formatting changes.
- `\chapter{...}` is available in `report` and `book`, but not `article`.

## ➗ Mathematical Typesetting

Use `\usepackage{amsmath,amssymb}` in the preamble.

### Inline and Display Mathematics

```latex
Inline mathematics: \( a^2 + b^2 = c^2 \).

Display mathematics:
\[
E = mc^2
\]
```

### Important Commands

| Expression | LaTeX syntax |
| :--- | :--- |
| Superscript | `x^{2}` |
| Subscript | `a_{ij}` |
| Fraction | `\frac{a}{b}` |
| Square root | `\sqrt{x}` |
| nth root | `\sqrt[n]{x}` |
| Summation | `\sum_{i=1}^{n} i` |
| Product | `\prod_{i=1}^{n} x_i` |
| Integral | `\int_{0}^{1} x^2\,dx` |
| Greek letters | `\alpha, \beta, \gamma, \delta, \sigma` |
| Less than or equal | `\leq` |
| Not equal | `\neq` |
| Infinity | `\infty` |
| Boxed expression | `\boxed{E=mc^2}` |
| Upper annotation | `\overbrace{a+b+c}^{\text{Total}}` |
| Lower annotation | `\underbrace{x+y}_{\text{Group}}` |

These commands are used inside a mathematics environment.

### Numbered and Aligned Equations

```latex
\begin{equation}
\label{eq:integral}
\int_0^1 x^2\,dx = \frac{1}{3}
\end{equation}

See Equation~\eqref{eq:integral}.

\begin{align}
(x+1)^2 &= x^2 + 2x + 1 \\
(x-1)^2 &= x^2 - 2x + 1
\end{align}
```

The `&` marks the alignment position.
Use `align*` for unnumbered aligned equations.

### Matrices and Piecewise Functions

```latex
\[
A =
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]

\[
f(x) =
\begin{cases}
-x, & x < 0, \\
x,  & x \geq 0.
\end{cases}
\]
```

| Environment | Purpose |
| :--- | :--- |
| `matrix` | Matrix without surrounding brackets |
| `pmatrix` | Matrix with parentheses |
| `bmatrix` | Matrix with square brackets |
| `array` | Mathematical rows and columns with specified alignment |
| `cases` | Piecewise expressions |

## 📋 Lists

```latex
% Bulleted list
\begin{itemize}
    \item LaTeX
    \item Markdown
\end{itemize}

% Numbered list
\begin{enumerate}
    \item Write the source.
    \item Compile the document.
    \item Inspect the output.
\end{enumerate}

% Descriptive list
\begin{description}
    \item[LaTeX] A document preparation system.
    \item[Git] A version control system.
\end{description}
```

## 📊 Tables

The `tabular` environment creates the table content.
The `table` environment is a floating container that can hold
a caption, label, and tabular content.

```latex
\begin{table}[htbp]
\centering
\caption{Student Performance}
\label{tab:marks}
\begin{tabular}{|l|c|r|}
\hline
\textbf{Name} & \textbf{Marks} & \textbf{Percentage} \\
\hline
Student A & 90 & 90\% \\
Student B & 85 & 85\% \\
\hline
\end{tabular}
\end{table}
```

| Syntax | Meaning |
| :--- | :--- |
| `l`, `c`, `r` | Left, centre, and right alignment |
| `p{4cm}` | Fixed-width column with text wrapping |
| `&` | Separates columns |
| `\\` | Ends a row |
| `\hline` | Draws a horizontal line |
| `\multicolumn{3}{c}{Title}` | Spans three columns |
| `\multirow{2}{*}{CSE}` | Spans two rows; requires `multirow` |

### Professional Tables

Load `\usepackage{booktabs}`.

```latex
\begin{tabular}{lcc}
\toprule
Model & Accuracy & Parameters \\
\midrule
Model A & 94\% & 1M \\
Model B & 96\% & 2M \\
\bottomrule
\end{tabular}
```

When using `booktabs`, avoid vertical rules.

## 🎨 Colours and Boxes

Load `\usepackage[table]{xcolor}`.

```latex
\definecolor{custompurple}{RGB}{200,20,200}
\colorlet{warmcolour}{red!60!yellow}

\textcolor{custompurple}{Coloured text}

\colorbox{yellow}{Highlighted text}

\fbox{Important information}

\fcolorbox{blue}{yellow}{Coloured border and background}

% Apply a page background colour:
% \pagecolor{yellow!10}
```

### Coloured Table Cells

```latex
\begin{tabular}{|l|c|}
\hline
\rowcolor{blue!20}
Name & Result \\
\hline
Student A & \cellcolor{green!25}Pass \\
\hline
\end{tabular}
```

Use `\rowcolor{blue}` with braces for a named colour.

## 🖼️ Figures and Images

Load `\usepackage{graphicx}`.

```latex
\begin{figure}[htbp]
\centering
\includegraphics[width=0.6\textwidth]{example-image.png}
\caption{Example image}
\label{fig:example}
\end{figure}

See Figure~\ref{fig:example}.
```

Replace `example-image.png` with an image file in your project.

### Image Transformations

```latex
% Rotate an image:
\includegraphics[width=3cm,angle=90]{example-image.png}

% Crop: left, bottom, right, top
\includegraphics[
    width=\textwidth,
    trim=0cm 0cm 0cm 2cm,
    clip
]{example-image.png}
```

With pdfLaTeX, PNG, JPEG, and PDF are commonly used image formats.

### Float Placement

| Option | Allowed placement |
| :--- | :--- |
| `h` | Approximately here |
| `t` | Top of a page |
| `b` | Bottom of a page |
| `p` | A page of floats |

These options guide placement; they do not guarantee an exact position.

### Side-by-Side Content

```latex
\noindent
\begin{minipage}{0.48\textwidth}
Left-side content.
\end{minipage}
\hfill
\begin{minipage}{0.48\textwidth}
Right-side content.
\end{minipage}
```

## 📐 Picture Environment

The `picture` environment places objects using coordinates.

```latex
\setlength{\unitlength}{1mm}

\begin{picture}(80,25)
    \put(0,5){\framebox(25,15){Input}}
    \put(25,12){\vector(1,0){20}}
    \put(45,5){\framebox(25,15){Output}}
\end{picture}
```

| Command | Purpose |
| :--- | :--- |
| `\unitlength` | Sets the unit used for coordinates |
| `\put(x,y){...}` | Positions an object |
| `\line(dx,dy){length}` | Draws a line |
| `\vector(dx,dy){length}` | Draws an arrow |
| `\circle{diameter}` | Draws a circle |
| `\framebox(w,h){text}` | Draws a labelled rectangular box |

## 📄 Page Layout, Headers, and Footers

Add the following to the preamble:

```latex
\usepackage[margin=1in]{geometry}
\usepackage{fancyhdr}

\setlength{\headheight}{15pt}
\pagestyle{fancy}
\fancyhf{}
\fancyhead[L]{TW Laboratory}
\fancyhead[R]{MNIT Jaipur}
\fancyfoot[C]{\thepage}
```

| Command | Purpose |
| :--- | :--- |
| `\pagestyle{plain}` | Uses the class's plain page style |
| `\pagestyle{empty}` | Removes headers and footers |
| `\thispagestyle{empty}` | Applies an empty style to the current page |
| `\newpage` | Starts a new page |
| `\clearpage` | Outputs pending floats and starts a new page |

## 🔗 Contents, References, and Bibliography

```latex
\tableofcontents
\listoffigures
\listoftables

\section{Introduction}
\label{sec:intro}

Refer to Section~\ref{sec:intro}.
```

Compile again when necessary to update contents and cross-references.

### Simple Bibliography

```latex
LaTeX supports structured document preparation~\cite{lamport}.

\begin{thebibliography}{9}
\bibitem{lamport}
Leslie Lamport.
\textit{LaTeX: A Document Preparation System}.
Addison-Wesley, 1994.
\end{thebibliography}
```

For a separate BibTeX database:

```latex
\bibliographystyle{plain}
\bibliography{references}
```

This refers to a file named `references.bib`.

## ▶️ Compilation

For a basic document:

```bash
pdflatex main.tex
pdflatex main.tex
```

The second run updates cross-references and contents when needed.

For a document using BibTeX:

```bash
pdflatex main.tex
bibtex main
pdflatex main.tex
pdflatex main.tex
```

Alternatively, use the compile option in a LaTeX editor such as Overleaf.

## 🧪 Connection to Laboratory Work

| Exercise | Concepts practised |
| :--- | :--- |
| Mathematical expressions | Fractions, braces, matrices, arrays, and cases |
| Table formatting | Alignment, merged cells, colours, and booktabs |
| Lists and figures | List environments, image rotation, cropping, and minipages |
| Report preparation | Title page, abstract, chapters, margins, and headers |

## 💡 Key Takeaways

- Separate document content from its presentation.
- Load packages required by the commands being used.
- Use labels and references instead of manually typing section or figure numbers.
- Keep image files alongside the source or specify their correct paths.
- Check the compiled output for errors and layout problems.

## 📚 References

- Technical Writing lecture slides and laboratory assignments, MNIT Jaipur.
- LaTeX Project: https://www.latex-project.org/
- Overleaf Learning Resources: https://www.overleaf.com/learn

---

[⬅️ Back to Main Repository](../README.md)
