using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;


namespace Dotnet
{

    [Guid("B9228911-A6C7-40E5-864F-ECD7926564A0")]
    public interface IDotnet
    {
        void Initialize();
        void Dispose();
        int Add(int x, int y);
    }


    public class Dotnet : IDotnet
    {
        public int Add(int x, int y)
        {
            return x + y;
        }

        public void Dispose()
        {
            throw new NotImplementedException();
        }

        public void Initialize()
        {
            throw new NotImplementedException();
        }
    }
}


