int *ptr;
int ret;
int fd = shm_open("/shm", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

if (fd == -1){
    perror("shm");
    exit(1);
}

ret = ftruncate(fd, sizeof(int));

if (ret == -1){
    perror("shm");
    exit(2);
}

ptr = mmap(0, sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

if (ptr == MAP_FAILED){
    perror("shm-mmap");
    exit(3);
}

//fazer coisas com a memória partilhada

ret = munmap(ptr, sizeof(int));

if (ret == -1){
    perror("/shm");
    exit(7);
}

ret = shm_unlink("/shm");

if (ret == -1){
    perror("/shm");
    exit(8);
}

exit(0);