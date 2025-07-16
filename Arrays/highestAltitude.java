import java.util.*;

public class highestAltitude {

    static int findHighestAltitude(int[] gain){
        int highestAltitude = 0;
        int currentAltitude = 0;

        for(int i = 0; i < gain.length; i++){
            currentAltitude += (gain[i]);

            if(currentAltitude > highestAltitude){
                highestAltitude = currentAltitude;
            }
        }

        return highestAltitude;
    }

    public static void main(String[] args) {
        int[] gain = {-5,1,5,0,-7};

        System.out.println(findHighestAltitude(gain));
    }
}
