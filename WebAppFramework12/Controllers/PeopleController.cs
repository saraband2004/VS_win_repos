using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Web.Http;
using WebAppFramework12.Models;

namespace WebAppFramework12.Controllers
{
    public class PeopleController : ApiController
    {
        // GET: api/People
        public IEnumerable<string> Get()
        {
            return new string[] { " People value1", " People value2" };
        }

        // GET: api/People/5
        public Person Get(int id)
        {
            return new Person("jimmy" , 1999);
        }

        // POST: api/People
        public void Post([FromBody]string value)
        {
        }

        // PUT: api/People/5
        public void Put(int id, [FromBody]string value)
        {
        }

        // DELETE: api/People/5
        public void Delete(int id)
        {
        }



        [Route("api/People/rng")]
        [HttpGet]
        public string GetRng() {
            return "12312312";
        }


        [Route("api/People/rng/{id1:int}/{id2:int}")]
        [HttpGet]
        public int GetRng(int id1, int id2)
        {
            return id1*10000+id2;
        }


        [Route("api/People/tot/{id:int}")]
        [HttpGet]
        public int GetRng(int id)
        {
            return 9999999;
        }

    }
}
