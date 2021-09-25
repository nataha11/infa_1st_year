char * my_strdup (const char *s) {
	char * tmp = calloc(strlen(s) + 1, sizeof(char));
	for (int i = 0; i <= strlen(s); i++) {
		tmp[i] = s[i];
	}
	return tmp;
}