using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace vizeproje
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void button_Click_1(object sender, RoutedEventArgs e)
        {
            using (BenimModelim.Model1Container baglanti = new BenimModelim.Model1Container())
            {
                var hatlistesi  = baglanti.hat1Set.ToList();
                var hatlistesi1 = baglanti.hat2Set.ToList();
                var hatlistesi2 = baglanti.hat3Set.ToList();
                var hatlistesi3 = baglanti.hat4Set.ToList();
            }
        }
        
    }
}
