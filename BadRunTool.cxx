#include "BadRunTool.h"

using std::ifstream;
using std::string;
using std::unordered_map;
using std::cout;

BadRunTool::BadRunTool(const char* badList) {
    const char* badList = "/path/to/bad_run.list";
    cout << "[LOG] BadRunTool: Reading bad run list " << badList << "...";
    ifstream fin;
    fin.open(badList);
    string tmp;
    while(std::getline(fin, tmp)) {
        runList[std::stoi(tmp)] = 1;
    }
    fin.close();
    cout << " -> Done.\n";
    cout << "[LOG] " << runList.size() << " bad runs read.\n";
}

bool BadRunTool::isBadRun(Int_t runid) {
    return runList[runid];
}