## Simple Linux Kernel Module
With Visual Studio Code


### Preparation

#### Tools (Debian/Ubuntu)

```sh
sudo apt install gcc make build-essential
```

####  [Visual Studio Code C/C++ Extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)

Open the file [.vscode/c_cpp_properties.json](.vscode/c_cpp_properties.json) and replace `linux-headers-5.15.0-57-generic` with your kernel version. Execute `uname -r` to find out your kernel version.

### Tutorial

build:
```sh
make
```

install:
```sh
sudo insmod test.ko
```

uninstall:
```sh
sudo rmmod test
```

check kernel messages:
```sh
sudo dmesg
```

cleanup:
```sh
make clean
```

### License

See the [LICENSE](LICENSE.md) file for license rights and limitations (MIT).