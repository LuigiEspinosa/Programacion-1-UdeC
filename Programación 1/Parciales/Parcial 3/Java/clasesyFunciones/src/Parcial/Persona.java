package Parcial;

public class Persona {
    private String tipo;
    private int identificacion;
    private String nombre;
    private String sexo;
    private float estatura;

	// Constructor
	public Persona(String _tipo, int _identificacion, String _nombre, String _sexo, float _estatura)
	{
		tipo = _tipo;
		identificacion = _identificacion;
		nombre = _nombre;
		sexo = _sexo;
		estatura = _estatura;
	}

	// Funciones (Herencia)
	public void MostrarPersona()
	{
        System.out.print(
            "\n" + tipo + "\n"
            + "La identificación es: " + identificacion + "\n"
            + "El nombre es: "         + nombre         + "\n"
            + "El sexo es: "           + sexo           + "\n"
            + "La estatura es: "       + estatura       + "cm"
            + "\n");
	}
}
