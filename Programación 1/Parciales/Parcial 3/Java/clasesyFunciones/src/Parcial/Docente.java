package Parcial;

public class Docente extends Persona
{
	private String materia;
	private int categoria;

	public Docente(String _tipo, int _identificacion, String _nombre, String _sexo, float _estatura, String _materia, int _categoria)
	{
		super(_tipo, _identificacion, _nombre, _sexo, _estatura);
		materia = _materia;
		categoria = _categoria;
	}

    @Override
	public final void MostrarPersona()
	{
		super.MostrarPersona();

        System.out.print(
              "Su materia es: " + materia    + "\n"
            + "Categoria: "     + categoria  + "\n"
            + "\n");
	}
}