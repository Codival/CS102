lab: lab.cpp lab.h labgui.cpp clabgui1.cpp
	g++ -std=c++11 -I /home/debian/fltk-1.3.3 -o lab \
	lab.cpp labgui.cpp clabgui2.cpp clabgui1.cpp \
	`fltk-config --cxxflags --ldflags --use-cairo --use-images`

doc: lab.tex lab.cpp graph.gp lab.h
	lgrind -i -o labsource.tex lab.cpp
	lgrind -i -o labgui.tex labgui.cpp
	lgrind -i -o labheader.tex lab.h
	lgrind -i -o clabgui1.tex clabgui1.cpp
	lgrind -i -o clabgui2.tex clabgui2.cpp
	gnuplot < graph.gp
	latex lab.tex
	dvipdf lab.dvi
