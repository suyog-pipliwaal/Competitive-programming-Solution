import java.io.File;
import java.io.IOException;

public class CreateFileExample
{
    public static void main( String[] args )
    {
	String[] name = new String[100];
	int count = 0; 
	name[count++] = "HS08TEST.c";
	name[count++] = "intest.c";
	name[count++] = "test.c";
	name[count++] = "fctrl.c";
	name[count++] = "tlg.c";
	name[count++] = "muffins3.c";
	name[count++] = "flow001.c";
	name[count++] = "flow006.c";
	name[count++] = "luckfour.c";
	name[count++] = "flow002.c";
	name[count++] = "remiss.c";
	name[count++] = "snape.c";
	name[count++] = "flow007.c";
	name[count++] = "flow004.c";
	name[count++] = "star01.c";
	name[count++] = "fsqrt.c";
	name[count++] = "flow018.c";
	name[count++] = "flow008.c";
	name[count++] = "gdog.c";
	name[count++] = "flow013.c";
	name[count++] = "prb01.c";
	name[count++] = "flow009.c";
	name[count++] = "flow010.c";
	name[count++] = "flow016.c";
	name[count++] = "choprt.c";
	name[count++] = "twostr.c";
	name[count++] = "chefstlt.c";
	name[count++] = "flow014.c";
	name[count++] = "rectsq.c";
	name[count++] = "missp.c";
	name[count++] = "holes.c";
	name[count++] = "double.c";
	name[count++] = "numgame.c";
	name[count++] = "spalnum.c";
	name[count++] = "cielab.c";
	name[count++] = "amr15a.c";
	name[count++] = "factrl2.c";
	name[count++] = "horse.c";
	name[count++] = "johny.c";
	name[count++] = "easyprob.c";
	name[count++] = "lapin.c";
	name[count++] = "stones.c";
	name[count++] = "lepermut.c";
	name[count++] = "voters.c";
	name[count++] = "error.c";
	name[count++] = "icpc16b.c";
	name[count++] = "recipe.c";
	name[count++] = "flow017.c";
	name[count++] = "pall01.c";
	name[count++] = "fruits.c";
	name[count++] = "vcs.c";
	name[count++] = "ppsum.c";
	name[count++] = "mnmx.c";
	name[count++] = "j7.c";
	name[count++] = "numgame2.c";
	name[count++] = "rightri.c";
	name[count++] = "dividing.c";
	name[count++] = "potatoes.c";
	name[count++] = "spcandy.c";
	name[count++] = "ojumps.c";
	name[count++] = "rrcopy.c";
	name[count++] = "totr.c";
	name[count++] = "alexnumb.c";
	name[count++] = "anudtc.c";
	name[count++] = "chdogs.c";
	name[count++] = "nitika.c";
	name[count++] = "smpair.c";
	name[count++] = "tricoin.c";
	name[count++] = "twonms.c";
	name[count++] = "chefkey.c";
	name[count++] = "alextask.c";
	for (int i = 0 ;i < count ;i++) {
    	try {

	      File file = new File(name[i]);

	      if (file.createNewFile()){
	        System.out.println(i+1+" File is created!");
	      }else{
	        System.out.println(i+1+" File already exists.");
	      }

    	} catch (IOException e) {
	      e.printStackTrace();
	}
	}
    }
}
