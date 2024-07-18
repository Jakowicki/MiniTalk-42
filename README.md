# MiniTalk 💬
MiniTalk is a minimalistic communication system implemented in C for inter-process communication using UNIX signals.

## Key Features 🌟
Bitwise Communication: Characters are transmitted bit-by-bit using signals _SIGUSR1_ and _SIGUSR2_.

Signal Handling: 
-
Custom signal handlers process _SIGUSR1_ and _SIGUSR2_ for data transmission and reception.

Minimal Dependencies: 
-
Relies solely on standard UNIX libraries, ensuring portability and low overhead.

Real-time Data Exchange: 
-
Enables real-time messaging between processes.

## Components 🛠️
- client.c:
  - Sends a message to the server.

- server.c:
  - Listens for signals from the client and reconstructs the message.

- minitalk.h:
  - Header file containing necessary declarations.

## Usage 📖
##### Server Setup:

- Compile the server:

```sh
gcc server.c -o server
```
##### Run the server:
```sh
./server
```
This will display the server's PID.

## Sending a Message:
#####Compile the client:

```sh
gcc client.c -o client
```
##### Send a message to the server:
```sh
./client [server_pid] "Your message here"
```
Replace [server_pid] with the PID displayed by the server.

## Get Started 🔍
Explore inter-process messaging using traditional UNIX signals by cloning this repository and following the instructions in the README for setup and operation. Ideal for learning about system internals and IPC mechanisms.

