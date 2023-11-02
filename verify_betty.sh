for dir in ./*
do
	betty $dir/*.c
	betty $dir/*.h
done
