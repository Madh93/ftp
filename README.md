# FTP
#### File Transfer Protocol implementation in C++

Práctica de Programación de Sockets. Redes y Sistemas Distribuidos - ULL

![Alt text](http://i.imgur.com/gt8ykzB.png "Sample")

## Build

    $ git clone https://github.com/Madh93/ftp.git
    $ cd ftp/src
    $ make

## Usage

Server in a terminal:

    $ ./ftp_server

Client/s in other terminal:
  
    $ ftp
    ftp> open localhost 2121

It's recommendable start the client connection from other directory to see the transfer of files between server and client.

## Implementations

- Login/logout
- Upload files
- Download files
- Get system information
- Get directory location
- Change directory
- Rename files/directories
- Delete files
- Create/delete directories
- List files in directory

## Commands

| Name  | Action               |
|-------|----------------------|
| USER  | Client username      |
| PASS  | Cliente password     |
| SYST  | System information   |
| PWD   | Directory location   |
| CWD   | Change directory     |
| RNFR  | Rename file          |
| RNTO  | Rename file          |
| DELE  | Delete file          |
| MKD   | Make directory       |
| RMD   | Remove directory     |
| LIST  | List directory       |
| TYPE  | Type binary or ascii |
| PORT  | Active mode          |
| PASV  | Passive mode         |
| RETR  | Get/download file    |
| STORE | Put/upload file      |
| QUIT  | Disconnection        |