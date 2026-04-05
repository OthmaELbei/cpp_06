#!/bin/bash
PASS=0
FAIL=0

check() {
    input="$1"
    expected="$2"
    result=$(./a.out "$input" 2>&1)
    if [ "$result" = "$expected" ]; then
        echo "✅ PASS: '$input'"
        PASS=$((PASS + 1))
    else
        echo "❌ FAIL: '$input'"
        echo "   expected: $expected"
        echo "   got:      $result"
        FAIL=$((FAIL + 1))
    fi
}

# Char
check "a"    "$(printf "char: 'a'\nint: 97\nfloat: 97.0f\ndouble: 97.0")"
check "Z"    "$(printf "char: 'Z'\nint: 90\nfloat: 90.0f\ndouble: 90.0")"

# Int
check "0"    "$(printf "char: Non displayable\nint: 0\nfloat: 0.0f\ndouble: 0.0")"
check "42"   "$(printf "char: '*'\nint: 42\nfloat: 42.0f\ndouble: 42.0")"
check "-42"  "$(printf "char: impossible\nint: -42\nfloat: -42.0f\ndouble: -42.0")"
check "9999999999" "$(printf "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible")"

# Float
check "42.0f"  "$(printf "char: '*'\nint: 42\nfloat: 42.0f\ndouble: 42.0")"
check "nanf"   "$(printf "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan")"
check "+inff"  "$(printf "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf")"
check "-inff"  "$(printf "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf")"

# Double
check "42.0"   "$(printf "char: '*'\nint: 42\nfloat: 42.0f\ndouble: 42.0")"
check "nan"    "$(printf "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan")"
check "+inf"   "$(printf "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf")"
check "-inf"   "$(printf "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf")"

# Invalid
check "abc"    "$(printf "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible")"
check "42f"    "$(printf "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible")"

echo ""
echo "Results: ✅ $PASS passed  ❌ $FAIL failed"