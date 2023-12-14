using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Calculadora_2._0_deleandrou
{
    public partial class Form1 : Form
    {
        double Numero1 = 0;
        double Numero2 = 0;
        char Operador;
        public Form1()
        {
            InitializeComponent();
        }

        private void agregar_num (object sender, EventArgs e)
        {
            var boton = ((Button)sender);

            if (resultado_textbox.Text=="0")
                resultado_textbox.Text = "";

            resultado_textbox.Text += boton.Text;
        }

        private void click_operador(object sender, EventArgs e)
        {
            var boton = ((Button)sender);
            Operador = Convert.ToChar(boton.Tag);

            Numero1 = Convert.ToDouble(resultado_textbox.Text);
            switch (Operador)
            {
                case '²':
                    Numero1 = Math.Pow(Numero1, 2);
                    resultado_textbox.Text = Numero1.ToString();
                    break;
                case '√':
                    Numero1 = Math.Sqrt(Numero1);
                    resultado_textbox.Text = Numero1.ToString();
                    break;
                default:
                    resultado_textbox.Text = "0";
                    break;
            }
        }

        private void Igual_button_Click(object sender, EventArgs e)
        {
            Numero2 = Convert.ToDouble(resultado_textbox.Text);

            switch (Operador)
            {
                case '+':
                    resultado_textbox.Text = (Numero1 + Numero2).ToString();
                    Numero1 = Convert.ToDouble(resultado_textbox.Text);
                    break;
                case '-':
                    resultado_textbox.Text = (Numero1 - Numero2).ToString();
                    Numero1 = Convert.ToDouble(resultado_textbox.Text);
                    break;
                case 'x':
                    resultado_textbox.Text = (Numero1 * Numero2).ToString();
                    Numero1 = Convert.ToDouble(resultado_textbox.Text);
                    break;
                case '÷':
                    if (resultado_textbox.Text=="0")
                     MessageBox.Show("No se puede dividir entre '0'!"); 
                    else
                    resultado_textbox.Text = (Numero1 / Numero2).ToString();
                    Numero1 = Convert.ToDouble(resultado_textbox.Text);
                    break;
            }

             Numero1 = 0;
             Numero2 = 0;

        }

        private void buttonDEL_Click(object sender, EventArgs e)
        {
            if (resultado_textbox.Text.Length > 1) 
            { 
                resultado_textbox.Text=resultado_textbox.Text.Substring(0, resultado_textbox.Text.Length - 1);
            }
            else { resultado_textbox.Text = "0"; }
        }

        private void buttonC_Click(object sender, EventArgs e)
        {
            Numero1 = 0;
            Numero2 = 0;
            resultado_textbox.Text = "0";
            Operador = '\0';
        }

        private void buttonCE_Click(object sender, EventArgs e)
        {
            Numero2 = 0;
            resultado_textbox.Text = "0";
        }

        private void button17_Click(object sender, EventArgs e)
        {
            if (!resultado_textbox.Text.Contains(".")) 
            {
                resultado_textbox.Text += ".";
            }
        }

        private void button18_Click(object sender, EventArgs e)
        {
            Numero1 = Convert.ToDouble(resultado_textbox.Text);
            Numero1 *= -1;
            resultado_textbox.Text = Numero1.ToString();
        }
    }
}
