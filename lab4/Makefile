objs = main.o killAnimate.o extractGifInfo.o getGifInfo.o \
makeSearchWindow.o makeDisplayWindow.o cbDisplay.o
FLTKCXXFLAGS = `fltk-config --cxxflags --ldflags --use-cairo --use-images`
CXXFLAGS = -std=c++11 -g -I /home/debian/fltk-1.3.3 ${FLTKCXXFLAGS}
LDFLAGS = -lcurl
lab: ${objs} lab.h
	g++ ${CXXFLAGS} ${objs} -o lab ${LDFLAGS}
	
doc: ${objs:.o=.cpp} lab.h
	for f in ${objs:.o=}; do \
		lgrind -i -o $$f.tex $$f.cpp; \
	done
		lgrind -i -o header.tex lab.h
	latex lab.tex
	dvipdf lab.dvi
