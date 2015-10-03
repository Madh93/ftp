#if !defined FTPServer_H
#define FTPServer_H

#include <list>

#include "ClientConnection.h"


class FTPServer{

	private:
  		
  		int port;
  		int msock;
  		std::list<ClientConnection*> connection_list;

	public:

  		FTPServer(int port = 21);
  		void run();
  		void stop();
};

#endif