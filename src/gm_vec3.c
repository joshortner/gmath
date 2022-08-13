#include "gm_vec3.h"

#include <math.h>

void gm_vec3_copy(gm_vec3_t * p_dest, const gm_vec3_t * p_src)
{
    p_dest->x = p_src->x;
    p_dest->y = p_src->y;
    p_dest->z = p_src->z;
}

void gm_vec3_sub(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out)
{
    p_out->x = p_lhs->x - p_rhs->x;
    p_out->y = p_lhs->y - p_rhs->y;
    p_out->z = p_lhs->z - p_rhs->z;
}

void gm_vec3_add(const gm_vec3_t * p_lhs, const gm_vec3_t * p_rhs, gm_vec3_t * p_out)
{
    p_out->x = p_lhs->x + p_rhs->x;
    p_out->y = p_lhs->y + p_rhs->y;
    p_out->z = p_lhs->z + p_rhs->z;
}

void gm_vec3_norm(const gm_vec3_t * p_vec, gm_vec3_t * p_out)
{
    float mag = sqrtf((p_vec->x * p_vec->x) + (p_vec->y * p_vec->y) + (p_vec->z * p_vec->z));
    p_out->x = p_vec->x / mag;
    p_out->y = p_vec->y / mag;
    p_out->z = p_vec->z / mag;
}

void gm_vec3_scale(const gm_vec3_t * p_vec, float s, gm_vec3_t * p_out)
{
    p_out->x = p_vec->x * s;
    p_out->y = p_vec->y * s;
    p_out->z = p_vec->z * s;
}

float gm_vec3_dist(const gm_vec3_t * p_v1, const gm_vec3_t * p_v2)
{
    float x_diff = p_v2->x - p_v1->x;
    float y_diff = p_v2->y - p_v1->y;
    float z_diff = p_v2->z - p_v1->z;
    return sqrtf((x_diff * x_diff) + (y_diff * y_diff) + (z_diff * z_diff));
}