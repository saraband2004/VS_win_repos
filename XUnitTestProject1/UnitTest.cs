using CSharpConsoleApp1;
using System;
using Xunit;


namespace XUnitTestProject1
{
    public class UnitTest
    {
        [Fact]
        public void Test1()
        {
            Assert.True(11==11);
        }

        [Fact]
        public void Test2() {
            Solution s = new Solution();
            Assert.Throws<IndexOutOfRangeException> (()=>s.func(new int[34], 113));
        }
    }
}
