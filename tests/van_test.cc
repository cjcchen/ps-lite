#include "ps/internal/van.h"
using namespace ps;

void test() {
  Van* van = Van::Create("zmq");

  van->Start();

  Message msg;
  int ret = van->Send(msg);
  printf("send ret = %d\n",ret);

  van->Stop();
}

int main(int argc, char *argv[]) {
    test();
  return 0;
}
