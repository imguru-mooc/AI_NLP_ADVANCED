class First
{
	void foo()
	{
		System.out.println("foo()");
	}

	public static void main(String[] args)
	{
		System.out.println("main()");
		First first = new First();
		first.foo();
	}
};
