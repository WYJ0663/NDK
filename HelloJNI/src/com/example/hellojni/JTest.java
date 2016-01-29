package com.example.hellojni;

public class JTest {

	static{
		System.loadLibrary("hello");
	}
	
	public static native String getString();

}
