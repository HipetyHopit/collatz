collatz_threaded.exe: collatz_threaded.cpp
	g++ -std=c++11 -pthread collatz_threaded.cpp -o collatz_threaded.exe

collatz.exe: collatz.cpp
	g++ collatz.cpp -o collatz.exe

build: collatz_threaded.exe collatz.exe

run: build
	# .\collatz_threaded.exe 27
	.\collatz.exe 27

clean:
	rm -f collatz_threaded.exe collatz.exe