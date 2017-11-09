void reverse(char* str) {
	if (str) {
		// Instead of indices, use char pointer
		char *end = str;
		while (*end) {
			++end;
		}
		--end;  //one char back, so its not null
		
		// Don’t have to worry about returning “str” pointer to the front
		while (start < end) {
			char temp = *str;
			*str = *end;
			*end = temp;
			++str;
			--end;
		}
	}
}
