

T := mt


sample := 12:00:00AM \
          12:00:00PM \
          12:00:01PM \
          12:00:01AM \
          01:01:01AM \
          01:01:01PM \
          07:05:45PM




all:	loop


loop: $(T)
	@for time in $(sample) ; do \
    echo INPUT: $$time ; \
    echo -n "OUTPT: " ; \
    echo $$time | ./$(T) ; \
    echo " " ; \
  done


$(T): timeconversion.cc
	@g++ -o $@ $^
