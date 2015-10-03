#if !defined ClientConnection_H
#define ClientConnection_H

#include <pthread.h>

#include <cstdio>
#include <cstdint>


const int MAX_BUFF = 512;


class ClientConnection{

    private:  

        bool ok;        // 	Esta variable es un flag que evita que el servidor
                        // escuche peticiones si ha habido errores en la inicialización.
        
        FILE *fd;       // Descriptor de fichero en C. Se utiliza para que
                        // socket de la conexión de control tenga esté bufferado
                        // y se pueda manipular como un fichero a la C, con
                        // fprintf, fscanf, etc.
      
        char command[MAX_BUFF];     // Buffer para almacenar el comando.
        char arg[MAX_BUFF];         // Buffer para almacenar los argumentos. 
        char arg2[MAX_BUFF];         // Buffer para almacenar los argumentos. 
        
        int data_socket;            // Descriptor de socket para la conexion de datos;
        int control_socket;         // Descriptor de socket para al conexión de control;
        
        bool parar;

        unsigned long server_address;   // Dirección ip del servidor
        bool passive;                   // Comprueba si se está en modo pasivo o activo


    public:

        ClientConnection(int s, unsigned long ip);
        ~ClientConnection();
        
        void WaitForRequests();
        void stop();
};

#endif