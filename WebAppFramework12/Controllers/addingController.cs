using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;

namespace WebAppFramework12.Controllers
{
    public class addingController : ApiController
    {
        // GET: api/adding
        Center center = Center.getCenter();
        
        public string Get(int id) {
            return "added";
        }

        // GET: api/adding/5
        [Route("api/adding/{id:int}")]
        [HttpGet]
        public IEnumerable<string> Get(int id, string s)
        {
            if (center.map.ContainsKey(id))
            {
                return new string[] { " adding ", " is ", " unsuccessful " };
            }
            center.map.Add(id, s);
            return new string[] { "added", "value" };
        }

        // POST: api/adding
        public void Post([FromBody]string value)
        {
        }

        // PUT: api/adding/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE: api/adding/5
        public void Delete(int id)
        {
        }
    }
}
