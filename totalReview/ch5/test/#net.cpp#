#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <unistd.h>
#include <arpa/inet.h>
#include <thread>

// Define port number
const int PORT = 8080;

// Server function
void startServer() {
    int serverSocket, newSocket;
    struct sockaddr_in serverAddr;
    struct sockaddr_storage serverStorage;
    socklen_t addr_size;

    // Create socket
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

    // Bind the socket
    bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));

    // Listen for incoming connections
    if (listen(serverSocket, 10) == 0)
        std::cout << "Listening..." << std::endl;
    else {
        std::cerr << "Error in listening" << std::endl;
        return;
    }

    addr_size = sizeof serverStorage;
    newSocket = accept(serverSocket, (struct sockaddr *)&serverStorage, &addr_size);

    // Send and receive data
    char buffer[1024];
    std::string data = "Hello, Client!";
    std::cout << "Server sending: " << data << std::endl;
    send(newSocket, data.c_str(), data.size(), 0);
    recv(newSocket, buffer, 1024, 0);

    // Print the memory address of the buffer
    std::cout << "Server received: " << buffer << " at memory address: " << &buffer << std::endl;

    close(newSocket);
    close(serverSocket);
}

// Client function
void startClient() {
    int clientSocket;
    struct sockaddr_in serverAddr;

    // Create socket
    clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(PORT);
    serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");

    // Connect to the server
    connect(clientSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr));

    // Send and receive data
    char buffer[1024];
    std::string data = "Hello, Server!";
    std::cout << "Client sending: " << data << std::endl;
    send(clientSocket, data.c_str(), data.size(), 0);
    recv(clientSocket, buffer, 1024, 0);

    // Print the memory address of the buffer
    std::cout << "Client received: " << buffer << " at memory address: " << &buffer << std::endl;

    close(clientSocket);
}

int main() {
    // Start the server in one thread
    std::thread serverThread(startServer);

    // Sleep briefly to allow the server to start before the client connects
    std::this_thread::sleep_for(std::chrono::seconds(1));

    // Start the client in another thread
    std::thread clientThread(startClient);

    // Join threads to wait for their completion
    serverThread.join();
    clientThread.join();

    return 0;
}
