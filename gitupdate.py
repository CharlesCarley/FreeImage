import sys, os, subprocess



def trim(line):
    line = line.replace('\t', '')
    line = line.replace('\n', '')
    line = line.replace(' ', '')
    return line
    
def initModules():
    subprocess.call("git submodule init")
    subprocess.call("git submodule update --init --merge")

def updateModules(path):
    print("==> " + path)
    subprocess.call("git checkout master")
    subprocess.call("git pull")



def main():
    initModules()


    cur_dir = os.getcwd()

    file = open(os.getcwd() + os.sep + ".gitmodules", mode = 'r', encoding = "utf8")
    lines = file.readlines()

    for line in lines:
        line = trim(line)

        if (line.find("path=") != -1):

            path = line.replace("path=", '')
            try:
                os.chdir(cur_dir + os.sep + path)
            except:
               print("Could not change directory to %s"%path)

            updateModules(path)
            os.chdir(cur_dir)

if __name__== '__main__':
    main()