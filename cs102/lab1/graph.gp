set terminal latex size 5in,3in
set output "graph.tex"
set title "Loan Payment"
pmt(r,p,ppy,n) = ((r/100.0) * (p/ppy)) / (1-(r/100.0/ppy+1)**(-(ppy*n)))
f(r) = pmt(r,1000.0,12.0,5.0)
set xlabel "Interest Rate"
set ylabel "Pmt"
set label at 9,20.76 "(9.0,20.76)" \
point pointtype 7 pointsize 2 offset 1,-1
plot [0:20][0:30]f(x)
