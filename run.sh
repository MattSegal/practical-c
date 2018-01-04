INPUT_FILE="$1"
shift
OUTPUT_FILE="./bin/${INPUT_FILE%%.*}"
RUN_CMD="./${OUTPUT_FILE} $@"

mkdir -p ./bin
# -o is output file
# -lm is "link math library" - what a stupid fucking convention
clang "$INPUT_FILE" -lm -o "$OUTPUT_FILE"
eval "$RUN_CMD"
