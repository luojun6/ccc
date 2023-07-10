# Linux- Bash Shell and Scripts

## 01 Bash Beginning

### 01-01 Exploring the Bash Documentations

- **The Man and Info Commands**
    - Bash has a lof features.
    - There is some handy online documentation.
    - The `man` and `info` commands give the Bash(1) man page.
    - It's about 100 printed pages.
    - The reference manual is here: https://www.gnu.org/software/bash/manual/bash.html

```sh
man bash
man bash | wc -l
info bash 
info bash | wc -l
```

### 01-02 Setting the Script Interpreter and Permissions

- **Script File Basics**
    - First two characters should be #!
      (known as "shebang").
    - Followed by path to Bash or evn:
        `#!/usr/bin/env bash`
        `#!/bin/bash`
    - This is executed via the kernel system called `execve()`
    - Kernel checks for `#!` and passes the path to the orignal program as a command-line argument.
    - So `./myscript.sh`, with `#!/bin/bash` would have the kernel execute
        `bin/bash ./myscript.sh` 
    - Perl, Python, Expect, awk, and Bash can use `#!`.
    The env will look for Bash in you path.
    - Just `#!/bin/bash` is most common.

- **Executing the Script**
    - Make scripts excutable wit h`chmod u+x`
        *Add excuete permission for the "user", wihch means the owner of the script file.*
    - With only read permission, execute a script with bash `thescript.sh`
    - If the directory that contains the script, like the current directory (.), is not in you path, then you normally run the script this way: `./thescript.sh`
    - There is no need to give a script any special name but a `.sh` suffix is common and informative.

### 01-03 Time Commands and Set Variables

- **The Bash Time Command**
    - Bash has a builtin time command to report how much time a process consumed.
        `time find / -name core`

- **Variables in Bash**
    - Variables in Bash are given a value with =.
    - You should put no spaces before or after the =. value has special characters, including spaces, put the value in quotes.
    - myvar="this is some chars; * $\")"
    - Created when you assign one a value or declare with, for example, the export command.
    - Remove variables with the unset command 
    - Reference the value of a variable with a dollar sign front of the name:
        `echo myvar is $mayvar`
    - For a shell script to get a copy of a shell variable needs to be "exported""
        `export mynewvar` or declare `-x mynewvar`
    - You can export and assign in the same statement:
        `export var2="var2 value"`.
    - `export -f myfunc` will export the function `myfunc`.
    - Typing just export will print which variables are part of the shell`s environment - those exported.

- **Grouping in Bash**
    - Bash functions use braces and can modify variables of the shell that calls the function.

```sh
a=1
(
    a=2
)
echo $a
```
prints 1

```sh
a=1
{
    a=2
}
echo $a
```
prints 2

- **Bash Builtins**
    - Get a list of Bash builtins with the enable command
    - Prefers builtins, keywords, aliases, and functions over commands in the file system


```sh
time sleep 2
```

```sh
enable
```

### 01-04 Bash Startup

- `.bash_profile` is read when Bash is invoked as a login shell.
- `.bashrc` is executed when a new shell is started.
- If you extend an exported variable, like `PATH`, in `.bashrc`, it will grow with each neted shell invocation. -> *Not what we want!*
- `PATH=$PATH:/usr/local/bin`
    This would keep adding `/usr/local/bin` to the `PATH` within nested shells.
- Alisases and functions should normally be defined in `.bashrc`.

### 01-05 Sourcing and Aliasing with Bash

- **Sourcing Scripts**
    - `source example.sh`, or `. example.sh`
    - It is "dot spae" as a short way to source a script.
    - The shell executed the script in the shell's own process instead of in a new process.
    - Sourcing is a common way to import variable assignments or functions.
    - The sourced script is executed within the calling shell's process.

- **Working with Alisase**
    - The alias command allows for short command alternatives: alias ll="ls -l".
    - Some people use an alias to give an alternative more familiar name or to fix a common typo to Linux command.
    - List defined aliases by simply typing alias
    - Unset an alias with the unlias command

    ```sh
    echo "x=22" > setx.sh
    chmod +x setx.sh
    echo $x                 # Print: nothing
    ./setx.sh
    echo $x                 # Print: nothing
    source ./setx.sh
    echo $x                 # Print: 22
    x=1
    echo $x                 # Print: 1
    . ./setx.sh
    alias ls                # Pirnt: alias ls='ls --color=auto'
    ```

### 01-06 Dispaly Text with the Echo Command

- **Using the Echo Command**
    - Built into Bash and doesn't start a new process
        - `-n` -> don't print a trailing newline
        - `-e` -> enable backslash escaped characters like `\n` and `\t`
        - `-E` -> disable backslash escaped characters in case they were enabled by default
    - `ls *` would list contents of directories:
        - `echo *` would show file and directory names
    - Use file redirection techniques to send the output to other files, such as `stderr`:
        `echo 'Warning Will Robinson!' >&2`

*echoes.sh*
```sh
echo Hello World
echo -n Good to see you "\n\n"
echo Thanks
echo -e Hi "\t\t\t" There "\n\n"
echo -E Bye "t\t\t" For now "\n\n"
```

### 01-07 Challenge

- **Simple Script**
    - Write a Bash script, with "shebang" inside, that prints the variable A
    - Run your script without defining or setting a variable A in your shell
    - Run it again after setting A=1 on the command line before you run the script
    - Finally run it after doing: export A=2 on the command line

- **Source**
    - Write a script, `set.sh`, that sets A=10
    - On the command line set A=5, and then run your script that prints A to see it print A. A should be exported.
    - On the command line set A=5. In your script that prints A, before printing A, source `set.sh`. You should see the script now print A is 10.
    -  On the command line set A=5. In your script that prints A, run `set.sh`; don't source it. You should see that the script prints A=5.

- **Echo**
    - Write a script that echoes the line "Hello, World\n\n"
    - Add the `-n` option to the echo and run again
    - Relace the `-n` with `-e` and run again
    - What do they print? How does their output different?


## 02 Local Variables in Functions, Loops and Arithmetics

### 02-01 The Typesets and declare Commands for Variables

- **Local Variables and Typeset**
    - Variables can be created in a function that will not be available outside of it.
    - The typeset command makes variables local, can provide a type, or can provide formatting.
        `typeset -i x`
        `# x must be an integer`
    - Arithmetic is faster for variables defined to be integers.
    - Let allows for convenient arithmetic:
        `let x++; let x**2; let x=x*3; let x*=5, ...`
    
- **The Declare Command**
    - `declare -l` uppercase values in the variable are converted to lowercase.
    - `declare -u` lowercase values in the variable are converterd to uppercase.
    - `declare -r` variable is made *read-only*.
    - `declare -a MyArray` will make *MyArray*  an indexed array.
    - `declare -A MyArray2` will make *MyArray2* an associative array.

*typeset.sh*
```sh
    #!/bin/bash

function f1 {
    typeset x # Set x as local variable
    x=7
    y=8
}

x=1
y=2
echo x is $x
echo y is $y
f1
echo x is $x
echo y is $y
``` 

*declare.sh*
```sh
#!/bin/bash

declare -l lstring="ABCdef"
declare -u ustring="ABCdef"
declare -r readonly="A Value"
declare -a Myarray
declare -A Myarray2

echo lstring = $lstring
echo ustring = $ustring
echo readonly = $readonly
readonly="New Value"
Myarray[2]="Second Value"
echo 'Myarray[2] =' ${Myarray[2]}
Myarray2["hotdog"]="baseball"
echo 'Myarray2[hotdog] =' ${Myarray2["hotdog"]}
```

### 02-02 Lopping with for-while Sequences and Reading Input

- **The Read Command**
 - Read a line into a variable or multiple variables
 - `read a b` - reads first word into a and the rest into b
 - Convenient for a while loop

- **While Loops**

```sh
while
    command list 1
do
    command list
done
# loops while command list 1 succeeds
```

```sh
while
    ((x<10))
do
    echo loop $x; date >date.$x
    ((x=x+1))
done
```

```sh
while
    read a b
do
    echo a is $a b is $b
done <data_file
```

```sh
ls -l | while 
    read a b c d
    do ehoc owner is $c
    done
```

- **For Loops**

```sh
for <var> in <list>
do 
    command list
done
```

```sh
for i in dog catr elephant
do 
    echo i is $i
done
```

```sh
seq 1 5
# prints 1 2 3 4 5
```

```sh
for num in `seq 1 5`
# loops ove 1 2 3 4 5 
```

```sh
# generate sequences with {A..Z}, {1..10},
```

```sh
for d in $(<data_file)
# loops over space/newline
# separated data in data_file
```

```sh
for j in *.c
# making a list with file globbing
```

```sh
for f in $(find . -name *.c)
# using a command to gerneate a list
```

*`read.sh`*
*`while.sh`*
*`while2.sh`*

```sh
nl for.sh
```

### 02-03 Defining Functions and Using Return and Exit

- **Bash Functions**
    - Give a name to a sequence of statement that will execute within the shell, not in a new process
```sh
function NAME {
    function body ...
}
```
    - Commonly used to organize code in a shell process
```sh
function printhello {
    echo Hello
}

printhello
# shell memorizes the function like it's a new command
```

- **The Return Command**
    - Functions return when there are no more statement executed or when a return statement is executed.
```sh
function myfunc {
    echo starting
    return 
    echo this will not be executed
}
```
    - Functions produce results by writing output like commands do.
```sh
hvar = $(printhello)
```

- **The Exit Command**
    - `exit <VALUE>` sets the exit status, represented by `$? to <VALUE>`.
    - `exit` terminates the shell process.
    - `exit` in a function terminates the whole shell program, not just the function.

```sh
function printhello {
    echo Hello
}