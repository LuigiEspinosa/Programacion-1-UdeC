package Parcial;

public class Funcionario extends Persona
{
	private String cargo;
	private double sueldo;

	public Funcionario(String _tipo, int _identificacion, String _nombre, String _sexo, float _estatura, String _cargo, double _sueldo)
	{
		super(_tipo, _identificacion, _nombre, _sexo, _estatura);
		cargo = _cargo;
		sueldo = _sueldo;
	}

    @Override
	public final void MostrarPersona()
	{
		super.MostrarPersona();

        System.out.print(
              "Su cargo es: "    + cargo   + "\n"
            + "Su sueldo es: $"  + sueldo  + "\n"
            + "\n");
	}
}
