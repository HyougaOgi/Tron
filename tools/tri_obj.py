import sys

def tri_f(tokens):
    vs = tokens[1:]
    if len(vs) <= 3:
        return [" ".join(tokens)]
    out = []
    v0 = vs[0]
    for i in range(1, len(vs)-1):
        out.append(" ".join(["f", v0, vs[i], vs[i+1]]))
    return out

def process(in_path, out_path):
    with open(in_path, "r", encoding="utf-8", errors="ignore") as f, \
         open(out_path, "w", encoding="utf-8") as g:
        for line in f:
            if line.lstrip().startswith("f "):
                toks = line.strip().split()
                for tri in tri_f(toks):
                    g.write(tri + "\n")
            else:
                g.write(line)

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python3 tri_obj.py <in.obj> <out.obj>")
        sys.exit(1)
    process(sys.argv[1], sys.argv[2])
    print("Wrote:", sys.argv[2])
