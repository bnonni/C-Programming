class Person{
	public int age=0;
 	Person(int _age){
        this.age=_age;
    }
    
    public static void main(String[] args){
        Person p1=new Person(22);
        Person p2=new Person(21);
        //System.out.println("p1:"+p1+"   "+"p2:"+p2);
        p2=p1;
        p1.age=25;
        System.out.println(p1.age+"   "+p2.age);
        //System.out.println("p1:"+p1+"   "+"p2:"+p2);
    }
}

