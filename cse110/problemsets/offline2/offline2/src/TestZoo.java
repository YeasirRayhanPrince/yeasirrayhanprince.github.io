public class TestZoo {

	public static void main(String[] args) {
		Zoo theZoo = new Zoo(5);// 5 refers to the capacity
		
		// add some monsters
		Monster monsters[] = new Monster[4];
		monsters[0] = new Monster("m1");
		monsters[1] = new Monster("m2");
		monsters[2] = new Monster("m3");
		monsters[3] = new Monster("m4");
		Monster m4 = new Monster("m5");
		
		theZoo.addAMonster(monsters);
		theZoo.addAMonster(m4);

		System.out.println(theZoo.getNumberOfMonsters() + " monsters");	
		
		
		//add another monster
		Food cookies = new Food("Cookies", 3.0);
		Monster badMonster = new Monster("BAD", 4, 2, false, cookies,0);
		
		theZoo.addAMonster(badMonster); 
		System.out.println(theZoo.getNumberOfMonsters() + " monsters");
		
	}

}
