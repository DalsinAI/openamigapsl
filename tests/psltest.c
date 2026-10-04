/* openamigapsl smoke test: public suffixes and registrable domains. */
#include <stdio.h>
#include <libpsl.h>
int main(void)
{
    const psl_ctx_t *psl = psl_builtin();
    const char *names[] = { "co.uk", "bbc.co.uk", "www.bbc.co.uk", "com", "login.live.com", "github.io", "x.github.io", "amiga.org" };
    unsigned i;
    printf("PSL %s builtin=%s rules=%d\n", psl_get_version(), psl ? "yes" : "no", psl_suffix_count(psl));
    for (i = 0; i < sizeof names / sizeof *names; i++) {
        const char *reg = psl_registrable_domain(psl, names[i]);
        printf("%s public=%d registrable=%s\n", names[i], psl_is_public_suffix(psl, names[i]), reg ? reg : "(none)");
    }
    return 0;
}
