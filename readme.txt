2017/5/3 jacky
Git is a version control system.
1)create git repository
	mkdir learnGit
	cd learnGit
	git init
2)add file to git repository
	sudo vim readme.txt
	git add readme.txt
3)commit the file
	git commit -m "wrote a reame file"
4)show status
	git status
5)show difference
	git diff
5)show history record
	git log
6)register github and get ssh-key from my PC
	ssh-keygen -t rsa -C "877143789@qq.com"
	then connect github with my computer
7)push you assigment to github
	git push origin master
