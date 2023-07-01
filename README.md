# c_SatelliteImageEnhancement
Parallel edge enhancement for satellital images

Hi everyone, this is a test code for parallel demostration.

To compile and prove, please follow these steps.

1- Download and extract the file on 5 different pc that must be on the same LAN
2- Give executbale permissions to the filter_server & filter_client
3- 4 pc must run the filter_server executable, so for this execute './filter_server' please make sure you are in the right folder
4- 1 pc must run the filter_client executbale, so, execute ./filter_client 108 111 109 110 where every number is the sufix of server ip address of previous servers where you run the server code
5- Once the program finish, ensure to termite the precces with ctrl + c

Considerations:
-This code uses Remote Procedure calls instead of RMI on JAVA, but consider that RPC can be applied to many other lenguages
-What this code makes, is to distribute the filter o 4 diferent machines, everyone make work on 1/4 of the image, so the image must be preload on every machine, only the client does not need it.
-Check if your five pc have communication between all of them.
-Do not forget to install the rpc service, in other case it willl never works, in my case I used rpcbind, check with 'systemctl status rpcbind'




