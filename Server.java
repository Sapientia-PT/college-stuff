import java.net.ServerSocket;
import java.net.Socket;

public class Server{
    public static void main(String[] args){
        try{
            ServerSocket server = new ServerSocket(6969);
            System.out.println("Server is running...");
            while(true){
                Socket socket = server.accept();
                System.out.println("Client connected...");
                    new ServerThread(socket).start();
            }
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}
