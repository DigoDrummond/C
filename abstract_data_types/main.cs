using System;
using System.Collections;

class Fila
{
    ArrayList arrayList;
    public Fila()
    {
        arrayList = new ArrayList();
    }
    public void Insert(int value{
        arrayList.Add(valor);
    }
    public int Remove(int value)
    {
        int res = (int)arrayList[0];
        arrayList.RemoveAt(0);
        return res;
    }
    public void Show()
    {
        foreach (int i in arrayList)
        {
            Console.WriteLine(i);
        }
    }
    class ExercicioComplementarU02S01EC01
    {
        public static void Main(string[] args)
        {
            Fila fila = new Fila();

            for (int i = 0; i < 10; i++)
            {
                fila.Inserir(i);
            }
            Console.WriteLine(fila.Remover());
            fila.Inserir(10);
            Console.WriteLine(fila.Remover());
            fila.Inserir(11);
            Console.WriteLine(fila.Remover());
            fila.Inserir(12);

            Console.WriteLine("======== Mostrar");
            fila.Mostrar();
        }
    }
}