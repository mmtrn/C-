//------------------------------------------------------------------------------
// <auto-generated>
//    This code was generated from a template.
//
//    Manual changes to this file may cause unexpected behavior in your application.
//    Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace vizeproje.BenimModelim
{
    using System;
    using System.Collections.Generic; 
    using System.ComponentModel; 
    using System.Runtime.CompilerServices; 
    using System.Collections.ObjectModel; 
    public partial class AraStok4: INotifyPropertyChanged
    {
    
    public event PropertyChangedEventHandler PropertyChanged;
 protected void NotifyPropertyChanged([CallerMemberName] string propertyName = "")
{
var handler = PropertyChanged;
if (handler != null)
{
handler(this, new PropertyChangedEventArgs(propertyName));
}
}

    
    
        public AraStok4()
        {
            this.AnaStok = new ObservableCollection<AnaStok>();
            this.hat4 = new ObservableCollection<hat4>();
        }
    
        private int _Id; 
        public int Id
        {
            get { return _Id; } 
            set
            {
                if (value == _Id) return;
                _Id = value;
                NotifyPropertyChanged();
            }
        }
    
        private string _kapasite4; 
        public string kapasite4
        {
            get { return _kapasite4; } 
            set
            {
                if (value == _kapasite4) return;
                _kapasite4 = value;
                NotifyPropertyChanged();
            }
        }
    
    
        public virtual ObservableCollection<AnaStok> AnaStok { get; set; }
        public virtual ObservableCollection<hat4> hat4 { get; set; }
    }
}
