package Parcial;

public class Estudiante extends Persona {
    private int curso;
	private double nota;

	public Estudiante(String _tipo, int _identificacion, String _nombre, String _sexo, float _estatura, int _curso, double _nota)
	{
		super(_tipo, _identificacion, _nombre, _sexo, _estatura);
		curso = _curso;
		nota = _nota;
	}

    @Override
	public final void MostrarPersona()
	{
		super.MostrarPersona();

        System.out.print(
              "Su curso es: " + curso  + "\n"
            + "Su nota es: "  + nota   + "\n"
            + "\n");
	}
}
