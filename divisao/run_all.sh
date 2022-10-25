for i in `seq -w 01 10`; do
	for j in `seq 1 3`; do
		make check_divi_${i}_${j} report
	done
done
