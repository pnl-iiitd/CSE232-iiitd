#include "byte_stream.hh"

#include <algorithm>

// You will need to add private members to the class declaration in `byte_stream.hh`

/* Replace all the dummy definitions inside the methods in this file. */


using namespace std;

ByteStream::ByteStream(const size_t capa)
{}

size_t ByteStream::write(const string &data) {
  return 0;
}

//! \param[in] len bytes will be copied from the output side of the buffer
string ByteStream::peek_output(const size_t len) const {
  return {};
}

//! \param[in] len bytes will be removed from the output side of the buffer
void ByteStream::pop_output(const size_t len) {

}

//! Read (i.e., copy and then pop) the next "len" bytes of the stream
//! \param[in] len bytes will be popped and returned
//! \returns a string
std::string ByteStream::read(const size_t len) {
  return {};
}

void ByteStream::end_input() { }

bool ByteStream::input_ended() const { return false;}

size_t ByteStream::buffer_size() const {return 0; }

bool ByteStream::buffer_empty() const {return false; }

bool ByteStream::eof() const { return false; }

size_t ByteStream::bytes_written() const { return 0; }

size_t ByteStream::bytes_read() const { return 0;  }

size_t ByteStream::remaining_capacity() const { return 0; }
