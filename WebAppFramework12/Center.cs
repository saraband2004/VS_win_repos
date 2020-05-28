using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;

namespace WebAppFramework12
{
    public class Center
    {   
        private static Center center;
        private Center() {
            map = new Dictionary<int, string>();
        }
        public Dictionary<int, string> map;
        public static Center getCenter() {
            if (center == null) {
                center = new Center();
            }
            return center;
        }
    }
}