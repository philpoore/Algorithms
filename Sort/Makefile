SORT_FUNCTIONS=Selection Insertion Merge MergeInPlace
all:
	for sort in $(SORT_FUNCTIONS) ; do \
		$(MAKE) -C $$sort ; \
	done

clean:
	@for sort in $(SORT_FUNCTIONS) ; do \
		$(MAKE) -C $$sort clean ; \
	done