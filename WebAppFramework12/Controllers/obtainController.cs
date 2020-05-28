using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace WebAppFramework12.Controllers
{
    public class obtainController : ApiController
    {
        Center center = Center.getCenter();
        // GET: api/obtain
        public IEnumerable<string> Get()
        {
            return new string[] { "value1", "value2" };
        }

        // GET: api/obtain/5
        public string Get(int id)
        {
            
            if (center.map.ContainsKey(id)) {
                return center.map[id];
            }

            return " key-value not found ";
        }

        // POST: api/obtain
        public void Post([FromBody]string value)
        {
        }

        // PUT: api/obtain/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE: api/obtain/5
        public void Delete(int id)
        {
        }
    }
}
