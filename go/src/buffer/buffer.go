package main

import (
	pb "addressbook"
	"fmt"
	proto "github.com/golang/protobuf/proto"
	"io/ioutil"
	"log"
)

func main() {

	outbook := &pb.AddressBook{
		People: []*pb.Person{
			{
				Id:          1234,
				Name:        "Jason",
				Email:       "jaosn@bason.com",
				DateOfBirth: "2000-11-08",
				Phones: []*pb.Person_PhoneNumber{
					{Number: "468000", Type: pb.Person_Home},
					{Number: "864000", Type: pb.Person_Mobile},
					{Number: "731231", Type: pb.Person_Work},
				},
			},
		},
	}

	out(outbook)
	in()
}

func out(book *pb.AddressBook) {

	fmt.Println("out:")
	fmt.Println(book.String())
	fmt.Println()

	out, err := proto.Marshal(book)
	if err != nil {
		log.Fatalln("Unable to encode address book:", err)
	}
	if err := ioutil.WriteFile("buffer.dat", out, 0644); err != nil {
		log.Fatalln("Unable to write address book:", err)
	}
}

func in() {

	in, err := ioutil.ReadFile("buffer.dat")
	if err != nil {
		log.Fatalln("Error reading file:", err)
	}
	inbook := &pb.AddressBook{}
	if err := proto.Unmarshal(in, inbook); err != nil {
		log.Fatalln("Unable to parse address book:", err)
	}

	fmt.Println("in:")
	fmt.Println(inbook.String())
	fmt.Println()
}
