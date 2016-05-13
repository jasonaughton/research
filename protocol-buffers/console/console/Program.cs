// <copyright file="Program.cs" company="Bauer Consumer Media">
//     Copyright (c) 2016 Bauer Consumer Media. All rights reserved.
// </copyright>

namespace console
{
    using System.IO;
    using Google.Protobuf;
    using Research.ProtoBuf;

    /// <summary>
    /// Class Program.
    /// </summary>
    public class Program
    {
        /// <summary>
        /// Defines the entry point of the application.
        /// </summary>
        /// <param name="args">The arguments.</param>
        public static void Main(string[] args)
        {
            var jason = new Person
            {
                DateOfBirth = "1968-11-27",
                Email = "jason@mpc.com",
                Id = 1337,
                Name = "Jason",
                Phones =
                {
                    new Person.Types.PhoneNumber
                    {
                        Number = "468459", Type = Person.Types.PhoneType.Work
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "123456", Type = Person.Types.PhoneType.Home
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "78912012", Type = Person.Types.PhoneType.Mobile
                    }
                }
            };

            var fred = new Person
            {
                DateOfBirth = "1968-11-27",
                Email = "fred@mpc.com",
                Id = 1337,
                Name = "fred",
                Phones =
                {
                    new Person.Types.PhoneNumber
                    {
                        Number = "468459", Type = Person.Types.PhoneType.Work
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "123456", Type = Person.Types.PhoneType.Home
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "78912012", Type = Person.Types.PhoneType.Mobile
                    }
                }
            };

            var brian = new Person
            {
                DateOfBirth = "1968-11-27",
                Email = "brian@mpc.com",
                Id = 1337,
                Name = "brian",
                Phones =
                {
                    new Person.Types.PhoneNumber
                    {
                        Number = "468459", Type = Person.Types.PhoneType.Work
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "123456", Type = Person.Types.PhoneType.Home
                    },
                    new Person.Types.PhoneNumber
                    {
                        Number = "78912012", Type = Person.Types.PhoneType.Mobile
                    }
                }
            };

            var book = new AddressBook
            {
                People =
                {
                    jason,
                    brian,
                    fred
                }
            };

            using (var output = File.Create("buffer.dat"))
            {
                book.WriteTo(output);
            }

            //using (var input = File.OpenRead("buffer.dat"))
            //{
            //    var anotherBook = AddressBook.Parser.ParseFrom(input);
            //}
        }
    }
}
