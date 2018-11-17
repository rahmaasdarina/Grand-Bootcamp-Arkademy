/*
 * Created by SharpDevelop.
 * User: R Darienz
 * Date: 11/17/2018
 * Time: 4:37 PM
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;

namespace Nomor_4_Rahma_Asdarina
{
	public void betweenDays(DateTime startingDate, DateTime endingDate)
		{
			List<DateTime> allDates = new List<DateTime>();
			int starting = startingDate.Day;
			int ending = endingDate.Day;
			
			for(DateTime date=startingDate; date<=endingDate; date=date.AddDays(1))
				allDates.Add(date);
			
			//return allDates;
			Console.WriteLine(allDates);
		} 
		
	class Program
	{
		DateTime sd;
		DateTime ed;
		
		
		public void Main(string[] args)
		{
			//Console.WriteLine("Hello World!");
			
			// TODO: Implement Functionality Here
			
			Console.Write("Input Starting Date : ");
			sd = DateTime.TryParse(Console.ReadLine());
			
			Console.Write("Input Ending Date : ");
			ed = DateTime.TryParse(Console.ReadLine());
			
			betweenDays(sd,ed);
		}
	}
}