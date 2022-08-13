#ifndef __GM_VEC3__
#define __GM_VEC3__

typedef struct 
{
    float x;
    float y;
    float z;
} gm_vec3_t;

void gm_vec3_copy(gm_vec3_t * p_dest, const gm_vec3_t * p_src);
void gm_vec3_sub(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out);
void gm_vec3_add(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out);
void gm_vec3_norm(const gm_vec3_t * p_vec, gm_vec3_t * p_out);
void gm_vec3_scale(const gm_vec3_t * p_vec, float s, gm_vec3_t * p_out);
float gm_vec3_dist(const gm_vec3_t * p_v1, const gm_vec3_t * p_v2);

#endif 