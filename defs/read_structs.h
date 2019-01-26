
//read from socket the content
const char *f_sock_file;

//read file from file system
extern void read_fs(void);

//read file, test its content
extern void check_data(void);

//hold data
const char *f_buffer;

typedef struct mongo_client{

}mongo_client;

typedef struct file_type{

}file_type;
enum files{
	Dev_socket,
	Dev_file,
	Dev_pipe
};
