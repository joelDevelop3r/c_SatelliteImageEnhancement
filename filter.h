/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _FILTER_H_RPCGEN
#define _FILTER_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define FILTER 121356589
#define FV1 1

#if defined(__STDC__) || defined(__cplusplus)
#define leer_original 1
extern  void * leer_original_1(void *, CLIENT *);
extern  void * leer_original_1_svc(void *, struct svc_req *);
#define filtrar_imagen 2
extern  void * filtrar_imagen_1(int *, CLIENT *);
extern  void * filtrar_imagen_1_svc(int *, struct svc_req *);
#define escribir_output 3
extern  void * escribir_output_1(void *, CLIENT *);
extern  void * escribir_output_1_svc(void *, struct svc_req *);
extern int filter_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define leer_original 1
extern  void * leer_original_1();
extern  void * leer_original_1_svc();
#define filtrar_imagen 2
extern  void * filtrar_imagen_1();
extern  void * filtrar_imagen_1_svc();
#define escribir_output 3
extern  void * escribir_output_1();
extern  void * escribir_output_1_svc();
extern int filter_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_FILTER_H_RPCGEN */