/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package logicalprograms;

/**
 *
 * @author Ayush
 */
import java.util.Scanner;

public class powerSerieses {
int number,range,power;

 powerSerieses(int number,int range, int power)
 {
     this.range=range;
     this.power=power;
     this.number = number;
 }
 public void getSeries()
 {
     int result;
     for(int i=0;i<=range ; i+=1)
     {
         result=number*i;
         System.out.println("The result is : "+result);
     }
 }
    public static void main(String[] args) {
        int power, range, number;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the power");
        power = sc.nextInt();
        System.out.println("Enter the range");
        range = sc.nextInt();
        System.out.println("Enter the number");
        number = sc.nextInt();

        powerSerieses p = new powerSerieses(number, range, power);
        p.getSeries();

    }
}
