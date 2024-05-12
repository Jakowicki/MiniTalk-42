MiniTalk is a minimalistic communication system implemented in C that allows two UNIX processes to communicate using signals. 
The project consists of a client and a server program that utilize the UNIX signals SIGUSR1 and SIGUSR2 to transmit characters between processes, 
encoded bit-by-bit.

Key Features: 🌟


Bitwise Communication: Characters are sent one bit at a time, where each bit is represented as a SIGUSR1 (for 1) or SIGUSR2 (for 0).

Signal Handling: Implements custom signal handlers to catch and process SIGUSR1 and SIGUSR2 for data transmission and reception. 📡
Minimal Dependencies: Relies solely on standard UNIX libraries, ensuring high portability and low overhead. 🔄
Real-time Data Exchange: Enables real-time messaging between processes, showcasing a simple yet powerful application of inter-process communication (IPC). 💬


Components: 🛠️
Client (client.c): Sends a string to the server by converting each character into a series of signal calls. 
Usage is triggered by providing the server's PID and the message to send.
Server (server.c): Continuously listens for signals from the client. 
Each set of 8 signals (bits) is assembled into a character which is then output, allowing the server to reconstruct the sent message.


Usage: 📖
Start the server: Run the server program to display its PID. 🆔
Send a message: Use the client program with the server's PID and the desired message as arguments. 📤
This project demonstrates a practical application of signal handling and inter-process communication mechanisms 
in UNIX-like systems, making it an excellent educational tool for students and developers interested in low-level system programming.


Repository Structure: 📂


client.c: Client code that sends messages.
server.c: Server code that receives and displays messages.
minitalk.h: Header file containing necessary declarations and imports.
Get Started: 🔍
Explore inter-process messaging using traditional UNIX signals by cloning this repo and following the detailed 
instructions in the README for setup and operation. Perfect for those interested in system internals and IPC mechanisms.
