import java.util.*;
import java.io.*;
import java.net.Socket;

public class ServerThread extends Thread{
    private Socket socket;
    public ServerThread(Socket socket){
        this.socket = socket;
    }
    public void run(){
        try{
            ObjectInputStream reader = new ObjectInputStream(socket.getInputStream());
            byte[] data = (byte[])reader.readObject();
            System.out.println(reader.read());

            reader.close();
            socket.close();
        }catch(Exception e){
            e.printStackTrace();
        }
    }
}