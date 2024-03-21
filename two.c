1.
mkdir 3VC20CS065
ls
cd 3VC20CS065
Git init
Git config-list
git config –global
user.name
“lingarajpower”
git config – global
user.email “
lingarajpower@gmail.com
”
Git clone
https://github.com/lingar
ajpower/3VC15CS065.git
cd 3VC15CS065
git status
$ echo "hello git and git
Hub" >> lab1.txt
$ git add lab1.txt
$ git status
Git commit –m “first msg”
Git push origin main


2.
vi one.c
git add one.c
git commit-m"create
one.c"
vi two,c
git add two.c
git commit -m"create
two.c"
git log
git status
git branch
git branch b1
git branch b2
git branch
git checkout b1
git status
echo "in branch b1 hello
world ">>lab3.c
echo "in branch b1
branching world">>lab4.c
git add lab3.c
git add lab4.c
git commit -m"lab 3 for
b1"
git cheskout b2
git branch
echo "in branch b2 hello
world">>lab5.c
echo "in branch b2
branching world ">>lab6.c
git add lab5.c
git add lab6.c
git commit -m"lab 5 and
lab 6 in branch b2"
git checkout master
git diff main..b1
git merge b1
git branch --merged
git branch -d b1
git branch -d b2
git merge b2
git branch --merged
git branch -d b2


3.
vi index.txt
git add .
$ git commit -m "create
indes file"
$ git branch feature
$ git checkout feature
vi feature.txt
git add.
$ git commit -m "work in
progress"
$ git index.txt
git checkout main
git stash
Git status
git stash list
git checkout main
git checkout feature
git stash pop
$ git stash list
$ git add .
git commit -m "create
indes file changed in
feature"


5.
vi index.txt
git add .
git commit -m"create
indes file"
git pull (code)
ls
git remote set url origin
https:ghp
fgvhghghghghfh@github.c
om/abhi/577
git push


6.
Vi pgm6.c
Git add pgm6.c
Git commit –m “program
6”
Git branch feature-branch
Git checkout featurebranch
Vi pgm6b.c
Git add pgm6b.c
Git commit –m “pgm 6b
feature branch”
git checkout master
git merge --no-ff featurebranch -m "Your custom
merge commit message"


7.
git checkout main
git tag v1.0
git tag
git tag -a v1.1 -m "tag for
release ver 1.1"
git tag
git show v1.0
git push origin v1.0


8.
$ git checkout master
$ echo "I am in 8a" >>
lab8a.txt
git add .
$ git commit -m " I am in
8a branch master "
$ git log
$ git show
f7b46493e18b1dd587038
30637ae9d3e615adbde


9.
$ git checkout master
$ echo "I am in 9a" >>
lab9a.txt
git add .
$ git commit -m " I am in
9a branch master "
$ git branch cherry
$ git log
$ git checkout cheery
$ echo "I am in 9b" >>
lab9b.txt
git add .
$ git commit -m " I am in
9b branch cheery "
$ echo "I am in 9c" >>
lab9c.txt
git add .
$ git commit -m " I am in
9c branch cheery "
$ git checkout master
$ git log
$ git cherry-pick
f7b46493e18b1dd587038
30637ae9d3e615adbde
$ git log


10.
echo "I am in
10a">>lab10a.txt
git add .
git commit -m"I am in
10a"
echo "I am in
lab">>lab10b.txt
git add .
git commit -m"I am in
la10b"
echo "I am in
lab10c">>lab10c.txt
git add .
git commit -m"i am in
lab10c"
git log --
author="abhichalavadi"--
since="2024-03-20"--
untill=="2024-04-07"


11.
$ echo "I am in 11a" >>
lab11a.txt
$ echo " I am in 11b " >>
lab11b.txt
$ echo " I am in 11c " >>
lab11c.txt
$ echo " I am in 11d " >>
lab11d.txt
$ echo " I am in 11e " >>
lab11e.txt
git add .
$ git commit -m "create
indes file"
$ git log –n 5


12.
$ git checkout master
$ vi 12a.txt
git add .
$ git commit -m " I am in
12a branch master "
$ vi 12b.txt
git add .
$ git commit -m " I am in
12b branch master "
$ vi 12a.txt
git add .
$ git commit -m " I am in
12a branch master
changes 1"
$ vi 12b.txt
.
git add .
$ git commit -m " I am in
12b branch master
changes 1 "
$ git log --oneline
$ git revert ec9d05e
