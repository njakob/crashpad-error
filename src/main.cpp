#include <cstdlib>
#include <crashpad/client/crashpad_client.h>
#include <crashpad/client/settings.h>
#include <string>

int main(int argc, char* argv[]) {
  base::FilePath database(L"dummy");
  base::FilePath handler(L"dummy");
  std::string url("dummy");
  std::map<std::string, std::string> annotations;
  std::vector<std::string> arguments;
  crashpad::CrashpadClient client;
  client.StartHandler(handler, database, database, url, annotations, arguments, true, false);

  return EXIT_SUCCESS;
}
