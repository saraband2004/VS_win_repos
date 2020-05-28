using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace WebAppFramework12.Controllers
{
    
    public class ValuesController : ApiController
    {
        // GET api/values
        static HashSet<int> set = new HashSet<int>();
        public IEnumerable<string> Get()
        {
            return new string[] { "value1", "value2" };
        }

        // GET api/values/5
        public string Get(int id)
        {
            if (id == 55) {
                return " Hello World ";
            }
            set.Add(id);
            if (set.Contains(id+1)) {
                return "you";
            }
            return " v a l u e ";
        }

        // POST api/values
        public void Post([FromBody]string value)
        {
        }

        // PUT api/values/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE api/values/5
        public void Delete(int id)
        {
        }
    }
}
