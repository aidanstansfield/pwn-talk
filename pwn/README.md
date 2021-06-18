# Usage
```bash
docker build . -t pwn
cd pwn6
docker run --name pwn --rm -it -v $(pwd):/opt pwn bash
```
