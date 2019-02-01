using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace vizeproje.BenimModelim
{
    public class KayitWindowDataContext : INotifyPropertyChanged
    {
        #region Property Changed Things
        public event PropertyChangedEventHandler PropertyChanged;
        protected void NotifyPropertyChanged([CallerMemberName] string propertyName = "")
        {
            var handler = PropertyChanged;
            if (handler != null)
            {
                handler(this, new PropertyChangedEventArgs(propertyName));
            }
        }

        #endregion

        private vizeproje.BenimModelim.AnaStok _yenihat = new BenimModelim.AnaStok();

        public vizeproje.BenimModelim.AnaStok yenihat
        {
              get
            {
                return _yenihat;
            }
            set
            {
                _yenihat = value;
                NotifyPropertyChanged();
            }

            

        }
    }
}
