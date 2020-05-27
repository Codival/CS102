src= lab.cpp labgui.cpp clabgui1.cpp clabgui2.cpp labgraph.cpp \
cbDrawGraph.cpp drawXAxis.cpp drawYAxis.cpp plotPoint.cpp

lab:${src} lab.h
	g++ -std=c++11 -I /home/debian/fltk-1.3.3 -o lab \
	${src} \
	`fltk-config --cxxflags --ldflags --use-cairo --use-images`

doc: lab.tex lab.cpp graph.gp lab.h
	lgrind -i -o labsource.tex lab.cpp
	lgrind -i -o labgui.tex labgui.cpp
	lgrind -i -o labheader.tex lab.h
	lgrind -i -o clabgui1.tex clabgui1.cpp
	lgrind -i -o clabgui2.tex clabgui2.cpp
	lgrind -i -o labgraph.tex labgraph.cpp
	lgrind -i -o labdrawgraph.tex cbDrawGraph.cpp
	lgrind -i -o drawXaxis.tex drawXAxis.cpp
	lgrind -i -o drawYaxis.tex drawYAxis.cpp
	lgrind -i -o plotPoint.tex plotPoint.cpp
	gnuplot < graph.gp
	latex lab.tex
	dvipdf lab.dvi
