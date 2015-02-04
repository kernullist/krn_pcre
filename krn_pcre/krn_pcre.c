#include "krn_pcre_internal.h"

BOOLEAN krn_pcre_match(PWSTR pPattern, PWSTR pString, SIZE_T length)
{
	BOOLEAN bMatch = FALSE;
	pcre16* reCompiled = NULL;
	
	do
	{
		const char *pcreErrorStr = NULL;
		int pcreErrorOffset = 0;
		int subStrVec[30] = {0};
		int pcreExecRet = -1;

		reCompiled = pcre16_compile(pPattern, 0, &pcreErrorStr, &pcreErrorOffset, NULL);
		if (reCompiled == NULL)
		{
			break;
		}

		pcreExecRet = pcre16_exec(reCompiled, NULL, pString, length, 0, 0, subStrVec, 30);
		if (pcreExecRet < 0)
		{
			break;
		}

		bMatch = TRUE;

	} while (FALSE);

	if (reCompiled != NULL)
	{
		pcre_free(reCompiled);
		reCompiled = NULL;
	}

	return bMatch;
}

