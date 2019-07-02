/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:24
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Windows.Forms;
using System.IO;


namespace PrjCrearSolucion
{
	/// <summary>
	/// Description of MainForm.
	/// </summary>
	public partial class MainForm : Form
	{
		public MainForm()
		{
			//
			// The InitializeComponent() call is required for Windows Forms designer support.
			//
			InitializeComponent();
			
			//
			// TODO: Add constructor code after the InitializeComponent() call.
			//
		}
		void BtnAnadirLogClick(object sender, EventArgs e)
		{
			string log= "Pueba de log";
			string tipo= "info";
			int posicionNuevoLogs = dgvLogs.Rows.Add();
			
			dgvLogs.Rows[posicionNuevoLogs].Cells[0].Value = dgvLogs;
			dgvLogs.Rows[posicionNuevoLogs].Cells[1].Value = dgvLogs;
		
		}
		void DgvLogsCellDoubleClick(object sender, DataGridViewCellEventArgs e)
		{
			DataGridViewTextBoxCell celdaTipo = (DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[0];
			DataGridViewTextBoxCell celdaLog = (DataGridViewTextBoxCell)dgvLogs.Rows[e.RowIndex].Cells[1];
			
			if(celdaTipo.Value != null){
			string tipo = celdaTipo.Value.ToString();
			string Log = celdaTipo.Value.ToString();
			
			//Mensaje
			//titulo
			//botones
			//Icono
			
			MessageBoxIcon icono;
			if(tipo == "error")
			{
				icono = MessageBoxIcon.Error;
			}
			else
			{
				icono = MessageBoxIcon.Information;
			}
			
			MessageBoxButtons botones = MessageBoxButtons.OK;
			MessageBox.Show(Log,tipo,botones,icono);
			
			}
		}
		void BtnLeerDirectorioClick(object sender, EventArgs e)
		{
			try{//ok
				string path = txbLeerDirectorio.Text;
				//Directorio
				DirectoryInfo infoDirectorio = new DirectoryInfo(@path);
				
				string fechaCreacion = infoDirectorio.CreationTime.ToString();
				string nombreCompleto = infoDirectorio.FullName.ToString();
				string directorioPadre = infoDirectorio.Parent.ToString();
				string directorioRaiz = infoDirectorio.Root.ToString();
				
				
				EscribirLog("info","Leyendo Directorio: " + fechaCreacion, dgvLogs);
				EscribirLog("info","Leyendo Directorio: " + nombreCompleto, dgvLogs);
				EscribirLog("info","Leyendo Directorio: " + directorioPadre, dgvLogs);
				EscribirLog("info","Leyendo Directorio: " + directorioRaiz, dgvLogs);
				
				FileInfo[] archivosDeDirectorio = infoDirectorio.GetFiles();
				
				foreach(FileInfo archivo in archivosDeDirectorio)
				{
					EscribirLog("info","Archivo: " + archivo.CreationTime,dgvLogs);
					EscribirLog("info","Archivo: " + archivo.FullName,dgvLogs);
					EscribirLog("info","Archivo: " + archivo.Extension,dgvLogs);
					EscribirLog("info","Archivo: " + archivo.LastAccessTime,dgvLogs);
					EscribirLog("info","Archivo: " + archivo.IsReadOnly,dgvLogs);
				}
				
				
			}
			catch(Exception error)
			{ //ERROR
				EscribirLog("error", error.ToString(), dgvLogs);
				
			}
			
		}
		
		void EscribirLog(string tipo,string log, DataGridView dgv){
			int posicionNuevoLogs= dgv.Rows.Add();
			dgv.Rows[posicionNuevoLogs].Cells[0].Value = tipo;
			dgv.Rows[posicionNuevoLogs].Cells[1].Value = log;
			if(tipo == "error")
			{
				dgv.Rows[posicionNuevoLogs].Cells[0].Style.BackColor = Color.Red;
			}
			else
			{
				dgv.Rows[posicionNuevoLogs].Cells[0].Style.BackColor = Color.AliceBlue;
			}
			
		}
		void BtnListarDitectorioClick(object sender, EventArgs e)
		{
			try{
				string path = txbListarDitectorio.Text;
				string[] arregloDirectorios = Directory.GetDirectories(@path);
				int numeroDirectorios = arregloDirectorios.Length;
				
				EscribirLog("info","Numero Directorios: " + numeroDirectorios.ToString(), dgvLogs);
				
				foreach (string directorio in arregloDirectorios)
				{
					EscribirLog("info","Directorio: " + txbLeerDirectorio, dgvLogs);
				}
				
			}
			catch (Exception error){
				EscribirLog("error",error.ToString(), dgvLogs);
			}
		}
		
		void BtnCrearArchivoClick(object sender, EventArgs e)
		{
			try
			{
				string path = txbCrearArchivo.Text;
				StreamWriter escritura = File.CreateText();
				
				escritura.WriteLine("Hola Archivo");
				escritura.WriteLine("Segunda linea");
				escritura.WriteLine("Tercera linea");
				
				// Siempre cerrar el archivo despues de usarlo.
				escritura.Close();
				
				EscribirLog("info","Escritura de Archivos: se escribio de archivo",dgvLogs);
				
			}
			catch(Exception error)
			{
				EscribirLog("error",error.ToString(),dgvLogs);
			}
			
		}
		
		void BtnCrearDirectorioClick(object sender, EventArgs e)
		{
			try
			{
				string patch =txbCrearDirectorio.Text;
				Directory.CreateDirectory(@path);
				
				EscribirLog("info", "Crear Directorios: Se creo el directorio" + path, dgvLogs);
			}
			catch(Exception error){
				EscribirLog("error", error.ToString(), dgvLogs);
			}
		}
		
	}
}
