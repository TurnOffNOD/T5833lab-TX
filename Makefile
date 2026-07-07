all:
	cd src/pat; make status=online; cd ../../
	cd src/pro; make status=online; cd ../../
clean:
	cd src/pat; make clean; cd ../../
	cd src/pro; make clean; cd ../../
	cd test/;${RM} *.mpa *.exe  *.scr *.so  *.txt;cd ../
	cd test/CALFILES; ${RM} *n.cal; cd ../../
ofm:
	cd src/pat; make status=offline; cd ../../
	cd src/pro; make status=offline; cd ../../
onm:
	cd src/pat; make status=online; cd ../../
	cd src/pro; make status=online; cd ../../
srconm:
	cd src/pro; make status=online; cd ../../
srcofm:
	cd src/pro; make status=offline; cd ../../
patonm:
	cd src/pat; make status=online; cd ../../
patofm:
	cd src/pat; make status=offline; cd ../../




