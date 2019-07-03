/*
 * Created by SharpDevelop.
 * User: USRGAM
 * Date: 26/06/2019
 * Time: 10:24
 * 
 * To change this template use Tools | Options | Coding | Edit Standard Headers.
 */
namespace PrjCrearSolucion
{
	partial class MainForm
	{
		/// <summary>
		/// Designer variable used to keep track of non-visual components.
		/// </summary>
		private System.ComponentModel.IContainer components = null;
		private System.Windows.Forms.DataGridView dgvLogs;
		private System.Windows.Forms.DataGridViewTextBoxColumn tipo;
		private System.Windows.Forms.DataGridViewTextBoxColumn Log;
		private System.Windows.Forms.Button btnAnadirLog;
		private System.Windows.Forms.Button btnLeerDirectorio;
		private System.Windows.Forms.TextBox txbLeerDirectorio;
		private System.Windows.Forms.Button btnListarDitectorio;
		private System.Windows.Forms.TextBox txbListarDitectorio;
		//private System.Windows.Forms.Button btnListarDitectorio;
		//private System.Windows.Forms.TextBox txbListarDitectorio;
		private System.Windows.Forms.Button btnCrearDirectorio;
		private System.Windows.Forms.TextBox txbCrearDirectorio;
		private System.Windows.Forms.Button txbCrearArchivo;
		private System.Windows.Forms.TextBox textBox1;
		private System.Windows.Forms.Button btnCopiarDirectorio;
		private System.Windows.Forms.TextBox txbIniciaCopia;
		private System.Windows.Forms.TextBox txbFinalizaCopia;
		
		/// <summary>
		/// Disposes resources used by the form.
		/// </summary>
		/// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
		protected override void Dispose(bool disposing)
		{
			if (disposing) {
				if (components != null) {
					components.Dispose();
				}
			}
			base.Dispose(disposing);
		}
		
		/// <summary>
		/// This method is required for Windows Forms designer support.
		/// Do not change the method contents inside the source code editor. The Forms designer might
		/// not be able to load this method if it was changed manually.
		private void InitializeComponent()
		{
			this.dgvLogs = new System.Windows.Forms.DataGridView();
			this.tipo = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.Log = new System.Windows.Forms.DataGridViewTextBoxColumn();
			this.btnAnadirLog = new System.Windows.Forms.Button();
			this.btnLeerDirectorio = new System.Windows.Forms.Button();
			this.txbLeerDirectorio = new System.Windows.Forms.TextBox();
			this.btnListarDitectorio = new System.Windows.Forms.Button();
			this.txbListarDitectorio = new System.Windows.Forms.TextBox();
			this.btnCrearDirectorio = new System.Windows.Forms.Button();
			this.txbCrearDirectorio = new System.Windows.Forms.TextBox();
			this.txbCrearArchivo = new System.Windows.Forms.Button();
			this.textBox1 = new System.Windows.Forms.TextBox();
			this.btnCopiarDirectorio = new System.Windows.Forms.Button();
			this.txbIniciaCopia = new System.Windows.Forms.TextBox();
			this.txbFinalizaCopia = new System.Windows.Forms.TextBox();
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).BeginInit();
			this.SuspendLayout();
			// 
			// dgvLogs
			// 
			this.dgvLogs.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
			| System.Windows.Forms.AnchorStyles.Right)));
			this.dgvLogs.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
			this.dgvLogs.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
			this.tipo,
			this.Log});
			this.dgvLogs.Location = new System.Drawing.Point(54, 123);
			this.dgvLogs.Name = "dgvLogs";
			this.dgvLogs.Size = new System.Drawing.Size(709, 126);
			this.dgvLogs.TabIndex = 0;
			this.dgvLogs.CellDoubleClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.DgvLogsCellDoubleClick);
			// 
			// tipo
			// 
			this.tipo.HeaderText = "Tipo Log";
			this.tipo.Name = "tipo";
			this.tipo.ReadOnly = true;
			// 
			// Log
			// 
			this.Log.HeaderText = "Descripcion";
			this.Log.Name = "Log";
			this.Log.ReadOnly = true;
			// 
			// btnAnadirLog
			// 
			this.btnAnadirLog.Location = new System.Drawing.Point(54, 255);
			this.btnAnadirLog.Name = "btnAnadirLog";
			this.btnAnadirLog.Size = new System.Drawing.Size(75, 23);
			this.btnAnadirLog.TabIndex = 2;
			this.btnAnadirLog.Text = "Anadir Log";
			this.btnAnadirLog.UseVisualStyleBackColor = true;
			this.btnAnadirLog.Click += new System.EventHandler(this.BtnAnadirLogClick);
			// 
			// btnLeerDirectorio
			// 
			this.btnLeerDirectorio.Location = new System.Drawing.Point(54, 80);
			this.btnLeerDirectorio.Name = "btnLeerDirectorio";
			this.btnLeerDirectorio.Size = new System.Drawing.Size(95, 23);
			this.btnLeerDirectorio.TabIndex = 3;
			this.btnLeerDirectorio.Text = "Leer Directorio";
			this.btnLeerDirectorio.UseVisualStyleBackColor = true;
			this.btnLeerDirectorio.Click += new System.EventHandler(this.BtnLeerDirectorioClick);
			// 
			// txbLeerDirectorio
			// 
			this.txbLeerDirectorio.Location = new System.Drawing.Point(54, 37);
			this.txbLeerDirectorio.Name = "txbLeerDirectorio";
			this.txbLeerDirectorio.Size = new System.Drawing.Size(95, 20);
			this.txbLeerDirectorio.TabIndex = 4;
			// 
			// btnListarDitectorio
			// 
			this.btnListarDitectorio.Location = new System.Drawing.Point(198, 80);
			this.btnListarDitectorio.Name = "btnListarDitectorio";
			this.btnListarDitectorio.Size = new System.Drawing.Size(100, 23);
			this.btnListarDitectorio.TabIndex = 5;
			this.btnListarDitectorio.Text = "Listar Directorio";
			this.btnListarDitectorio.UseVisualStyleBackColor = true;
			this.btnListarDitectorio.Click += new System.EventHandler(this.BtnListarDitectorioClick);
			// 
			// txbListarDitectorio
			// 
			this.txbListarDitectorio.Location = new System.Drawing.Point(198, 37);
			this.txbListarDitectorio.Name = "txbListarDitectorio";
			this.txbListarDitectorio.Size = new System.Drawing.Size(100, 20);
			this.txbListarDitectorio.TabIndex = 11;
			// 
			// btnCrearDirectorio
			// 
			this.btnCrearDirectorio.Location = new System.Drawing.Point(498, 80);
			this.btnCrearDirectorio.Name = "btnCrearDirectorio";
			this.btnCrearDirectorio.Size = new System.Drawing.Size(100, 23);
			this.btnCrearDirectorio.TabIndex = 7;
			this.btnCrearDirectorio.Text = "Crear Directorio";
			this.btnCrearDirectorio.UseVisualStyleBackColor = true;
			// 
			// txbCrearDirectorio
			// 
			this.txbCrearDirectorio.Location = new System.Drawing.Point(498, 37);
			this.txbCrearDirectorio.Name = "txbCrearDirectorio";
			this.txbCrearDirectorio.Size = new System.Drawing.Size(100, 20);
			this.txbCrearDirectorio.TabIndex = 8;
			// 
			// txbCrearArchivo
			// 
			this.txbCrearArchivo.Location = new System.Drawing.Point(349, 80);
			this.txbCrearArchivo.Name = "txbCrearArchivo";
			this.txbCrearArchivo.Size = new System.Drawing.Size(100, 23);
			this.txbCrearArchivo.TabIndex = 9;
			this.txbCrearArchivo.Text = "Crear Archivo";
			this.txbCrearArchivo.UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this.textBox1.Location = new System.Drawing.Point(349, 37);
			this.textBox1.Name = "textBox1";
			this.textBox1.Size = new System.Drawing.Size(100, 20);
			this.textBox1.TabIndex = 10;
			// 
			// btnCopiarDirectorio
			// 
			this.btnCopiarDirectorio.Location = new System.Drawing.Point(632, 80);
			this.btnCopiarDirectorio.Name = "btnCopiarDirectorio";
			this.btnCopiarDirectorio.Size = new System.Drawing.Size(224, 23);
			this.btnCopiarDirectorio.TabIndex = 12;
			this.btnCopiarDirectorio.Text = "Copiar Directorio";
			this.btnCopiarDirectorio.UseVisualStyleBackColor = true;
			// 
			// txbIniciaCopia
			// 
			this.txbIniciaCopia.Location = new System.Drawing.Point(632, 37);
			this.txbIniciaCopia.Name = "txbIniciaCopia";
			this.txbIniciaCopia.Size = new System.Drawing.Size(100, 20);
			this.txbIniciaCopia.TabIndex = 13;
			// 
			// txbFinalizaCopia
			// 
			this.txbFinalizaCopia.Location = new System.Drawing.Point(776, 37);
			this.txbFinalizaCopia.Name = "txbFinalizaCopia";
			this.txbFinalizaCopia.Size = new System.Drawing.Size(100, 20);
			this.txbFinalizaCopia.TabIndex = 15;
			// 
			// MainForm
			// 
			this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
			this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
			this.ClientSize = new System.Drawing.Size(913, 396);
			this.Controls.Add(this.txbFinalizaCopia);
			this.Controls.Add(this.txbIniciaCopia);
			this.Controls.Add(this.btnCopiarDirectorio);
			this.Controls.Add(this.textBox1);
			this.Controls.Add(this.txbCrearArchivo);
			this.Controls.Add(this.txbCrearDirectorio);
			this.Controls.Add(this.btnCrearDirectorio);
			this.Controls.Add(this.txbListarDitectorio);
			this.Controls.Add(this.btnListarDitectorio);
			this.Controls.Add(this.txbLeerDirectorio);
			this.Controls.Add(this.btnLeerDirectorio);
			this.Controls.Add(this.btnAnadirLog);
			this.Controls.Add(this.dgvLogs);
			this.Name = "MainForm";
			this.Text = "PrjCrearSolucion";
			this.Click += new System.EventHandler(this.BtnAnadirLogClick);
			((System.ComponentModel.ISupportInitialize)(this.dgvLogs)).EndInit();
			this.ResumeLayout(false);
			this.PerformLayout();

		}
	}
}
