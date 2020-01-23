public class TestMonster {


	public static void main(String[] args) {
		
		Food cookies = new Food("cookie", 3.0);
		System.out.println(cookies.getName());
		System.out.println(cookies.getServingSize());
		
		Monster cookieMonster = new Monster("cookie", 4, 2, false, cookies, 0);
		
		cookieMonster.looseALimb();
		cookieMonster.looseALimb();
		cookieMonster.looseAnEye();
		
		System.out.println(cookieMonster.getNumberOfLimbs()); 
		
		
		
		Food notCookies = new Food("broccoli", 1.0);
                
                
        Food meat[]=new Food[2];
        meat[0]=new Food("Chicken Meat", 1.0);
		meat[1]=new Food("Beef", 1.0);
                
		cookieMonster.eat(cookies);
		System.out.println(cookieMonster.getLifetimeFeed()); 
		
        cookieMonster.eat(meat);
		System.out.println(cookieMonster.getLifetimeFeed()); 
                
		cookieMonster.eat(cookies);
		System.out.println(cookieMonster.getLifetimeFeed()); 

		
		cookieMonster.eat(notCookies);
		System.out.println(cookieMonster.getLifetimeFeed()); 


		System.out.println(cookieMonster);

	}

}
