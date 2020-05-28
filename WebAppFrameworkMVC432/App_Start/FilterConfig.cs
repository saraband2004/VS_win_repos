using System.Web;
using System.Web.Mvc;

namespace WebAppFrameworkMVC432
{
    public class FilterConfig
    {
        public static void RegisterGlobalFilters(GlobalFilterCollection filters)
        {
            filters.Add(new HandleErrorAttribute());
        }
    }
}
