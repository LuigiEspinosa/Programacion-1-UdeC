package Parcial;
import java.util.Scanner;
import javax.swing.JOptionPane;
import java.text.DecimalFormat;

public class Parcial {
    static final Scanner scan = new Scanner(System.in);
	public static void main(String[] args) {
		int opcion;
		String sw;

        do {
            System.out.print(
                "                                   \n"
                + "   UNIVERSIDAD DE CUNDINAMARCA   \n"
                + "         PROGRAMACION 1          \n"
                + "       LUIGUI ROMERO 201N        \n"
                + "            PARCIAL 3            \n"
                + "     NOTA APRECIATIVA => 4.4     \n"
                + "                                 \n"
                + "    1 => Clases padre e hijas    \n"
                + "    2 => Funciones financieras   \n"
                + "                                 \n"
                + "        DIGITE SU OPCIÓN       \n\n");
            opcion = scan.nextInt();

            switch(opcion) {
                case 1:
                    persona();
                    break;
                case 2:
                    funciones();
                    break;
                default:
                    JOptionPane.showMessageDialog(null, "Saliendo ...");
                    System.exit(0);
            }

            sw = JOptionPane.showInputDialog("Digite C para continuar - S para salir \n");
        } while (sw.equals("C") || sw.equals("c"));

        JOptionPane.showMessageDialog(null, "Saliendo ...");
    }

	/* ****************** */
	/*       PUNTO 1      */
	/* ****************** */

    private static void persona() {
        Persona[] per = new Persona[4];
        
        // Los valores pueden cambiar
        per[0] = new Persona("Persona", 1072675034, "Luigi", "Hombre", 170);
        per[1] = new Estudiante("Estudiante", 1072675034, "Luigi", "Hombre", 170, 2, 4.4);
        per[2] = new Docente("Docente", 1072675000, "Pedro", "Hombre", 180, "Programacion", 4);
        per[3] = new Funcionario("Funcionario", 1072670000, "Yesenia", "Mujer", 160, "Funcionaria publica", 4500000);

        per[0].MostrarPersona();
        per[1].MostrarPersona();
        per[2].MostrarPersona();
        per[3].MostrarPersona();
    }

    /* ****************** */
	/*    FINAL PUNTO 1   */
	/* ****************** */

    /* ****************** */
	/*       PUNTO 2      */
	/* ****************** */

    private static void funciones() {
        int opc;

        do {
            System.out.println("\n1- Valor futuro");
            System.out.println("2- Valor presente");
            System.out.println("3- Valor periodo");
            System.out.println("4- Valor intereses");
            System.out.println("5- Salir");
            
            System.out.print("\nDigite la opcion: ");
            opc = scan.nextInt();

            switch (opc) {
                case 1:
                    futuro();
                    break;
        
                case 2:
                    presente();
                    break;
        
                case 3:
                    periodo();
                    break;
        
                case 4:
                    interes();
                    break;
                
                default:
                    System.out.println("Saliendo...");
                    break;
            }
        } while (opc < 5);
	}

    public static void futuro()
    {
        DecimalFormat df = new DecimalFormat("#.000");
        double vf,vp,n,i;
        
        System.out.print("Digite el valor presente: ");
        vp = scan.nextDouble();

        System.out.print("Digite el valor periodo: ");
        n = scan.nextDouble();

        System.out.print("Digite el valor interes: ");
        i = scan.nextDouble();

        vf = vp*Math.pow((1+i),n);
        System.out.println("El valor futuro es: "+df.format(vf));
        System.out.println("El valor futuro es: 1111: "+Math.round(vf));
    }

    public static void presente()
    {
        DecimalFormat df = new DecimalFormat("#.000");
        double vf,vp,n,i;

        System.out.print("Digite el valor presente: ");
        vf = scan.nextDouble();

        System.out.print("Digite el valor periodo: ");
        n = scan.nextDouble();

        System.out.print("Digite el valor interes: ");
        i = scan.nextDouble();

        vp = vf*Math.pow((1+i), -n);
        System.out.println("El valor presente es: "+df.format(vp));
        System.out.println("El valor presente es: 1111: "+Math.round(vp));
    }

    public static void periodo()
    {
        DecimalFormat df = new DecimalFormat("#.000");
        double vf,vp,n,i;

        System.out.print("Digite el valor presente: ");
        vf = scan.nextDouble();

        System.out.print("Digite el valor presente: ");
        vp = scan.nextDouble();

        System.out.print("Digite el valor interes: ");
        i = scan.nextDouble();

        n = Math.log(vf/vp)/(Math.log(1+i));
        System.out.println("El valor periodo es: "+df.format(n));
        System.out.println("El valor periodo es: 1111: "+Math.round(n));
    }

    public static void interes()
    {
        DecimalFormat df = new DecimalFormat("#.000");
        double vf,vp,n,i;

        System.out.print("Digite el valor presente: ");
        vf = scan.nextDouble();

        System.out.print("Digite el valor presente: ");
        vp = scan.nextDouble();

        System.out.print("Digite el valor periodo: ");
        n = scan.nextDouble();

        i = Math.pow((vf/vp),1/n)-1;
        System.out.println("El valor interes es: "+df.format(i));
        System.out.println("El valor periodo es: 1111: "+Math.round(i));
    }

    /* ****************** */
	/*    FINAL PUNTO 2   */
	/* ****************** */
}