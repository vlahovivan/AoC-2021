for j in $(seq 1 25); do
  c=$(printf "%02d" $j)
  echo "Creating $c directory..."
  mkdir "day-$c"

  echo "Creating cpp files..."

  cd "day-$c"

  touch "$c-1.cpp"
  cp "../template.cpp" "$c-1.cpp"
  touch "$c-2.cpp"
  cp "../template.cpp" "$c-2.cpp"

  cd ..
done

