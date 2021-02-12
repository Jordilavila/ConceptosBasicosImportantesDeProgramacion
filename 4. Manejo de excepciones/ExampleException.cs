using System;

namespace model4
{
    class ExampleException : Exception
    {
        public ExampleException() : base()
        {

        }

        public ExampleException(string message) : base(message)
        {

        }

        public ExampleException(string message, Exception innerException) : base(message, innerException)
        {

        }
    }
}
