#include <R.h>
#include <Rinternals.h>
#include <stdlib.h> // for NULL
#include <R_ext/Rdynload.h>

/* FIXME: 
Check these declarations against the C/Fortran source code.
*/

/* .Call calls */
extern SEXP fourPNO_Gibbs_2PNO(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_Gibbs_4PNO(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_kappa_initialize(SEXP);
extern SEXP fourPNO_min2LL_4pno(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_rmvnorm(SEXP, SEXP, SEXP);
extern SEXP fourPNO_Total_Tabulate(SEXP, SEXP, SEXP);
extern SEXP fourPNO_update_2pno(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_update_ab_NA(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_update_ab_norestriction(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_update_theta(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_update_WKappaZ_NA(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP fourPNO_Y_4pno_simulate(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"fourPNO_Gibbs_2PNO",              (DL_FUNC) &fourPNO_Gibbs_2PNO,               7},
    {"fourPNO_Gibbs_4PNO",              (DL_FUNC) &fourPNO_Gibbs_4PNO,              14},
    {"fourPNO_kappa_initialize",        (DL_FUNC) &fourPNO_kappa_initialize,         1},
    {"fourPNO_min2LL_4pno",             (DL_FUNC) &fourPNO_min2LL_4pno,              8},
    {"fourPNO_rmvnorm",                 (DL_FUNC) &fourPNO_rmvnorm,                  3},
    {"fourPNO_Total_Tabulate",          (DL_FUNC) &fourPNO_Total_Tabulate,           3},
    {"fourPNO_update_2pno",             (DL_FUNC) &fourPNO_update_2pno,             12},
    {"fourPNO_update_ab_NA",            (DL_FUNC) &fourPNO_update_ab_NA,             8},
    {"fourPNO_update_ab_norestriction", (DL_FUNC) &fourPNO_update_ab_norestriction,  8},
    {"fourPNO_update_theta",            (DL_FUNC) &fourPNO_update_theta,             7},
    {"fourPNO_update_WKappaZ_NA",       (DL_FUNC) &fourPNO_update_WKappaZ_NA,       14},
    {"fourPNO_Y_4pno_simulate",         (DL_FUNC) &fourPNO_Y_4pno_simulate,          7},
    {NULL, NULL, 0}
};

void R_init_fourPNO(DllInfo *dll)
{
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}